// input: x(计)
// output: 1 ~ xぇ丁Ι埃3㎝5计玂痙15计逞ぶ计

#include <iostream>
using namespace std;

int main()
{
	int input;
	cout << "叫块计: ";
	cin >> input;

	int ans = 9 * (input / 15) + (input % 15) - ((input % 15) / 3) - ((input % 15) / 5);
	// –15计穦逞9程ぃì15计计搭ㄤい3㎝5计

	cout << "1 ~ " << input << "ぇ丁Ι埃3㎝5计玂痙15计逞羆计计: " << ans;
}