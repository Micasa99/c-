#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//常函数 常对象
class Person
{
public:
	//this指针本质：指针常量 指针的指向是不可修改的

	void showPerson() const//此处const相当于 const Person * const this  使指针指向的值不可修改
	{
		/*this->*/m_A = 100;
		this = NULL;//this指针不可以修改指针指向  相当于Person*const this; 但指向的值可以修改
		
	}
	void func02() {
		;
	}
	int m_A;
	mutable int m_B;//特殊变量，在常函数中也可以修改这个值 ，mutaable 关键字
};

void test01() {
	Person p;
	p.showPerson();

}
void test02() {
	const Person p;//在对象前加const变为常对象
	p.m_A = 100;
	p.m_B = 100;//m_B在常对象下也可以修改
	//常对象只能调用常函数
	p.showPerson();
	p.func02();//常对象不可以调用普通的成员函数，因为普通的成员函数可以修改属性

}