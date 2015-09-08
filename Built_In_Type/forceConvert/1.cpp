#include<iostream>
using namespace std;
int main()
{
	bool a = -42;
	bool c = 42;
	char e = -1;
	unsigned char d = 999;
	unsigned int o= -1;
	//unsigned double q= -1;
	cout << "a(bool -42) = " << a << endl;
	cout << "c(bool 42) = " << c << endl;
	cout << "e(char -1) = " << (int)e << endl;
	cout << "d(unsigned char -1) = " << (int)d << endl;
	cout << "o(unsigned int -1) = " << o << endl;
	cout << "in fact,d(<0) =" <<256 - 259%256<<endl;
	cout << "if d >255 d=" 259 % 256 << endl;
}
/*
 * unsigned double is invald
 * if( unsigned char d<0)
 * d = 256 - |(int)d| % 256
 * else if(d>255)
 * d = (int)d % 256
*/