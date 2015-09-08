#include<iostream>
#include<string>
#include<cctype>
using namespace std;

void exp_free()
{
	string a = "Hello world!";
	cout << a << endl;
	for(int i = 0; i < 20; i++)
		cout << "a[i] = " << a[i] << "\t&a[i] = " << &a[i] << endl;
	cout << "&a = " << &a << endl;
	
	if(isgraph(a[15]))
		cout << "is graphical" << endl;
	else cout << "isn't visible" << endl;
	
	string b(10,'*');
	cout << "b = " << b << endl;
	
	while(cin >> a)
		cout << a << endl;
	cout << "It's b's turn" << endl;
	
	cin.clear();
	cin.sync();
	
	while(getline(cin, b))
		cout << b << endl;
}

void exp_initialize()
{
	string s1;
	cout << s1 << endl;
	
	string s2 = s1;
	cout << s2 << endl;
	
	string s3 = "Hello world";
	cout << s3 << endl;
	
	//string s4(20,"ABC"); //@error
	string s4(20,'A');
	cout << s4 << endl;
	
	string s5[4] = {s1,s2,s3,s4};
	for(int i = 0; i < 3; ++i)
		cout << s5[i] << endl;
	
	string s6(s3);
	cout << s6 << endl;
	
	string s7{'a', 'b', 'c'};
	cout << s7 << endl;
	
	//string s8{"abc", "def"};//runtime error:'std::length_error'
	string s8{"abcdef"};
	cout << s8 << endl;
	
	//string s9{'a', "b"}; //unexist overload function
	//cout << s9 << endl;
}

void exp_operation()
{
	string s1;
	string s2("Hello world");
	cout << s1 << " && " << s2 << endl;
	if(s1.empty())
	{
		s1 += &s2[s2.size()*0.5];
	}
	cout << s1 << " && " << s2 << endl;
	
	string s3, s4;
	cout << "compare string,please input 2 string" << endl;
	cin >> s3 >> s4;
	cout << s3 << endl << s4 << endl;
	if (s3 == s4)
		cout << "equal";
	else if(s3 > s4)
		cout << "string1 is bigger";
	else cout << "string 2 is bigger";
	cout << endl;
}

void exp_cmp()
{
	string a = "abc";
	if(a == "abc")
		cout << "a is equal to abc" << endl;
	if(*(a.end() - 1) == 'c')
		cout << "a.end is equal to c" << endl;
}

int main()
{
	//exp_initialize();
	//exp_free
	//exp_operation();
	exp_cmp();
	return 0;
}
/*
 * it's weird!
 * 1.No '\0' at the end of the string;
 * 2.&a[i] does not return address 
 * but the substring from i to end of string;
*/