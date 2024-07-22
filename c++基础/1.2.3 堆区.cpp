#define _CRT_SECURE_NO_WARNINGS 1
//​堆区：
//
//​		由程序员分配释放, 若程序员不释放, 程序结束时由操作系统回收
//
//​		在C++中主要利用NEW在堆区开辟内存
//
//* *示例： * *
#include<iostream>
using namespace std;
int* func()
{
	//利用new关键字可以将数据开辟到堆区
	//指针本身也是放在栈上的局部变量 而指针保存的数据保存在堆区
	int* p = new int(10);
	return p;
}

int main() {

	int* p = func();

	cout << *p << endl;
	cout << *p << endl;

	system("pause");

	return 0;
}