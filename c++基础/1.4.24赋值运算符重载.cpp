#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//c++���������ٸ�һ�������4������
//
//1. Ĭ�Ϲ��캯��(�޲Σ�������Ϊ��)
//2. Ĭ����������(�޲Σ�������Ϊ��)
//3. Ĭ�Ͽ������캯���������Խ���ֵ����
//4. ��ֵ����� operator=, �����Խ���ֵ����
class Person
{
public:
	Person(int age)
	{
		m_Age=new int(age);
	}
	int* m_Age;
	~Person()
	{
		if(m_Age!=NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	//����
	Person&//�������ü�Ϊ����
		operator=(Person& p)
	{//�������ṩǳ����
		//m_Age=p.m_Age;

		//Ӧ�����ж��Ƿ��������ڶ���������У����ͷŸɾ�
		if(m_Age!=NULL)
		{
			delete m_Age;
		}
		m_Age = new int(*p.m_Age);//��ʵ�����
		return *this;
	}
};


void test01() {
	Person p1(18);
	cout << "p1 age:" << *p1.m_Age << endl;//�����ڶ���
	Person p2(20);
	cout << "p2 age:" << *p2.m_Age << endl;
	p2 = p1;//��ֵ����
	cout << "p1 age:" << *p1.m_Age << endl;
	cout << "p2 age:" << *p2.m_Age << endl;//�ظ��ͷ�ͬһ�����ڴ�ռ�  �������������������ǳ��������������
	Person p3(30);
	cout << "p3 age:" << *p3.m_Age << endl;
	p3 = p2 = p1;//��������
	cout << "p3 age:" << *p3.m_Age << endl;


}
int main() {
	test01();
	//int a = 10;
	//int b = 20;
	//int c = 30;
	//a = b = c;
	//cout << "a=" << a << endl;
	//cout << "b=" << b << endl;
	//cout << "c=" << c << endl;
	return 0;
}