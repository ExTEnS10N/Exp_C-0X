#include<iostream>
#include<fstream>
using namespace std;
#include"Sales_item.h"
int main()
{
	/*
	Sales_item book;
	std::cin >> book;
	std::cout << book << std::endl;
	*/
	ofstream log("logfile", ios::out);
	std::clog.rdbuf(log.rdbuf());
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	if(item1.same_isbn(item2))
		std::cout << item1 + item2;
	else
		std::cerr << "error\n";
	std::clog << "wirte a clog\n";
	std::cout << "wite a cout\n";
	std::clog << "./1 is about to return\n";
	log.close();
	return 0;
}
/*
 * 1.g++ don't allow main to return any type except int
 * 2.To repeatly input or output lots of characters in terminal,
 * use "file redirection" 
 * that is "prompt$ command <infile >outfile"
 * 3."extern" tells compiler to find the variable 
 * or function in other files.
 * 4.cerr doesn't write info into buffer but refresh at once.
 * and cerr can't be redirect to output files by command. 
 * 5.clog write buffer but can't be redirect to output files by command.
 * 6.redirect cout、clog、cerr to logfile 
 * by cerr.rdbuf(ofstreamfile.rdbuf()) , but program will report "段错误".
*/