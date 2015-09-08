#include<exception>
#include <stdexcept>
#include <iostream>
using namespace std;

int *getadress()
{
	int i = 12;
	return &i; //warning: address of local variable ‘i’ returned [-Wreturn-local-addr]
}

int main()
{
	//int i = 1/0;
	
	/** @breif throw various kinds of error
	throw invalid_argument("main has two arguments, but only receive 0");
	throw domain_error("there isn't any result can reflect the arguments!");
	throw logic_error("stupid!");
	throw range_error("Out of RANGE!");
	throw runtime_error("An runtime_error occured!");
	throw overflow_error("overflow_error!");
	*/
	
	try{
		throw "Something Wrong here!";
	}
	catch(...){cout << "catch sth!" << endl;}
	
	int *p;
	try{
		p = new int[16];
		throw p;
	}
	catch(...)
	{
		delete p;
		cout << "successfully delete p" << endl;
	}
	
	int *p2;
	try{
		int i2 = 21;
		p2 = &i2;
		throw p2;
	}
	catch(...)
	{
		cout << "p2 = " << p2 << "*p2 = " << *p2 << endl;
	}
	cout << *getadress() << endl;
	
	return 0;
}