// Reverse Version

#include <iostream>
#include <string>
using namespace std;

string reverse(string s);

int main()
{
 	cout << "Please enter a possible palindrome: ";
 	string s;
 	getline(cin, s);


 	int x = s.find(' ');
 	while(x != -1 && x < (signed)s.size())
 	{
 	 	s.erase(x, 1);
 	 	x = s.find(' ');
 	}
 	

 	if (s == reverse(s))
 	 	cout << "IS a palindrome" << endl;
 	else
 	 	cout << "NOT a palindrome" << endl;

 	return 0;
}


string reverse(string s)
{
 	string r;

 	for (int i = 0; i < s.length(); i++)
 	 	r += s[s.length() - 1 - i];

 	return r;
}

