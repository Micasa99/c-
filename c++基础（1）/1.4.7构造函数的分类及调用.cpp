#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//分类
// 1、有参 无参 
// 2、普通构造 拷贝构造
//
class Person
{
public:
	//构造函数
	Person() {
		cout << "Person的无参（默认）构造函数的调用" << endl;
	}
	Person(int a) {
		age = a;
		cout << "Person的有参构造函数的调用" << endl;
	}
	//拷贝构造函数
	Person(const Person &p) {
		//将传入的人身上的所有属性，拷贝到我身上
		age = p.age;
	cout << "Person的拷贝构造函数的调用" << endl;
}
	//析构函数
	~Person() {
		cout << "Person的析构函数调用" << endl;
	}
	int age;
};
//调用
void test01() {
	//1.括号法
	Person p1;//默认构造函数调用
	Person p2(10);//有参构造函数调用
	Person p3(p2);//拷贝构造函数调用
	cout << "p2的年龄为" << p2.age << endl;
	cout << "p3的年龄为" << p3.age << endl;
	//注意事项
	//调用默认构造函数时，不要加()
	//因为下面这行代码,编译器会认为是一个函数的声明，不会认为在创建对象；
	// Person p1();
	//2.显示法
	Person p1;
	Person p2 = Person(10);//有参构造
	Person p3 = Person(p2);//拷贝构造
	           //等号右侧：匿名对象
	Person(10);//当前行结束后，系统会立即回收掉匿名对象
	//注意2.  不要利用拷贝构造函数 初始化匿名对象
	Person(p3);//编译器会认为 Peron(p3)==Person p3;对象的声明

	//3.隐式转换法
	Person p4 = 10;//相当于写了 Person p4=person(10)//有参构造
	Person p5 = p4;//拷贝构造
	
}
int main() {
	test01();
	//system("pause");
	return 0;


}