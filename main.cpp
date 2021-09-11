#include <iostream>
#include <string>
#include <math.h>
using namespace std;


//引用
//给变量取别名
//语法：数据类型 &别名 = 原名


//引用注意事项
//引用必须初始化 
//int &a;是错误的
//引用初始化后无法再改变

//交换函数

////1、值传递
//void swap01(int a,int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////2、地址传递
//void swap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////3、引用传递
//void swap03(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}

////引用做函数的返回值
////1、不要返回局部变量的引用
//int& test01()
//{
//	int a = 10;//局部变量存放在四区中的栈区
//	return a;
//}
//
////2、函数的调用可以作为左值
//
//int& test02()
//{
//	static int a = 10;//静态变量，存放在全局区域
//
//	return a;
//
//}

//发现是引用，转换为 int*const ref  = &a；
//void func(int& ref)
//{
//	ref = 100;//ref 是引用，转换为 *ref = 100
//}

//常量引用
//使用场景：用来修饰形参，防止误操作；

//打印数据函数
void showvalue(const int &val)//防止修改实参数据
{
	//val = 2000;
	cout << "val = " << val << endl;
}

int main()
{
	//int a = 10;
	////创建引用,b和a都可以寻址到10
	//int& b = a;
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//a = 100;
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	
	
	//int a = 10;
	////int& b;是错误的
	//int& b = a;
	//int& c = a;//可以有多个小名
	//int d = 20;
	//int& b = d;//b已经是a的别名，不能再是d的别名
	//b = d;//赋值操作，而不是更改引用
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//cout << "c = " << c << endl;

	//int a = 50;
	//int b = 40;
	//swap02(&a, &b);
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;


	//swap03(a, b);//引用传递 可以用形参改变实参
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;

	//int& ref = test01();
	//cout << "ref = " << ref << endl;
	//cout << "ref = " << ref << endl;

	//int& ref2 = test02();
	//cout << "ref2 = " << ref2 << endl;
	//cout << "ref2 = " << ref2 << endl;
	//cout << "ref2 = " << ref2 << endl;

	//test02() = 1000;//如果函数的返回值是引用，这个函数调用可以作为左值

	//cout << "ref2 = " << ref2 << endl;
	//cout << "ref2 = " << ref2 << endl;
	//cout << "ref2 = " << ref2 << endl;


	//int a = 10;

	////自动转换为int* const ref =&a;地址不可变，但指针值可以改变
	////也就是为什么引用无法修改

	//int& ref = a;
	//ref = 20;//内部发现ref 为引用，自动帮我们转换为 *ref = 20

	//cout << "a:" << a << endl;
	//cout << "ref: " << ref << endl;//这里的ref类比为*ref指针的解码


	//int a = 10;
	////int& ref = 10;//错误 引用必须引用一块合法的内存空间 

	////加上const之后 编译器将代码修改为
	////int temp = 10;const int& ref = temp;
	//const int& ref = 10;
	////ref = 20;//错误 加上const 之后变成只读，不可修改

	int a = 100;
	showvalue(a);





	system("pause");
	return 0;
}

