#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
//���麯���﷨�� virtual ����ֵ���� ������ (�����б�)=0;
//���������˴��麯������Ϊ������
//�������ص㣺1.�޷�ʵ��������  2.���������д�������еĴ��麯��������Ҳ���ڳ�����
//
class Base {
public:
	virtual void func() = 0;//���麯���﷨�� virtual ����ֵ���� ������ (�����б�)=0;


};
class Son :public Base
{
public:
	virtual void func() {
	//2.���������д�������еĴ��麯��������Ҳ���ڳ�����
		cout << "func�����ĵ���" << endl;
	}
};


void test01() {
	//Base b;
	//new Base;//�������޷�ʵ��������
	Base* base = new Son;
	base->func();

}
int main() {
	test01();
	return 0;
}