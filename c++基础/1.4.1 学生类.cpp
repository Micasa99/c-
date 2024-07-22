#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	//类中的属性和行为统一称为成员，
	//属性 成员属性 成员变量
	//行为 成员函数 成员方法
public:
	//属性
	string m_name;
	int m_Id;

	//行为
	void showStudent()
	{
		cout << "name:" << m_name << "id:" << m_Id << endl;

	}
	//显示姓名和学号
	//给姓名赋值
	void setName(string name)
	{
		m_name = name;


	}

	//给学号赋值
	void setId(int id)
	{
		m_Id = id;


	}
};
//通过类创建一个具体学生 （实例化对象）
int main() {
	Student s1;
	s1.m_name = "张三";
	s1.m_Id = 1;
	s1.showStudent();
	Student s2;
	s2.setName("李四");//通过行为给属性赋值
	s2.m_Id = 2;
	s2.showStudent();
	return 0;



}