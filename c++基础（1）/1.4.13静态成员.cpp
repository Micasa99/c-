#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

class Person
{
public:
	static int m_A;
	//1.��̬��Ա����
	//���ж�����ͬһ����
	//�ڱ���׶η����ڴ�
	//���������������ʼ��

	//��̬��Ա����Ҳ�з���Ȩ��
	int m_C;
	static void func() {
		m_A = 150;//��̬��Ա�������Է��ʾ�̬��Ա����
		//m_C = 150;//���ɷ��ʷƾ�̬��Ա���� �޷����������ĸ�����
		cout << "static void func ����" << endl;

	}
	// 2.��̬��Ա����
	// ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
	// ���ж�����ͬһ������





private:
	static int m_B;

	static void func2()
	{
		cout << "static void func2 �ĵ��� " << endl;
	}


};
int Person::m_A=100;//�����ʼ��
int Person::m_B = 200;
void test01()
{
	Person p;
	cout << p.m_A << endl;
	Person p2;
	p2.m_A = 200;
	cout << p.m_A << endl;
}
void test02() {
	//��̬��Ա���� ������ĳ�������ϣ����ж��󶼹���ͬһ������
	//��� ��̬��Ա���������ַ��ʷ�ʽ
	// 1��ͨ��������з���
	Person p;
	cout << p.m_A << endl;
	// 2��ͨ���������з���
	cout << Person::m_A << endl;
	//cout << Person::m_B << endl;������ʲ���˽�еľ�̬��Ա����

}


void test03() {
	
	//1.ͨ��������з���
	Person p;
	p.func();
	//2.ͨ���������з���
	Person::func;

}



int main() {
	test01();
	test02();

	return 0;
}
