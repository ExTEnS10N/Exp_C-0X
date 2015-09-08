#include <iostream>
using namespace std;
auto test()
{
	return 15.538429612;
}
int main()
{
	auto a = 12;
	auto b = &a;
	cout << "a = " << a << "\tb = " << b << endl;
	cout << "test() -> " << test() << endl;
	//cout << "decltype(a) -> " << decltype(a) << endl;
	decltype((a*2)) c;
	c = 14;
	cout << "c = " << c << endl;
	
	//decltype(((a))) d;
	//d = 15;
	//cout << "d = " << d << endl;
}
/**
 * return 15.5384 by test()
 * @warning ‘test’ function uses ‘auto’ type specifier without trailing return type [enabled by default]
 * auto test()
 *           ^
 * 
 * @error  ‘d’ declared as reference but not initialized
 *  decltype((a)) d;
 *                 ^
 * decltype(()) returns reference, more braces is the same;
*/