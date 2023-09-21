#include <iostream>

using namespace std;

int main()
{
	int num, fakt = 1;
	cout << "Enter your number";
	cin >> num;

	for(int i = 1; i <= num; i++)
	{
		fakt *= i;
	}
	
	cout << "Fact of number : " << fakt << endl;
	
	return 0;
}


