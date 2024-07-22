#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//占位参数
//返回值类型 函数名（数据类型）{}
void func(int a,int/*占位*/) {
	//默认值只能放在后面
	cout << "this is func" <<endl;


}
//目前阶段占位参数用不到
//占位参数还可以有默认参数
int main() {
	func(10,10);
	system("pause");
	return 0;
}