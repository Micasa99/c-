#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
#include<fstream> 
//二进制读文件主要利用流函数对象调用成员函数 read
//函数原型: istream& read(char *buffer ,int len)
//参数解释:字符指针buffer指向内存中一段存储空间 len是读取的字节数
class Person {
public:
	char m_Name[64];
	int m_Age;
};
void test01() {
	//包含头文件
	
	//创建流对象
	ifstream ifs;
	//打开文件判断是否打开成功
	ifs.open("Person.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return;
	}
	//读文件
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "姓名" << p.m_Name << "年龄" << p.m_Age << endl;

	//关闭文件
	ifs.close();
}
int main() {
	test01();
	return 0;
}