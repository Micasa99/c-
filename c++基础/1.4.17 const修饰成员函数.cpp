#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//������ ������
class Person
{
public:
	//thisָ�뱾�ʣ�ָ�볣�� ָ���ָ���ǲ����޸ĵ�

	void showPerson() const//�˴�const�൱�� const Person * const this  ʹָ��ָ���ֵ�����޸�
	{
		/*this->*/m_A = 100;
		this = NULL;//thisָ�벻�����޸�ָ��ָ��  �൱��Person*const this; ��ָ���ֵ�����޸�
		
	}
	void func02() {
		;
	}
	int m_A;
	mutable int m_B;//����������ڳ�������Ҳ�����޸����ֵ ��mutaable �ؼ���
};

void test01() {
	Person p;
	p.showPerson();

}
void test02() {
	const Person p;//�ڶ���ǰ��const��Ϊ������
	p.m_A = 100;
	p.m_B = 100;//m_B�ڳ�������Ҳ�����޸�
	//������ֻ�ܵ��ó�����
	p.showPerson();
	p.func02();//�����󲻿��Ե�����ͨ�ĳ�Ա��������Ϊ��ͨ�ĳ�Ա���������޸�����

}