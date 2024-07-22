#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//this指针指向被调用的成员函数所属的对象
//用途
//1.当形参和成员同名时 可用this指针来区分

// 2.在类的非静态成员中返回对象本身，可使用return *this


//1.解决名称冲突
class Person
{
public:
	Person(int age) {
		this->age = age;
		//this指针指向的是被调用的成员函数所属的对象
	}
	int age;
// 2.在类的非静态成员中返回对象本身，可使用return *this
	
	Person& PersonAddAge(Person &p)//返回本体需以引用的方式返回
	{
		this->age += p.age;
		return *this;
		//this为指向p2的指针，而*this指向的就是p2这个整体
	}
	Person PersonAddAge2(Person& p)//返回Person 则调用拷贝构造函数 链式引用后年龄为20
	{
		this->age += p.age;
		return *this;
		//this为指向p2的指针，而*this指向的就是p2这个整体
	}
};
void test01() {
	Person p1(18);
	cout << "p1的年龄为：" << p1.age << endl;

}
void test02() {
	Person p1(10);
	Person p2(10);
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);//链式编程思想！
	cout << "p2的年龄为：" << p2.age << endl;
}




int main() {
	test02();

}