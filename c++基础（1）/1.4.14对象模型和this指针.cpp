#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//c++中，成员变量和成员函数分开存储
class Person
{
	int m_A; //非静态int成员函数 类内存+4---->只有非静态成员变量属于类的对象上
	static int m_B;//静态成员变量 不属于累的对象上 类内存+0
	void func();//非静态成员函数 类内存+0 
	static void func2();// 类内存+0
};
void test01()
{
	Person p;
	//空对象占用的内存空间为：1
	//析 ：c++编译器给每个空对象也分配一个字节的空间，是为了区分空对象占内存的位置;
	//每个空对象也应该有一个独一无二的内存地址

	cout << "size of p =" << sizeof(p) << endl;
}
void test02() {
	//一个int非静态成员占用的内存空间为：4
	Person p;
	cout << "size of p =" << sizeof(p) << endl;

}
int main() {
	test01();
	return 0;

}

//只有非静态的成员变量才属于类的对象
//