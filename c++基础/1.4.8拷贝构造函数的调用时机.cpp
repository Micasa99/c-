#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//使用拷贝拷贝构造函数的时机
//1.使用一个已经创建完毕的对象来初始化另一个对象
// 2.值传递的方式给函数参数传值
// 3.值方式返回局部对象
//
class Person
{public:
	Person() {
		cout << "person的默认构造函数调用" << endl;
	}
	Person(int age) {
		m_Age = age;
		cout << "person的含参构造函数调用" << endl;
	}
	Person(const Person &p) {
		m_Age = p.m_Age;
		cout << "person的拷贝构造函数调用" << endl;
	}
	~Person() {
		cout << "person的析构函数调用" << endl;
	}

	int m_Age;


};
//1.使用一个已经创建完毕的对象来初始化另一个对象
void test01() {
	Person p1(20);
	Person p2(p1);
	cout << "p2的年龄为" << p2.m_Age << endl;

};
// 2.值传递的方式给函数参数传值
void doWork(Person p)
{
	;
}
void test02(){
	Person p;
	doWork(p);

}
// 3.值方式返回局部对象

Person doWork2()
{
	Person p1;
	cout << (int*)&p1 << endl;

	return p1;

}
void test03()
{
	Person p = doWork2();
	cout << (int*)&p << endl;

}
int main() {
	test03();
	
	return 0;

}