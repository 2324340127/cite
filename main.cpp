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

//�����������ķ���ֵ
//1����Ҫ���ؾֲ�����������
int& test01()
{
	int a = 10;//�ֲ���������������е�ջ��
	return a;
}

//2�������ĵ��ÿ�����Ϊ��ֵ

int& test02()
{
	static int a = 10;//��̬�����������ȫ������

	return a;

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

	int& ref = test01();
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;

	int& ref2 = test02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test02() = 1000;//��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ

	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;


	system("pause");
	return 0;
}

