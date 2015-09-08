#include<iostream>
using namespace std;
double j;

//extern int m = 8;
int _O = 12;

class test{
public:
	int t;
	test()
	{
		cout << "test is initialized!" << endl;
		t = 31;
	}
}ta;

int main()
{
	int a = 1;
	int b = {2};
	int c{3};
	int d(4);
	cout << a << b << c << d << endl;
	
	long double e = 3.1415926536;
	int f{d};
	int g{e};
	int h(e);
	cout << f << g << h << endl;
	wchar_t i;
	cout << &i << " " << *(&i) << " " << i <<endl;
	*(&i) = 5;
	cout << &i << " " << *(&i) << " " << i << endl;
	cout << &j << " " << *(&j) << " " << j << endl;
	
	extern int k;
	//extern int L = 6;
	//cout << k << endl;
	//m = 5;
	//cout << m << endl;
	
	int _= 9;
	cout << _ << endl;
	int __ = 10;
	cout << __ << endl;
	int _N = 11;
	cout << _N << endl;
	cout << _O<< endl;
	
	test te;
	cout << te.t << endl;
	cout << ta.t << endl;
	return 0;
}
/*
 * 1.
 * WARNING:narrowing conversion of ‘e’ from ‘long double’ to ‘int’ inside { } [-Wnarrowing]
 * int g{e};
 * 		^
 * 
 * 2.
 * Default Initialization:
 * When Defining a variable without init value,
 * it will be initialize by default .
 * If define outside the function,variable will be initialize by zero;
 * If define inside function,variable will be uninitialize with value.
 * But memory has been allocate for it;
 * 
 * 3.when accessing a extern variable, it must be define in other files.
 * 4."Extern variable" can't be define at the same time during you declare. 
*/