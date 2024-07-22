#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//常量引用：使用场景：用来修饰形参，防止误操作
void showValue(const int &val) {
	val = 1000;
	cout << "val=" << val << endl;

}
int main() {
	int a = 10;
	int& ref = 10;//错误
	int& ref = a;//引用必须引一块合法的内存空间
	const int& ref = 10;//加上const之后，编译器将代码修改为 int temp =10;
	 //                              int &ref=temp;
	int a = 100;
    showValue(a);

	system("pause");
	return 0;


}