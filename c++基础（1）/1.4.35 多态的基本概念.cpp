#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
//分类 静态多态：包括函数重载，运算符重载等，复用函数名；
//动态多态：派生类和虚函数实现运行时多态；
//静态多态和动态多态区别：
// 静态多态地址早绑定-编译阶段确定函数地址
// 动态多态地址晚绑定-运行阶段确定函数地址
//多态
//
//动物类
class Animal
{
public:
	//如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
    virtual/*虚函数关键词*/ void speak() {
		cout << "动物在说话" << endl;
	}
};
//动态多态满足条件：
//1.有继承关系
//2.子类重写父类的虚函数，子类中virtual可写可不写，父类必须写
//（重写：函数返回值类型，函数名称，参数列表完全相同）

//动态多态的调用：
//父类的指针或者引用 指向子类的对象


//猫类
class Cat :public Animal {
public:
	void speak()
	{
		cout << "小猫在说话" << endl;

	}
};
//执行说话的函数
void doSpeak(Animal& animal) //Animal& animal=cat;  //父类的指针可以指向子类对象
{
	animal.speak();
}
void test01() {
	Cat cat;
	doSpeak(cat);//父类的引用接收了子类的对象
}

int main() {
	test01(); //结果： 动物在说话  //原因：地址早绑定，在编译阶段结确定了函数的地址
	return 0;
}