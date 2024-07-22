#define _CRT_SECURE_NO_WARNINGS 1
//函数形参
#include<iostream>
using namespace std;
//函数的默认参数
int func(int a, int b=20, int c=30) {
	//默认值只能放在后面
	return a + b + c;
	

}
//1)如果某个位置已经有了默认参数，那么从这个位置往后从左到右都必须有默认参数
//2）如果函数的声明有默认参数，函数的实现就不能有默认参数
//声明和实现只能一个有默认参数
int func2(int a=10, int b=10);
int func2(int a=10, int b=10) //重定义的默认参数“二义性”
{

	return a + b;


}
int main() {
	cout << func(10) << endl;
	cout << func(10,30) << endl;//如果自己传入数据用传入的数据
	cout << func2(10) << endl;

	system("pause");
	return 0;
}