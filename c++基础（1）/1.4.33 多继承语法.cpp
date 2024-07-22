#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
//语法 class 子类:继承方式 父类1，继承方式 父类2
//多继承可能引发父类中有同名成员出现，需要加作用域区分
//实际开发中不建议使用!
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
	cout << "m_A=" << s.Base1::m_A << endl;//二义性 需加作用域区分
}
int main() {

}