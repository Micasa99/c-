#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
//c++�У���Ա�����ͳ�Ա�����ֿ��洢
class Person
{
	int m_A; //�Ǿ�̬int��Ա���� ���ڴ�+4---->ֻ�зǾ�̬��Ա����������Ķ�����
	static int m_B;//��̬��Ա���� �������۵Ķ����� ���ڴ�+0
	void func();//�Ǿ�̬��Ա���� ���ڴ�+0 
	static void func2();// ���ڴ�+0
};
void test01()
{
	Person p;
	//�ն���ռ�õ��ڴ�ռ�Ϊ��1
	//�� ��c++��������ÿ���ն���Ҳ����һ���ֽڵĿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��;
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ

	cout << "size of p =" << sizeof(p) << endl;
}
void test02() {
	//һ��int�Ǿ�̬��Առ�õ��ڴ�ռ�Ϊ��4
	Person p;
	cout << "size of p =" << sizeof(p) << endl;

}
int main() {
	test01();
	return 0;

}

//ֻ�зǾ�̬�ĳ�Ա������������Ķ���
//