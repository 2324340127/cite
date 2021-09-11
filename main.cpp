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

//引用做函数的返回值
//1、不要返回局部变量的引用
int& test01()
{
	int a = 10;//局部变量存放在四区中的栈区
	return a;
}

//2、函数的调用可以作为左值

int& test02()
{
	static int a = 10;//静态变量，存放在全局区域

	return a;

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

	int& ref = test01();
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;

	int& ref2 = test02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test02() = 1000;//如果函数的返回值是引用，这个函数调用可以作为左值

	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;


	system("pause");
	return 0;
}

