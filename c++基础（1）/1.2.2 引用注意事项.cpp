#define _CRT_SECURE_NO_WARNINGS 1
//1.引用必须初始化
//2.引用一旦初始化后不可以更改
#include<iostream>
using namespace std;
int main() {
	int a = 10;
	int& b = a;
	//1.引用必须初始化
	//int &b；语法错误
//2.引用一旦初始化后不可以更改
	int c = 20;
	b = c;//赋值操作，合法
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	b = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;


}
