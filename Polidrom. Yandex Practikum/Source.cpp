#include <iostream>
#include <vector>
#include <string>

using namespace std;


void IsPolindrom(string s)
{
	int answer = 1;

	for (int i = 0; i < s.size()/2; i++)
	{
		if (s[i] != s[s.size() - i - 1])
			{
				answer = 0;

			}
	}
	cout << answer << endl;


}

int main()
{
	IsPolindrom("abba");
	IsPolindrom("NewEra");
	IsPolindrom("motor");
	IsPolindrom("Motor");
}