#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
//��������ͬ����Ա ֱ�ӷ���
//���ʸ����м̳е�ͬ����Ա ��Ҫ��������
class Base {
public:
	Base()
	{
		cout << "Base �Ĺ��캯��" << endl;
		m_A = 100;

	}
	~Base()
	{
		cout << "Base ����������" << endl;
	}
	int m_A;
	void func() {
		cout << "Base-func()����" << endl;
	}
	void func(int a) {//����ʱ�����������
		cout << "Base-func()����" << endl;
	}
protected:
	int m_B;
private:
	int m_C;
};
class Son :public Base
{
public:
	Son()
	{
		cout << "Son �Ĺ��캯��" << endl;
		m_A = 200;
	}
	~Son()
	{
		cout << "Son ����������" << endl;
	}

	int m_A;
	void func() {
		cout << "Son-func()����" << endl;
};
//1.ͬ����Ա����
void test01() {
	Son s;
	cout << s.m_A << endl;
	cout << s.Base::m_A << endl;//���ͨ�����������ʸ�����ͬ����Ա ��Ҫ��������
}
//2.ͬ����Ա����
void test02() {
	Son s;
	s.func();//ֱ�ӵ���Ϊ���� //������ͬ����Ա�����ش�Ŷ����������ͬ����Ա �����в���������
	s.Base::func();//���ͨ�����������ʸ�����ͬ����Ա ��Ҫ��������
}
int main() {
	test01();
	test02();
	return 0;
}