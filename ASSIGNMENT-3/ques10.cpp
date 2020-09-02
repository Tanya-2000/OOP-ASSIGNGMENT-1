#include <iostream>
#include <string>
using namespace std;

// Return true if string is palindrome.
bool isPalindrome(string s) {
	if (s.size() <= 1)
		return true;
	else
		if (s.at(0) == s.at(s.size() - 1))
			return isPalindrome(s.substr(1, s.size() - 2));
	return false;
}

int main()
{
	// An array of teststrings.
	string testStrings[] = {
		"a", "ab", "aaa",  "abc", "abba", "radar", "able was i saw elba", "this is not"
	};

	// Check if each string is a palindrome.
	for(string s : testStrings)
		cout << boolalpha << "\"" << s << "\" is a palindrome: " <<  isPalindrome(s) << endl;

	return 0;
}
