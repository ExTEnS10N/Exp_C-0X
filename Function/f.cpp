#include<iostream>
#include<string>
using namespace std;

string &ReferensRetrun(string &source)
{
	return source;
}

using TwoDimensionArray = int[2][2];
/** @error ‘RetArrayByAlias’ declared as function returning an array
TwoDimensionArray RetArrayByAlias()
{
	TwoDimensionArray b = {0, 1, 2, 3};
	return b;
}
*/

TwoDimensionArray* RetArrayByAlias(TwoDimensionArray *source)
{
	//error: assigning to an array from an initializer list
	//*source = {0, 1, 2, 3};
	
	(*source)[0][1] = 0;
	return source;
}

const int *AFunc(const int *c)
{
	return c;
}

int *AFunc(int *d)
{
	const int *e = AFunc(const_cast<const int*>(d));
	return const_cast<int*>(e);
}

int main()
{
	string a = "Here is string";
	ReferensRetrun(a) = "It seems strange.";
	cout << a << endl;

	TwoDimensionArray b = {6, 7, 8, 9};
	RetArrayByAlias(&b);
	for(int i = 0; i < 2; ++i)
	{
		for(int j = 0; j < 2; ++j)
		{
			cout << b[i][j] << endl;
		}
	}
	
	int f = 31415926;
	
	*AFunc(&f) = 10242048;
	
	cout << f << endl;
	return 0;
}
