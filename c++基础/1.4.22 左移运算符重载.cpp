#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//�������������
class Person
{
	friend ostream& operator<<(ostream& cout, Person& p);
public:
	Person(int a, int b) {
		m_A = a;
		m_B = b;
	}
	//1.���ó�Ա�����������������  operator<<(cout)  �򻯰汾 p<<cout ����
	//ͨ����ʹ�ó�Ա�����������������Ϊ�޷�ʵ��cout�����
	void operator<<(Person& p) {

	}
private:
	int m_A;
	int m_B;
};
//2.������Ԫ��������<<
ostream& operator<<(ostream &cout,Person & p)//������  operator<<(cout,p) ��Ϊcout << p
{                         //cout: ��׼��������� ostream
	cout << "m_A=" << p.m_A << endl;
	cout << "m_B=" << p.m_B << endl;
	return cout;

}               
void test01() {
	Person p(10, 10);
	cout << p;
	cout << p<<endl;//����Ϊ��ʽ���˼�� �����ع�ʱ���� otream& cout 
}
int main(){
	test01();
	return 0;
}
//�ܽ᣺��������������Ԫ����ʵ������Զ�����������