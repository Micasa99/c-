#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
class Building;//��ǰ����
class Building
{
	friend class GoodGay;//������Ԫ
	Building();

public:
	string m_SettingRoom;
private:
	string m_BedRoom;

};
class GoodGay
{
public:
	GoodGay();
	void visit();
		//�ιۺ���
	
	Building* building;

};
GoodGay::GoodGay() {
//�������������
	building = new Building;
};
void GoodGay::visit() {
	cout << "�û������ڷ��ʣ�" << building->m_SettingRoom << endl;
	cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;

};


//����дȫ�ֺ�����
Building::Building() {

	m_SettingRoom = "����";
	m_BedRoom = "����";
};
void test01() {
	GoodGay gg;
	gg.visit();

}
int main() {
	test01();
}
