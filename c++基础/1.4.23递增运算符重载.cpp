#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//���������
 //int a=10;
 //cout<<++a<<endl;//11
 //cout << a << endl;//11
 //int b = 10;
 //cout << b++ << endl;//10
 //cout << b << endl;//11
//���ص��������
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger() {
		m_Num = 0;
	}
public:
	//����ǰ��++�����
	MyInteger& operator++()//&��ʹ��Ϊ������ʽ���� ��������һֱ��һ�����ݽ��е�������
	{
		//�Ƚ���++����
		m_Num++;
		//�ٽ�����������
		return *this;
	}
	//���غ���++�����
	MyInteger//���õ�������ֵ������temp�ֲ������ͷ�
		operator++(int)//�޷����ؽ��������������ֵĺ���
		                //int����ռλ��������������ǰ�úͺ��õ���
	{
		//�� ��¼���ؽ��
		MyInteger temp = *this;
		//�� ����
		m_Num++;
		return temp;
	}

private:
	int m_Num;
};
//����<<�������
ostream& operator<<(ostream& cout, MyInteger myint) {
	cout << myint.m_Num << endl;
	return cout;
}


void test01() {
	MyInteger myint;
	cout<< myint<<endl;
	cout << ++myint << endl;
	cout << ++(++myint) << endl;
	cout << myint++ << endl;
	cout << myint << endl;
	//cout << (myint++)++ << endl;δʵ��
}
int main() {
	test01();
	return 0;
}