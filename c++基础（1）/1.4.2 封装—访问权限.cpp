#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//访问权限
//三种
// 公共权限 public  成员类内雷类外均可访问
// 保护权限 protected 成员类内可以访问 类外不可访问 儿子可以访问父亲中的保护内容
// 私有权限 private  成员类内可以访问，类外不可访问 儿子不可
// 
// 
class Person
{
public:
	//公共权限
	string m_name;
protected:
	string m_car;
	//
private:
	int m_Password;
public:
	void func() {
		m_name = "张三";
		m_car = "拖拉机";
		m_Password = 123456;


	}
	//


};
int main() {
	//实例化
	Person p1;
	p1.m_name = "李四";
	p1.m_car = "benz";//保护、私有权限成员类外无法访问
	p1.m_Password = 123;
	return 0;

}