#include<iostream>
using namespace std;

/// <summary>ָ�롰�ͷ�(delete)���ĺ���</summary>
void exp6()
{
	char *p1 = new char;
	*p1 = 'p';
	cout << "p1 = " << p1 << ", *p1 = " << *p1 << endl;
	char *p2 = p1;
	cout << "p2 = " << p2 << ", *p2 = " << *p2 << endl;
	delete p1;
	cout << "p2 = " << p2 << ", *p2 = " << *p2 << endl;
	delete p2;
	//Conclusion �ͷ���ָ���ָ����ָ���ַ�ռ������,�������øõ�ַ.
}

/// <summary>ָ���ͷź��ܷ�ֵ</summary>
void exp5()
{
	int *p = new int;
	*p = (int)5;
	cout << endl << p << endl << *p << endl << &p << endl;
	delete p;
	cout << endl << p << endl << *p << endl << &p << endl;
	//int *s = new int; //��ֱ�� p=new int 
	//p = s;
	//p = new int;δ�ͷ��ַ����¿ռ䣬��ָ��ָ���µ�ַ��ָ��ĵ�ַ����
	*p = (int)6;
	cout << endl << p << endl << *p << endl << &p << endl;
	delete p;
	//Conclusion ָ���ͷź�������¸����ַ��������ԭ��ַ�ռ��ڴ���µ�����ʱ������ͨ����ָ���ͷ�������
}

/// <summary>��˳��洢�ռ��ַ����Ľ��</summary>
void exp4()
{
	int *intptr = new int[7]{ 1,2,3,4,5,6,7 };
	cout << &intptr[6] - &intptr[0];
	//Conclusion ����6
}

/// <summary>ͬ��ֵַ�Ķ��ָ��ռ�ÿռ��С</summary>
void exp3()
{
	int i = 456789;
	int *p1 = &i;
	int *p2 = p1;
	int *p3 = &i;
	cout << &p1 << endl << &p2 << endl << &p3;
	//Conclusion ռ���˶���ռ����洢
}

/// <summary>��̬��������</summary>
void exp2()
{
	int *intptr = new int[7]{ 1,2,3,4,5,6,7 };
	cout << endl;
	int *ptr = &intptr[4];
	for (int i = 0; i < 7; ++i)
		cout << intptr[i] << endl;
	intptr = new int[7];
	cout << endl << *ptr << endl << ptr << endl << &intptr[4];
	//Conclusion �����¿ռ䲻��deleteԭ�ռ�
}

/// <summary>��̬����ָ����ͷ�</summary>
void exp1()
{
	int *intptr = new int[7]{ 1,2,3,4,5,6,7 };
	int *ptr = &intptr[4];
	cout << endl << ptr << endl << *ptr << endl;
	for (int i = 0; i < 7; ++i)
	cout << intptr[i] << endl;
	delete intptr; //error: delete intptr[4]
	cout << endl << ptr << endl << *ptr;
	//Conclusion �ͷ�����ָ�뼴�ͷ���������
}

int main()
{
	exp6();
	return 0;
}