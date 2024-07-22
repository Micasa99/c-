#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
//三种继承方式 //不能扩大权限，只能缩小权限
//公有继承
class Base1 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son1 :public Base1
{
	void func() {
		m_A = 10;//父类中的公共权限成员 到子类中是公共权限
		m_B = 10;//        保护                   保护
		m_C = 10;//        私有                 无法访问
	}
};
void test01() 
{
	Son1 s1;
	s1.m_A = 100;
	s1.m_B = 100;
	s1.m_C = 100;
}
//保护继承
class Son2 :protected Base1
{
public:
	void func() {
		m_A = 100;//父类中的公共权限成员 到子类中是保护权限
		m_B = 100;//        保护                   保护
		m_C = 100;//        私有                 无法访问

	}
};
void test01()
{
	Son2 s2;
	s2.m_A = 100;
	s2.m_B = 100;
	s2.m_C = 100;
}
//私有继承
class Son3 :private Base1
{
public:
	void func() {
		m_A = 100;//父类中的公公权限成员 到子类中是私有权限
		m_B = 100;//        保护                   私有
		m_C = 100;//        私有                 无法访问
	}
};
class GrandSon3 :public Son3
{
public:
	void func() {
		m_A = 100;
		m_B = 100;
		m_C = 100;

	}
};