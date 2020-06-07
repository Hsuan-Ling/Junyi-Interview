//把字串裡每個單字反轉

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm> //reverse function
using namespace std;

int main()
{
	string input;
	cout << "輸入要反轉的字串:\n";
	getline(cin, input);

	cout << "反轉結果:\n";
	stringstream delim(input);
	string token;
	
	int first = 1;
	while (getline(delim, token, ' ')) //以空白分割字串
	{
		if (!first) cout << ' '; //若不是第一個單字以空白隔開
		first = 0;

		reverse(token.begin(), token.end());
		cout << token;
	}

	return 0;
}
