#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void main()
{
	int n, sum=0, i=1;
	string input;
	
	while (true)
	{
		cout << "Les inn et heltall: ";
		getline(cin, input);
		stringstream myStream(input);
		if (myStream>>n)
		{
			break;
		}
		cout << "Du ma bruke heltall." << endl;
	}

	if ((n%2) == 0)
	{
		while (i<=n)
		{
			sum+=i;
			i+=2;
		}
	}
	else
	{
		while (i-1<=n)
		{
			sum+=i;
			i+=2;
		}
	}
	cout << sum << endl;
	system("pause");
}