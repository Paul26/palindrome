// Finger Version

#include <iostream>
#include <string>
using namespace std;

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
 	

 	for (int i = 0; i < s.length() / 2; i++)
 	 	if (s[i] != s[s.length() - 1 - i])
 	 	{
 	 	 	cout << "NOT a palindrome\n";
 	 	 	return 0;
 	 	}

 	cout << "IS a palindrome" << endl;

 	return 0;
}

