#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
class Base {
public:
	Base()
		{
			cout << "Base �Ĺ��캯��" << endl;
		}
	~Base()
	{
		cout << "Base ����������" << endl;
	}
	int m_A;
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
	}
	~Son()
	{
		cout << "Son ����������" << endl;
	}

	int m_D;
};
void test01() {
	Son s;
}
//Base �Ĺ��캯��
//Son �Ĺ��캯��
//Son ����������
//Base ����������
//�̳����ȵ��ø��๹�캯�����ٵ������๹�캯��������˳����֮�෴
int main() {
	test01();
	return 0;
}