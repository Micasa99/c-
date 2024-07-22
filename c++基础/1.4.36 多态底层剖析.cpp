#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;

class Animal
{
public:
	virtual/*虚函数关键词*/ void speak() {
		cout << "动物在说话" << endl;
	}
};

class Cat :public Animal {
public:
	void speak()
	{
		cout << "小猫在说话" << endl;

	}
};
void doSpeak(Animal& animal)
{
	animal.speak();
}
void test01() {
	Cat cat;
	doSpeak(cat);
}

int main() {
	test01();
	return 0;
}
void test02() {
	cout << "sizeof Animal" << sizeof(Animal) << endl;
	//类似与空类 大小为1字节
	//+virtual后 大小为4字节--->指针大小为4字节
	//
}
//Animal类内部结构：    vfptr  virtual function pointer 虚函数（表）指针
//                        |
                          /*|
                        vftable     virtual function table 虚函数表  表内部记录一个虚函数的地址
							                               &Animal::speak*/
//Cat类内部结构：       vfptr  virtual function pointer 虚函数（表）指针
//                        |
                          |
//                        vftable     virtual function table 虚函数表  表内部记录一个虚函数的地址
//							                               &Animal::speak------->&Cat::speak
//                                    重写：当子类重写的父类的虚函数，子类的虚函数表内部会替换成子类的虚函数地址
                                             当父类的指针或引用指向子类的对象是，就发生了多态
							                  
							                        Animal & animal=cat
							                        animal.speak()
