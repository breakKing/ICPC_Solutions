#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
typedef long long ll;

int random(int a, int b)
{
	return rand() % b + a;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	srand(time(nullptr));
	int n = random(2, 10);
	cout << n << "\n";
	for (size_t i = 0; i < n; i++)
	{
		int s = random(1, 15);
		int c = random(1, 20);
		int f = random(1, 30);
		while (f < s + c)
		{
			f = random(1, 30);
		}
		cout << s << " " << f << " " << c << "\n";
	}

	return 0;
}