#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
//对于静态函数同样
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
	static int m_A;
	static void func() {
		cout << "Base-static func()调用" << endl;
	}
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
 int Base:: m_A = 10;
class Son :public Base
{
public:
	Son()
	{
		cout << "Son 的构造函数" << endl;
		
	}
	~Son()
	{
		cout << "Son 的析构函数" << endl;
	}

	static int m_A ;
	void func() {
		cout << "Son-func()调用" << endl;
	}
	};
static void func() {
	cout << "Son-static func()调用" << endl;
}
int Son::m_A = 200;
	//1.同名静态成员属性
	void test01() {
		 //静态成员访问方式有两盅
		Son s;
		cout << s.m_A << endl;
		cout << s.Base::m_A << endl;//如果通过子类对象访问父类中同名成员 需要加作用域
		//2.通过类名访问
		cout  << "通过类名访问" << endl;
		cout << "Son下m_A" << Son::m_A << endl;
		cout << "Base下m_A" <<Base::m_A << endl;
		cout << "Base下m_A" << Son::Base::m_A << endl;
	}
	//2.同名静态成员函数
	void test02() {
		Son s;
		s.func();//直接调用为子类 //子类中同名成员会隐藏带哦父类中所有同名成员 包括有参数的重载
		s.Base::func();//如果通过子类对象访问父类中同名成员 需要加作用域
		Son::func();
		Son::Base::func();
	}
	int main() {
		test01();
		test02();
		return 0;
	}