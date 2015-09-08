#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream log("log.txt", ios::out);
	cout.rdbuf(log.rdbuf());
    cout<< "g++ gcc 4.8.2\n";
	cout<< "sizeof(int)->" << sizeof(int) << endl;
	cout<< "sizeof(short)->" << sizeof(short) << endl;
	cout<< "sizeof(long)->" << sizeof(long) << endl;
	cout<< "sizeof(long long)->" << sizeof(long long) << endl;
	cout<< "sizeof(float)->" << sizeof(float) << endl;
	cout<< "sizeof(double)->" << sizeof(double) << endl;
	cout<< "sizeof(long double)->" << sizeof(long double) << endl;
	cout<< "sizeof(char)->" << sizeof(char) << endl;
	cout<< "sizeof(wchar_t)->" << sizeof(wchar_t) << endl;
	cout<< "sizeof(char16_t)->" << sizeof(char16_t) << endl;
	cout<< "sizeof(char32_t)->" << sizeof(char32_t) << endl;
	//cout<< "sizeof(char64_t)->" << sizeof(char64_t) << endl;
	cout<< "sizeof(bool)->" << sizeof(bool) << endl;
	log.close();
	return 0;
}
/*
 * 1.char16_t & char32_t needs g++ -std=c++11
 * 2.no char64_t in c++11 
 * 3.If the number can't be less than zero, use unsigned type.
*/