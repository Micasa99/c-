#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//栈区数据的注意事项
//栈区的数据由编译器管理和释放
// 不要返回局部变量的地址
//
int* func( int b )//形参数据也会放在栈区
{
	b = 100;
	int a = 10;//局部变量，存放在栈区，栈区的数据在执行完后自动释放
	return &a;//返回局部变量的地址

}
int main() {
	int* p = func(10);
	cout << *p << endl;//第一次可以打印正确的数字，是因为编译器做了保留
	cout << *p << endl;//栈区清除，数据未保留
	system("pause");
	return 0;



}