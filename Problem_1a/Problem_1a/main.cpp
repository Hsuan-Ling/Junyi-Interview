//��r��ϹL��

#include <iostream>
#include <string>
#include <algorithm> //reverse function
using namespace std;

int main()
{
	string input;
	cout << "��J�n���઺�r��:\n";
	getline(cin, input);

	reverse(input.begin(), input.end());
	
	cout << "���൲�G:\n" << input;

	return 0;
}