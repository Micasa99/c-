#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
#include<fstream> 
//�����ƶ��ļ���Ҫ����������������ó�Ա���� read
//����ԭ��: istream& read(char *buffer ,int len)
//��������:�ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ� len�Ƕ�ȡ���ֽ���
class Person {
public:
	char m_Name[64];
	int m_Age;
};
void test01() {
	//����ͷ�ļ�
	
	//����������
	ifstream ifs;
	//���ļ��ж��Ƿ�򿪳ɹ�
	ifs.open("Person.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//���ļ�
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "����" << p.m_Name << "����" << p.m_Age << endl;

	//�ر��ļ�
	ifs.close();
}
int main() {
	test01();
	return 0;
}