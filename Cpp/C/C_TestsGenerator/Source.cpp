#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("output.txt", "w", stdout);
	cout << "100000 100000\n";
	for (int i = 0; i < 100000; i++)
	{
		cout << "A 1 100000 50\n";
	}
	return 0;
}