#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
//继承语法：
//class子类:继承方式(public...) 父类
//父类也称为基类
//子类也称为派生类
class BasePage {
public:
	void header() {
		cout << "首页  登录  注册" << endl;
	}
	void footer() {
		cout << "帮助  交流 地图" << endl;
	}
	void left() {
		cout << "Java  Python  C++" << endl;

	}
};
//
class Java :public BasePage
{
public:
	void content() {
		cout << "Java学科视频" << endl;
	}
};
class Python :public BasePage
{
	void content() {
		cout << "Python学科视频" << endl;
	}
};
class CPP :public BasePage
{
	void content() {
		cout << "C++学科视频" << endl;
	}

};
void test01() {
	cout << "Java下载视频界面如下：" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
}
int main() {
	
	test01();
	return 0;
}