//��r��̨C�ӳ�r����

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm> //reverse function
using namespace std;

int main()
{
	string input;
	cout << "��J�n���઺�r��:\n";
	getline(cin, input);

	cout << "���൲�G:\n";
	stringstream delim(input);
	string token;
	
	int first = 1;
	while (getline(delim, token, ' ')) //�H�ťդ��Φr��
	{
		if (!first) cout << ' '; //�Y���O�Ĥ@�ӳ�r�H�ťչj�}
		first = 0;

		reverse(token.begin(), token.end());
		cout << token;
	}

	return 0;
}
