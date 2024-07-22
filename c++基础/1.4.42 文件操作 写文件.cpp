#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
#include<fstream> //包含文件流
//文件类型分为两种：
// 1.文本文件:文件以文的ASCLL码形式存储在计算机中
//2.二进制文件：文件以文本的二进制形式春初在计算机中，用户一般不能直接读取
//操作文件三大类
//1. <ofstream>:写操作
//2.<ifstream>:读操作
//3.<fstream>:读写操作

//文本文件：
//写文件
//步骤
//1.包含头文件：
//#include<ftream>
//2.创建流对象
//ofstream ofs;
//3.打开文件
//ofs.open("文件路径", 打开方式)
// 打开方式：
// ios::in              为读文件而打开文件  
// ios::out             为写文件而打开文件  
// ios::ate             出事位置：文件尾
// ios::app             追加方式写文件
// ios::trunc           如果文件存在先删除，再创建
// ios::binary          二进制文件
// 注意：文件打开方式可以配合使用，用|操作符
// EX： 用二进制方式写文件 ios::binary| ios::out
// 
//4.写数据
//ofs << "写入的数据"
//5.关闭文件
//ofs.close();

//文本文件，写文件
void test01() {
	//创建流对象
	ofstream ofs;
	//指定打开方式
	ofs.open("test.txt", ios::out);
	//写内容
	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：18" << endl;
	//关闭文件
	ofs.close();
	//不指定默认创建在项目文件夹
}
int main() {
	test01();
	system("pause");
	return 0;
}