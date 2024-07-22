#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
class AbstractDrinking {
public:
	//煮水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中
	virtual void PourInCup() = 0;
	//加入辅料
	virtual void PutSomething() = 0;
	//制作饮品
	void makeDrink() {
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};
//制作咖啡
class Coffee :public AbstractDrinking {
	//煮水
	virtual void Boil() {
		cout << "煮农夫山泉" << endl;
	}
	//冲泡
	virtual void Brew() {
		cout << "冲泡咖啡" << endl;
	}
	//倒入杯中
	virtual void PourInCup() {
		cout << "倒入杯中" << endl;
	}
	//加入辅料
	virtual void PutSomething() {
		cout << "加入糖和牛奶" << endl;
	}
};
//制作茶叶
class Tea :public AbstractDrinking {
	//煮水
	virtual void Boil() {
		cout << "煮矿泉水" << endl;
	}
	//冲泡
	virtual void Brew() {
		cout << "冲泡茶叶" << endl;
	}
	//倒入杯中
	virtual void PourInCup() {
		cout << "倒入杯中" << endl;
	}
	//加入辅料
	virtual void PutSomething() {
		cout << "加入枸杞" << endl;
	}
};
//制作函数
void doWork(AbstractDrinking* abs) {
	abs->makeDrink();//制作不同饮品的同一接口
	delete abs;//释放
}
void test01() {
	//制作咖啡
	doWork(new Coffee);//AbstractDringking *abs=new coffee 父类指针指向子类对象 调用的是父类dowork函数 但在子类中各个具体实现都做了重写操作 所以对应子类中的具体实现
	//制作茶水
	doWork(new Tea);

}
int main() {
	test01();
	return 0;
}