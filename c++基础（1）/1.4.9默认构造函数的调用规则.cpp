#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//构造函数的调用规则
// 1.创建一个类 编译器会给每个类都添加至少三个函数：
// （1）默认构造 空实现
// （2）析构 空实现
// （3）拷贝构造 值拷贝
class Person
{
public:
	Person() {
		cout << "person的默认构造函数调用" << endl;
	}
	Person(int age) {
		m_Age = age;
		cout << "person的含参构造函数调用" << endl;
	}
	Person(const Person& p) {
		m_Age = p.m_Age;
		cout << "person的拷贝构造函数调用" << endl;
	}
	~Person() {
		cout << "person的析构函数调用" << endl;
	}

	int m_Age;


};
void test01() {
	Person p;
	p.m_Age = 18;
	Person p2(p);
	cout << "p2 age:" << p2.m_Age << endl;
}
//如果用户定义有参构造函数，c++不再提供默认无参构造，但会提供默认拷贝构造拷贝构造
// 如果用户定义拷贝构造函数 c++不会再提供其他构造函数
// 
// 
void test02() {
	Person p2(28);
	Person p3(p2);
}
int main() {

	test01();
}
