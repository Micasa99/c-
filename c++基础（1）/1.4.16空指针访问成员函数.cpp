#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//��ָ����ó�Ա����
class Person
{
public:
	void shouClassName() { 
		cout << "this is Person class" << endl;

	}
	void showPersonName() {
		if (this == NULL) {
			return;
		}//��ߴ���Ľ�׳��
		cout << "age=" << /*Ĭ��this->*/m_age << endl;
	}
	int m_age;
};
void test03()
{
	Person* p = NULL;
	p->shouClassName();//������������
	//p->showPersonName();//����ָ��Ϊ��
	


}
int main()
{


	return 0;
}