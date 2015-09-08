#include <iostream>
using namespace std;

int main()
{
	int *p;
	p = new int[6]{1, 2, 3, 4 , 5, 6};
	//cout << (begin(p) - end(p)) << endl; // p isn't array.
	//cout << "p[-9] = " << p[-9] << endl;
	delete p;
	
	int k[6] = {1,2,3,4,5,6};
	cout << begin(k) - end(k) << endl;
	int *t = &k[3];
	cout << t[-1] << endl;
	
	
	int *ip[4]; //equal to int *(ip[4]); 
	int (*ap)[4]; // similar to int *ap = new int[4];
	//We should calculate the expression inside braces first;
	//so ip[4] is an array that  can store 4 intptr;
	//but ap is an pointor that point to a array which can store 4 int;
	
	return 0;
}