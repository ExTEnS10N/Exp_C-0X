#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<char> vb{'a','b','d'};
	for (int i = 0; i < 3; ++i)
		cout << &vb[i] << endl;
	
	cout << &vb << endl;
	
	vector<char*> vc{"a","b","cd"};
	for (int i = 0; i < 3; ++i)
		cout << vc[i] << endl;
	
	return 0;
	
}