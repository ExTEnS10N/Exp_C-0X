#include<iostream>
using namespace std;

/// <summary>指针“释放(delete)”的含义</summary>
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
	//Conclusion 释放是指清除指针所指向地址空间的内容,并且弃用该地址.
}

/// <summary>指针释放后能否赋值</summary>
void exp5()
{
	int *p = new int;
	*p = (int)5;
	cout << endl << p << endl << *p << endl << &p << endl;
	delete p;
	cout << endl << p << endl << *p << endl << &p << endl;
	//int *s = new int; //或直接 p=new int 
	//p = s;
	//p = new int;未释放又分配新空间，则指针指向新地址，指针的地址不变
	*p = (int)6;
	cout << endl << p << endl << *p << endl << &p << endl;
	delete p;
	//Conclusion 指针释放后必须重新赋予地址，否则，在原地址空间内存放新的内容时，不能通过该指针释放其内容
}

/// <summary>求顺序存储空间地址相减的结果</summary>
void exp4()
{
	int *intptr = new int[7]{ 1,2,3,4,5,6,7 };
	cout << &intptr[6] - &intptr[0];
	//Conclusion 等于6
}

/// <summary>同地址值的多个指针占用空间大小</summary>
void exp3()
{
	int i = 456789;
	int *p1 = &i;
	int *p2 = p1;
	int *p3 = &i;
	cout << &p1 << endl << &p2 << endl << &p3;
	//Conclusion 占用了多个空间来存储
}

/// <summary>动态数组的清空</summary>
void exp2()
{
	int *intptr = new int[7]{ 1,2,3,4,5,6,7 };
	cout << endl;
	int *ptr = &intptr[4];
	for (int i = 0; i < 7; ++i)
		cout << intptr[i] << endl;
	intptr = new int[7];
	cout << endl << *ptr << endl << ptr << endl << &intptr[4];
	//Conclusion 申请新空间不会delete原空间
}

/// <summary>动态数组指针的释放</summary>
void exp1()
{
	int *intptr = new int[7]{ 1,2,3,4,5,6,7 };
	int *ptr = &intptr[4];
	cout << endl << ptr << endl << *ptr << endl;
	for (int i = 0; i < 7; ++i)
	cout << intptr[i] << endl;
	delete intptr; //error: delete intptr[4]
	cout << endl << ptr << endl << *ptr;
	//Conclusion 释放数组指针即释放整个数组
}

int main()
{
	exp6();
	return 0;
}