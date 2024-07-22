#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
//访问子类同名成员 直接访问
//访问父类中继承的同名成员 需要加作用域
class Base {
public:
	Base()
	{
		cout << "Base 的构造函数" << endl;
		m_A = 100;

	}
	~Base()
	{
		cout << "Base 的析构函数" << endl;
	}
	int m_A;
	void func() {
		cout << "Base-func()调用" << endl;
	}
	void func(int a) {//调用时仍需加作用域
		cout << "Base-func()调用" << endl;
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
		cout << "Son 的构造函数" << endl;
		m_A = 200;
	}
	~Son()
	{
		cout << "Son 的析构函数" << endl;
	}

	int m_A;
	void func() {
		cout << "Son-func()调用" << endl;
};
//1.同名成员属性
void test01() {
	Son s;
	cout << s.m_A << endl;
	cout << s.Base::m_A << endl;//如果通过子类对象访问父类中同名成员 需要加作用域
}
//2.同名成员函数
void test02() {
	Son s;
	s.func();//直接调用为子类 //子类中同名成员会隐藏带哦父类中所有同名成员 包括有参数的重载
	s.Base::func();//如果通过子类对象访问父类中同名成员 需要加作用域
}
int main() {
	test01();
	test02();
	return 0;
}