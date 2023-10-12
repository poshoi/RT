#include<iostream>

using namespace std;

class Base
{
public:
	//纯虚函数
	//类中只要有一个纯虚函数就称为抽象类
	//抽象类：
    //1.无法实例化对象
	//2.子类必须重写父类中的纯虚函数，否则也属于抽象类
	virtual void func() = 0; //需要重写此函数才可以
};

class Son :public Base
{
public:
	virtual void func() 
	{
		cout << "func调用" << endl;
	};
};

void test01()
{
	Base * base = NULL;
    //Base b; //抽象类无法实例化对象
	//base = new Base; // 错误，抽象类无法实例化对象
    //Son s; //错误，因为子类没有重写父类中的纯虚函数，否则无法实例化对象
	base = new Son;
	base->func();
	delete base;//记得销毁
}

int main(){

    test01();
}