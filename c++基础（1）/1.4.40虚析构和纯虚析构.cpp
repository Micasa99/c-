#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
//多态使用时，如果子类中有属性开辟在堆区，那么父类指针在释放时无法调用子类的析构代码
//解决方法：将父类中的析构函数改为虚析构或者纯虚析构
//许析构和纯虚析构特性:
//1.可以解决父类指针释放子类对象
//2.都需要有具体的函数实现
//许析构和纯虚析构区别：
//如果是纯虚析构，该类属于抽象类，无法实例化对象
//
//
//
class Animal
{
public:
	Animal() {
		cout << "Animal的构造函数的调用" << endl;
	}
	//virtual ~Animal()//虚析构 解决父类指针释放子类对象不干净的问题
	//{
	//	cout << "Animal的虚析构函数的调用" << endl;
	//}
	virtual ~Animal() = 0;//纯虚析构---->编译错误：无法解析的外部命令  缺少析构函数的具体实现
	                      //纯虚析构需要声明也需要具体实现
	                      //有了纯虚析构后这个类也属于抽象类，无法实例化对象
	virtual void speak() = 0;

};
Animal:: ~Animal() 
{
	cout << "Animal的纯虚析构函数的调用" << endl;
}
class Cat : public Animal {
public:
	Cat(string name) {
		cout << "Cat的构造函数的调用" << endl;
		m_Name =new string(name);//在堆区创造了属性

	}
	~Cat() {
		if (m_Name != NULL) {
			cout << "Cat的析构函数的调用" << endl;  
			delete m_Name;
			m_Name = NULL;
		}
	}
	virtual void speak() {
		cout <<*m_Name <<"小猫在说话" << endl;
	}
	string* m_Name;

};
void test01() {
	Animal* animal = new Cat("Tom");
	//未调用Cat的析构函数 因为是父类指针指向子类对象 父类指针在析构时不会调用子类中析构函数，导致子类中如果有堆区属性，出现内存泄漏
	//解决方法：将Animal析构函数改为虚析构
	animal->speak();
	delete animal;
}
int main() {
	test01();
	return 0;
}