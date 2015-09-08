using namespace std;
#include"const.h"
extern const int bufsize;
constexpr int temp()
{
	//if(53 > 0)
	return 53 + 21;
	//else
	//	return 21 - 53;
}
int i = 3;
int main()
{
	cout << "bufsize = " << bufsize << endl;
	
	const int &b = bufsize;
	cout << "b = " << b << endl;
	
	int a = 24;
	cout << "a = " << a << endl;
	const int &c = a;
	//c = b;
	a = b;
	cout << "c = " << c << endl;
	
	double e = 48.755;
	const int &f = e;
	//f = 23;
	e = 25.338;
	cout << "e =" << e << "\tf = " << f << endl;
	
	int g = 54;
	const int *p = &g;
	//*p = 32;
	g = 43;
	cout << "g = " << g << "\t*p = " << *p << endl;
	p = &a;
	cout << "g = " << g << "\t*p = " << *p << endl;
	
	constexpr int h = temp();
	//h = 46;
	cout << "h = " << h << endl;
	
	//constexpr int *p2 = &a;
	constexpr int *p3 = &i;
	//cout << "*p2 = " << *p2 << endl;
	cout << "*p3 = " << *p3 << endl;
}
/*
 * 1.constexpr function can contain one sentence - return statement;
 * 2.constexpr pointer must point to public object 
 * defined outside functions,for they have static address. 
*/