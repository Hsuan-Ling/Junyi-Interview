// input: x(�Ʀr)
// output: 1 ~ x�����A����3�M5�����ơB�O�d15�����ơA�ѤU�h�֭ӼƦr

#include <iostream>
using namespace std;

int main()
{
	int input;
	cout << "�п�J�@�ӼƦr: ";
	cin >> input;

	int ans = 9 * (input / 15) + (input % 15) - ((input % 15) / 3) - ((input % 15) / 5);
	// �C15�ӼƦr�|�ѤU9�ӡA�[�W�̫ᤣ��15�Ӫ��Ʀr�ơA��h�䤤3�M5������

	cout << "1 ~ " << input << "�����A����3�M5�����ơB�O�d15�����ơA�ѤU���`�Ʀr��: " << ans;
}