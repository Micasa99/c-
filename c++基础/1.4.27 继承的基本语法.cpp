#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
//�̳��﷨��
//class����:�̳з�ʽ(public...) ����
//����Ҳ��Ϊ����
//����Ҳ��Ϊ������
class BasePage {
public:
	void header() {
		cout << "��ҳ  ��¼  ע��" << endl;
	}
	void footer() {
		cout << "����  ���� ��ͼ" << endl;
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
		cout << "Javaѧ����Ƶ" << endl;
	}
};
class Python :public BasePage
{
	void content() {
		cout << "Pythonѧ����Ƶ" << endl;
	}
};
class CPP :public BasePage
{
	void content() {
		cout << "C++ѧ����Ƶ" << endl;
	}

};
void test01() {
	cout << "Java������Ƶ�������£�" << endl;
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