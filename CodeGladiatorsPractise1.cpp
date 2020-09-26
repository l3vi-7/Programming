/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
	char a[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

	for (auto i : a) {
		if (c == i)
			return true;
	}

	return false;
}

int main()
{
	int t, count;
	string s;
	cin >> t;
	while (t--) {
		count = 0;
		cin >> s;
		for (auto i : s) {
			if (isVowel(i))
				count++;
		}
		cout << count << " " << s.size() - count << " " << (s.size() - count) * count << endl;
	}
}