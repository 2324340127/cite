#include <iostream>
#include <string>
#include <math.h>
using namespace std;


//����
//������ȡ����
//�﷨���������� &���� = ԭ��


//����ע������
//���ñ����ʼ�� 
//int &a;�Ǵ����
//���ó�ʼ�����޷��ٸı�

//��������

////1��ֵ����
//void swap01(int a,int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////2����ַ����
//void swap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////3�����ô���
//void swap03(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}

////�����������ķ���ֵ
////1����Ҫ���ؾֲ�����������
//int& test01()
//{
//	int a = 10;//�ֲ���������������е�ջ��
//	return a;
//}
//
////2�������ĵ��ÿ�����Ϊ��ֵ
//
//int& test02()
//{
//	static int a = 10;//��̬�����������ȫ������
//
//	return a;
//
//}

//���������ã�ת��Ϊ int*const ref  = &a��
//void func(int& ref)
//{
//	ref = 100;//ref �����ã�ת��Ϊ *ref = 100
//}

//��������
//ʹ�ó��������������βΣ���ֹ�������

//��ӡ���ݺ���
void showvalue(const int &val)//��ֹ�޸�ʵ������
{
	//val = 2000;
	cout << "val = " << val << endl;
}

int main()
{
	//int a = 10;
	////��������,b��a������Ѱַ��10
	//int& b = a;
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//a = 100;
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	
	
	//int a = 10;
	////int& b;�Ǵ����
	//int& b = a;
	//int& c = a;//�����ж��С��
	//int d = 20;
	//int& b = d;//b�Ѿ���a�ı�������������d�ı���
	//b = d;//��ֵ�����������Ǹ�������
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//cout << "c = " << c << endl;

	//int a = 50;
	//int b = 40;
	//swap02(&a, &b);
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;


	//swap03(a, b);//���ô��� �������βθı�ʵ��
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;

	//int& ref = test01();
	//cout << "ref = " << ref << endl;
	//cout << "ref = " << ref << endl;

	//int& ref2 = test02();
	//cout << "ref2 = " << ref2 << endl;
	//cout << "ref2 = " << ref2 << endl;
	//cout << "ref2 = " << ref2 << endl;

	//test02() = 1000;//��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ

	//cout << "ref2 = " << ref2 << endl;
	//cout << "ref2 = " << ref2 << endl;
	//cout << "ref2 = " << ref2 << endl;


	//int a = 10;

	////�Զ�ת��Ϊint* const ref =&a;��ַ���ɱ䣬��ָ��ֵ���Ըı�
	////Ҳ����Ϊʲô�����޷��޸�

	//int& ref = a;
	//ref = 20;//�ڲ�����ref Ϊ���ã��Զ�������ת��Ϊ *ref = 20

	//cout << "a:" << a << endl;
	//cout << "ref: " << ref << endl;//�����ref���Ϊ*refָ��Ľ���


	//int a = 10;
	////int& ref = 10;//���� ���ñ�������һ��Ϸ����ڴ�ռ� 

	////����const֮�� �������������޸�Ϊ
	////int temp = 10;const int& ref = temp;
	//const int& ref = 10;
	////ref = 20;//���� ����const ֮����ֻ���������޸�

	int a = 100;
	showvalue(a);





	system("pause");
	return 0;
}

