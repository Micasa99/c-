#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//构造函数和析构函数 不写编译器自动提供空实现
// 构造函数：类名（）{}              一般用于给对象的成员初始化赋值
// 1.没有返回值也不写void
// 2.函数名称与类名相同
// 3.构造函数可以有参数也可以没有 可以发生重载
// 4.程序在调用对象是会自动调用构造函数，且只调用一次
// 
// 析构函数：~类名（）{}         一般用于清理工作
// 1.没有返回值也不写void
// 2.函数名称与类名相同
// 3.构造函数不可以有参数 不可以发生重载
// 4.程序在销毁对象是会自动调用构造函数，且只调用一次
//对象的初始化和清理
class Person
{
public:
	Person() {
		cout << "Person构造函数的调用" << endl;
	}
	~Person() {
		cout << "Person的析构函数调用" << endl;
	}

};
void test01() {
	Person p;//栈上的数据，test01执行完毕后，释放这个对象
}
int main() {
	test01();
	system("pause");
	return 0;


}