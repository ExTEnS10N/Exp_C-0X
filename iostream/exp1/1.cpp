#include<iostream>
int main()
{
	int variable,sum = 0;
	//std::cout << (std::cin >> variable) << std::endl;
	//std::cout << &(variable) << std::endl;
	while(std::cin >> variable)
		sum += variable;
	std::cout << sum << std::endl;
	return 0;
}
/*
 * 1.Defined in ostream, endl is a template function that contains flush(),
 * flush is define in ostream, and not for programmer.
 * 2.If the type of input value don't equal to the variable waiting for cin,
 * while(cin >> value) will be break;
 * 3.To Enter The EOF Symbol in shell,press ^+d in linux & OS X & unix,but
 * press ^+z in windows;
 * 4.use cout<<flush; or cout<<unitbuf<<some_string<<ununitbuf; to refresh;
*/