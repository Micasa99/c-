#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;


class Person
{
public:
	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	//жиди==
	bool operator==(Person& p) {
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
			return true;
		}
		return false;
	}
	bool operator!=(Person& p) {
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
			return false;
		}
		return true;
	}
	string m_Name;
	int m_Age;
}; 
void test01() {
	Person p1("Tom", 18);
	Person p2("Tom", 18);
	if (p1 == p2) {
		cout << "same" << endl;
	}
	else{ cout << "different" << endl; }

}
int main() {
	test01();
	return 0;
}