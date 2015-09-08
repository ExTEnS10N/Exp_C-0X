#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a = "abcdefg";
	auto b = a.begin();
	auto c = a.end();
	cout << c - b << endl;
	//cout << "b = " << b << endl; //can't do this
	//cout << "c = " << c << endl;
}