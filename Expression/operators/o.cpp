#include <iostream>
using namespace std;

/// <summary>output every binary bit to the console</summary>
void bitOutput(unsigned char bits)
{
	for (unsigned char i = 0x80; i != 0; i >>= 1)
	{
		cout << ((bits & i) == i ? 1 : 0);
	}
	cout << endl;
}

int main()
{
	/** @error 5 isn't variable
	 * int a = ++5;
	 * cout << a << endl;
	*/
	
	/** @brief bit operator */
	//@{
	unsigned char bit = 023;
	bitOutput(bit);
	
	bit = ~bit;
	bitOutput(bit);
	//@}
	
	/**
	 * @brief the return valure of operator= 
	 * conclusion: = return lvalue after calculation
	*/
	//@{
	int i = 3;
	int j = 4;
	(i = j) = 5;
	cout << i << "," << j << endl;
	//@}
	return 0;
}
