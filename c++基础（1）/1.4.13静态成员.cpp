#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

class Person
{
public:
	static int m_A;
	//1.静态成员变量
	//所有对象共享同一份数
	//在编译阶段分配内存
	//类内声明，类外初始化

	//静态成员变量也有访问权限
	int m_C;
	static void func() {
		m_A = 150;//静态成员函数可以访问静态成员变量
		//m_C = 150;//不可访问菲静态成员变量 无法区分属于哪个对象
		cout << "static void func 调用" << endl;

	}
	// 2.静态成员函数
	// 静态成员函数只能访问静态成员变量
	// 所有对象共享同一个函数





private:
	static int m_B;

	static void func2()
	{
		cout << "static void func2 的调用 " << endl;
	}


};
int Person::m_A=100;//类外初始化
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
	//静态成员变量 不属于某个对象上，所有对象都共享同一份数据
	//因此 静态成员变量有两种访问方式
	// 1、通过对象进行访问
	Person p;
	cout << p.m_A << endl;
	// 2、通过类名进行访问
	cout << Person::m_A << endl;
	//cout << Person::m_B << endl;类外访问不到私有的静态成员变量

}


void test03() {
	
	//1.通过对象进行访问
	Person p;
	p.func();
	//2.通过类名进行访问
	Person::func;

}



int main() {
	test01();
	test02();

	return 0;
}
