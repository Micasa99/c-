#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
#include<fstream> 

//读文件步骤
//1.包含头文件
// #include<fstream>
// 2.创建流对象
// ifstream ifs;
// 3.打开文件并判断是否打开成功
// ifs.open("文件路径",打开方式)
// 4.读数据
// 四种方式读取
// 5.关闭文件
// ifs.close()
// 
void test01() {
	//创建流对象
	ifstream ifs;
	//打开并且判断是否打开
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return;
	}
	//读数据
	//第一种
	//char buf[1024] = { 0 };
	//while (ifs >>buf)               /*buf读到头自动返回"假"标志*/
 //   {
	//	cout << buf << endl;
 //   }
	//第二种
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}*/
	//第三种
	string buf;
	while (getline(ifs , buf)) {
		cout << buf << endl;
	}
	//第四种(效率较低)
	char c;
	while ((c = ifs.get()) != EOF)//判断是否读到文件尾    EOF : end of file
	{
		cout << c;
	}
	
	//关闭文件
	ifs.close();
}
int main() {
	test01();
	return 0;
}
