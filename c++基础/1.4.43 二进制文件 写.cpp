#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
#include<fstream> 
//打开方式指定为 ios::binary
//写文件 利用流对象廖勇成员函数write
//函数原型： ostream& write(const cahr* buffer,int len);
//参数解释：字符指针buffer指向内存中一段存储空间 len是读写的字节数

//
class Person {
public:
	char m_Name[64];//用c语言的字符数组代替字符串
	int m_Age;
};
void test01() {
	ofstream ofs("person.txt", ios::out | ios::binary);//在构造处直接指定路径和打开方式
	//3.打开文件
	//ofs.open("person.txt", ios::out | ios::binary);
	//4.写文件
	Person p = { "张三",18 };
	ofs.write((const char*)&p,sizeof(Person));/*强制类型转换为char**/
	//5.关闭文件
	ofs.close();



}
int main() {
	test01();
	return 0;
}
