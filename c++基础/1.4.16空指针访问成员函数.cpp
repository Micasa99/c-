#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//空指针调用成员函数
class Person
{
public:
	void shouClassName() { 
		cout << "this is Person class" << endl;

	}
	void showPersonName() {
		if (this == NULL) {
			return;
		}//提高代码的健壮性
		cout << "age=" << /*默认this->*/m_age << endl;
	}
	int m_age;
};
void test03()
{
	Person* p = NULL;
	p->shouClassName();//可以正常运行
	//p->showPersonName();//传入指针为空
	


}
int main()
{


	return 0;
}