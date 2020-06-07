//把字串反過來

#include <iostream>
#include <string>
#include <algorithm> //reverse function
using namespace std;

int main()
{
	string input;
	cout << "輸入要反轉的字串:\n";
	getline(cin, input);

	reverse(input.begin(), input.end());
	
	cout << "反轉結果:\n" << input;

	return 0;
}