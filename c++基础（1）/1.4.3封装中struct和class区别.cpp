#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//区别 默认的访问权限不同
//struct 默认访问权限为公共
// class 默认访问权限为私有
class C1
{
	int m_A;//默认权限为私有


};
struct C2
{

	int m_A;//默认权限为公共
};

int main() {
	C1 c1;
	c1.m_A = 100;
	C2 c2;

	c2.m_A = 100;
	return 0;
}