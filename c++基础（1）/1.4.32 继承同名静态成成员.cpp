#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
//���ھ�̬����ͬ��
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
	static int m_A;
	static void func() {
		cout << "Base-static func()����" << endl;
	}
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
 int Base:: m_A = 10;
class Son :public Base
{
public:
	Son()
	{
		cout << "Son �Ĺ��캯��" << endl;
		
	}
	~Son()
	{
		cout << "Son ����������" << endl;
	}

	static int m_A ;
	void func() {
		cout << "Son-func()����" << endl;
	}
	};
static void func() {
	cout << "Son-static func()����" << endl;
}
int Son::m_A = 200;
	//1.ͬ����̬��Ա����
	void test01() {
		 //��̬��Ա���ʷ�ʽ������
		Son s;
		cout << s.m_A << endl;
		cout << s.Base::m_A << endl;//���ͨ�����������ʸ�����ͬ����Ա ��Ҫ��������
		//2.ͨ����������
		cout  << "ͨ����������" << endl;
		cout << "Son��m_A" << Son::m_A << endl;
		cout << "Base��m_A" <<Base::m_A << endl;
		cout << "Base��m_A" << Son::Base::m_A << endl;
	}
	//2.ͬ����̬��Ա����
	void test02() {
		Son s;
		s.func();//ֱ�ӵ���Ϊ���� //������ͬ����Ա�����ش�Ŷ����������ͬ����Ա �����в���������
		s.Base::func();//���ͨ�����������ʸ�����ͬ����Ա ��Ҫ��������
		Son::func();
		Son::Base::func();
	}
	int main() {
		test01();
		test02();
		return 0;
	}