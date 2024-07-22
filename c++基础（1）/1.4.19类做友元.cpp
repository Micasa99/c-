#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
class Building;//提前声明
class Building
{
	friend class GoodGay;//类做友元
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
		//参观函数
	
	Building* building;

};
GoodGay::GoodGay() {
//创建建筑物对象
	building = new Building;
};
void GoodGay::visit() {
	cout << "好基友正在访问：" << building->m_SettingRoom << endl;
	cout << "好基友正在访问：" << building->m_BedRoom << endl;

};


//类外写全局函数：
Building::Building() {

	m_SettingRoom = "客厅";
	m_BedRoom = "卧室";
};
void test01() {
	GoodGay gg;
	gg.visit();

}
int main() {
	test01();
}
