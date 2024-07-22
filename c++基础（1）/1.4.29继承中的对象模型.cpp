#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
class Base1 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son :public Base1
{
public:

	int m_D;
};
void test02() {
	
	cout << "size of Son =" << sizeof(Son) << endl;
               //16    在父类中所有的非静态成员属性都会被子类继承下去，占用内存空间
	           //      但父类中的私有属性被编译器所隐藏，无法访问，但继承且占用空间
}
//利用开发人员命令提示工具查看对象模型  //Developer Command Promt for vs2022
// 跳转盘符
// 跳转文件路径
// cd 具体路径
// cl /d1 reportSingleClassLaout类名 文件名
