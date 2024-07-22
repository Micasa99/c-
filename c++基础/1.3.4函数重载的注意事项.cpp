#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//1.引用作为函数重载的条件

void func(int &a) {
	
	cout << "func（int &a）调用" << endl;


}
void func(const int& a) //类型不同的重载
{

	cout << "func（const int &a）调用" << endl;
}

//2.函数重载碰到默认参数
void func2(int a,int b=10) {
	cout << "func2(int a)的调用" << endl;
}
void func2(int a) {
	cout << "func2(int a)的调用" << endl;
}
int main() {
	int a = 10;
	func(a);//调用的为 func(int &a)
	func(10);//调用的为func(const int& a)     const int &a=10;加const后编译器自动优化


	func2(10);
	system("pause");
	return 0;
}