#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
//���ּ̳з�ʽ //��������Ȩ�ޣ�ֻ����СȨ��
//���м̳�
class Base1 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son1 :public Base1
{
	void func() {
		m_A = 10;//�����еĹ���Ȩ�޳�Ա ���������ǹ���Ȩ��
		m_B = 10;//        ����                   ����
		m_C = 10;//        ˽��                 �޷�����
	}
};
void test01() 
{
	Son1 s1;
	s1.m_A = 100;
	s1.m_B = 100;
	s1.m_C = 100;
}
//�����̳�
class Son2 :protected Base1
{
public:
	void func() {
		m_A = 100;//�����еĹ���Ȩ�޳�Ա ���������Ǳ���Ȩ��
		m_B = 100;//        ����                   ����
		m_C = 100;//        ˽��                 �޷�����

	}
};
void test01()
{
	Son2 s2;
	s2.m_A = 100;
	s2.m_B = 100;
	s2.m_C = 100;
}
//˽�м̳�
class Son3 :private Base1
{
public:
	void func() {
		m_A = 100;//�����еĹ���Ȩ�޳�Ա ����������˽��Ȩ��
		m_B = 100;//        ����                   ˽��
		m_C = 100;//        ˽��                 �޷�����
	}
};
class GrandSon3 :public Son3
{
public:
	void func() {
		m_A = 100;
		m_B = 100;
		m_C = 100;

	}
};