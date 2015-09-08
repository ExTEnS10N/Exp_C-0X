#include<iostream>
using namespace std;
int temp()
{
return 0;
}
int main()
{
	/** @name reference */
	//@{ 
	int a = 5, b;
	int &c = a, &d = b;
	cout << "a = " << a << "\t&a = " << &a << endl;
	cout << "b = " << b << "\t&b = " << &b << endl;
	cout << "c = " << c << "\t&c = " << &c << endl;
	cout << "d = " << d << "\t&d = " << &d << endl;
	b = 6;
	cout << "b = " << b << "\t&b = " << &b << endl;
	cout << "d = " << d << "\t&d = " << &d << endl;
	d = 7;
	cout << "b = " << b << "\t&b = " << &b << endl;
	cout << "d = " << d << "\t&d = " << &d << endl;
	
	//double e = 24.255;
	//int &f = (int)e;
	//cout << "e = " << e << "f = " << f <<endl;
	//int &g = temp();
	//cout << "g = " << g << endl;
	//@}
	
	/** @name pointer*/
	//@{
	int *p1 = &b;
	int *p2 = &d;
	int *p3 = &a;
	cout << "p1 = " << p1 << "\t*p1 = " << *p1 << endl;
	cout << "p2 = " << p2 << "\t*p2 = " << *p2 << endl;
	cout << "p3 = " << p3 << "\t*p3 = " << *p3 << endl;
	*p1 = 8;
	*p2 = 9;
	*p3 = 10;
	cout << "p1 = " << p1 << "\t*p1 = " << *p1 << endl;
	cout << "p2 = " << p2 << "\t*p2 = " << *p2 << endl;
	cout << "p3 = " << p3 << "\t*p3 = " << *p3 << endl;
	//delete p1;
	//delete p2;
	//delete p3;
	//cout << "p1 = " << p1 << "\t*p1 = " << *p1 << endl;
	//cout << "p2 = " << p2 << "\t*p2 = " << *p2 << endl;
	//cout << "p3 = " << p3 << "\t*p3 = " << *p3 << endl;
	int *p4 = new int;
	*p4 = 11;
	cout << "p4 = " << p4 << "\t*p4 = " << *p4 <<endl;
	delete p4;
	//@}
	return 0;
}
/*
 * 1.reference must be initialize.
 * but the object it refers to no need to initialize first.
 * 
 * 2.in definition, '*' & '&' should be near to the name of variable
 * because they are "Declaration symble" but not type,
 * when they combine with class type, they become compound type.
 * 
 * 3.You can only delete the pointer 
 * which you used "new" to apply for more memory space.
 * 
 * 4. 21:16: error: invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘int’
 * 非常量引用的右值不能是非常量表达式
*/