#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
//�﷨ class ����:�̳з�ʽ ����1���̳з�ʽ ����2
//��̳п���������������ͬ����Ա���֣���Ҫ������������
//ʵ�ʿ����в�����ʹ��!
class Base1 {
public:
	Base1() {
		m_A = 100;
	}
	int m_A;
};
class Base2 {
public:
	Base2() {
		m_A = 200;
	}
	int m_A;
};
class Son :public Base1, public Base2 {
public:
	
	Son() {
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;

};
void test01() {
	Son s;
	cout << "size of Son" << sizeof(s) << endl;
	//16
	cout << "m_A=" << s.Base1::m_A << endl;//������ �������������
}
int main() {

}