#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>

//成员属性设置为私有优点：
// 1）可以自己控制读写权限
//2）可以检测数据的有效性
						
class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		m_name = name;
	}
	//读姓名
	string getName() {
		return m_name;
	}
	//读年龄
	int getage() {


		return m_age;
	}
	//写年龄
	void setage(int age)
	{
		if (age < 0 || age>150)
		{
			cout << "年龄赋值有误，赋值失败" << endl;
			return;

		}
		m_age = age;


	 }
	//写偶像
	void setIdol(string idol)
	{
		m_Idol = idol;

	}
private:
	string m_name;//姓名 可读可写
	int m_age=18;   //年龄 只读 在0-100范围内可写
	string m_Idol;//偶像 只写

};
int main() {
	Person p1;
	//姓名设置
	p1.setName("张三");
	cout << p1.getName() << endl;
	cout << p1.getage() << endl;
	p1.setIdol("小明");
}

