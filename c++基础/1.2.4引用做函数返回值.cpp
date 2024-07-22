#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
//1.不要返回局部变量的引用
int& test01() {

	int a = 0;//局部变量存储在四区中的 栈区
	return  a;


}
//2.函数的调用可以作为左值
int& test02() {

	static int a = 0;//static：静态变量关键词，静态变量存放在全局区，全局区上的数据在程序结束后由锡通释放
	return  a;


}
int main() {
	int& ref = test01();
	cout << "ref=" << ref << endl;//第一次结果正确，是应为编译器做了保留
	cout << "ref=" << ref << endl;
	int& ref2 = test02();
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl;//两次结果均正确
	//2.函数的调用可以作为左值
	test02() = 1000;
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl;
	system("pause");
	return 0;


}
