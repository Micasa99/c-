#define _CRT_SECURE_NO_WARNINGS 1
//函数传参时，可以利用引用让形参修饰实参

#include<iostream>
using namespace std;
//交换函数
//1.值传递
void mySwap01(int a, int b) {
	int temp = a;
		a = b;
		b = temp;
		cout << "Swap01a=" << a << endl;
		cout << "Swap01b=" << b << endl;
}
//2.地址传递
void mySwap02(int*a,int*b) {
	int temp = *a;
		* a = *b;
		*b = temp;
}

//3.引用传递:形参会修饰实参
void mySwap03(int&a,int&b) //函数中形参a是主体函数中实参a的别名
{
	int temp = a;
	a = b;
	b = temp;
}


int main() {
	int a = 10;
	int b = 20;
	mySwap01;
	mySwap02(&a, &b);
	mySwap03(a, b);//注意引用参数写法
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;

}
