#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
class Building;
class Goodgay
{
public:
	void visit() {
		//�ιۺ���
	}
	Building* building;

};
class Building
{
	friend void goodGay(Building* building);//goodGayȫ�ֺ�����Building�ĺ����ѣ����Է���Building�е�˽�г�Ա
public:
	Building()
	{
		m_SettingRoom = "����";
		m_BedRoom = "����";
	}
public:
	string m_SettingRoom;
private:
	string m_BedRoom;

};
//1.ȫ�ֺ�������Ԫ
void goodGay(Building* building)
{
	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�"<<building->m_SettingRoom<<endl;
	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
}
void test01() {

	Building building;
	goodGay(&building);


}