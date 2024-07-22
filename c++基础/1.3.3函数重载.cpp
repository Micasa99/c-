#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//函数名相同，提高复用性
//1》同一作用域下；
// 2》函数名称相同；
// 3》函数参数类型/个数/顺序不同
//函数的返回值不可以作为函数重载的条件
void func(int a) {
	//默认值只能放在后面
	cout << "func的调用1" << endl;
}
void func() {
	//默认值只能放在后面
	cout << "func的调用2" << endl;
}
void func(double a) {
	//默认值只能放在后面
	cout << "func的调用3" << endl;
}
void func(int a,double b) {
	//默认值只能放在后面
	cout << "func的调用4" << endl;
}
void func(double b ,int a) {
	//默认值只能放在后面
	cout << "func的调用5" << endl;
}
int main() {
	func(10);
	system("pause");
	return 0;
}