#include <iostream>
using namespace std;
int main()
{
	double pi = 3.141592654;
	void *vp = &pi;
	//cout << "*vp = " << *vp << endl; //error: ‘void*’ is not a pointer-to-object type
	cout << "*(double*)vp = " << *(double*)vp << endl;
	cout << "*static_cast<double*>(vp) = " << *static_cast<double*>(vp) << endl;
	
	const int i = 101;
	int *a[5];
	for(int k = 80; k < 85; ++k)
	{
		a[k-80] = const_cast<int *>(&i);
		*a[k-80] = k; //undefine result: the same address may store atmost 2 value
	}
	for (int k = 0; k < 5; ++k)
	{
		cout << "*a[k] = " << *a[k] << ", i = " << i << endl;
		cout << "a[k] = " << a[k] << ", &i = " << &i << endl;
	}
	
	int e = 3;
	const int *ce = const_cast<const int*>(&e);
	//*ce = 4; //read-only
	cout << *ce << endl;
	
	/** @error reinterpret_cast is not allowed to cast away qualifires
	 * const int u = 7;
	 * int *pu = reinterpret_cast<int*>(&u);
	 * *pu = 6;
	 * cout << *pu << endl;
	*/
	
	return 0;
}