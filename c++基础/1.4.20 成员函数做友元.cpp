#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
class Building;//��ǰ����
class GoodGay
{
public:
	GoodGay();
	void visit01();//���Է���Building�е�˽�г�Ա
	void visit02();//�����Է���Building�е�˽�г�Ա
	Building* building;

};
class Building
{
	friend void GoodGay::visit01(); //���г�Ա��������Ԫ
	Building();

public:
	string m_SettingRoom;
private:
	string m_BedRoom;

};
Building::Building() {
	m_SettingRoom = "����";
	m_BedRoom = "����";
};
GoodGay::GoodGay() {
	//�������������
	building = new Building;
};
//����ʵ�ֳ�Ա������

void GoodGay::visit01() {
	cout << "�û������ڷ��ʣ�" << building->m_SettingRoom << endl;
	cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;

};
void GoodGay::visit02() {
	cout << "�û������ڷ��ʣ�" << building->m_SettingRoom << endl;

};

void test01() {
	GoodGay gg;
	gg.visit01();

}
int main() {
	test01();
}
