#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
#include<fstream> 

//���ļ�����
//1.����ͷ�ļ�
// #include<fstream>
// 2.����������
// ifstream ifs;
// 3.���ļ����ж��Ƿ�򿪳ɹ�
// ifs.open("�ļ�·��",�򿪷�ʽ)
// 4.������
// ���ַ�ʽ��ȡ
// 5.�ر��ļ�
// ifs.close()
// 
void test01() {
	//����������
	ifstream ifs;
	//�򿪲����ж��Ƿ��
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//������
	//��һ��
	//char buf[1024] = { 0 };
	//while (ifs >>buf)               /*buf����ͷ�Զ�����"��"��־*/
 //   {
	//	cout << buf << endl;
 //   }
	//�ڶ���
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}*/
	//������
	string buf;
	while (getline(ifs , buf)) {
		cout << buf << endl;
	}
	//������(Ч�ʽϵ�)
	char c;
	while ((c = ifs.get()) != EOF)//�ж��Ƿ�����ļ�β    EOF : end of file
	{
		cout << c;
	}
	
	//�ر��ļ�
	ifs.close();
}
int main() {
	test01();
	return 0;
}
