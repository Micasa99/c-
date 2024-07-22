#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//1、new的基本语法
int* func() {
	//在堆区创造整形数据
	//new返回的是该数据类型的指针
	int* p = new int(10);
	return p;

}
void test01() {

	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//堆区的数据由程序员管理开辟，管理释放，如果想释放用关键字delete
	//delete p;
	//cout << *p << endl;//读取访问权限冲突，内存已经被释放
}
//2、在堆区用new开辟数组
int* func()
{
	int* a = new int(10);
	return a;
}
void test02() {
	//创建10个整型数据的数组，在堆区
	int*arr = new int[10];//10代表数组有十个元素
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100;//给十个元素赋值100到109
	}
	for (int i = 0; i < 10; i++) {
		cout<<arr[i]<<endl;
		//堆区释放数组
		//释放数组时要加[]
		delete[] arr;


	}

}
int main() {
	test01;
	test02;

}