#include <iostream>
using namespace std;

void factorial(int num)
{
	int faktor = 1;
	
	for(int i = 2; i <= num; i++)
	{
		faktor *= i;
	}
	
	
	cout << "Faktorial : " << faktor << endl;
	
}


int main()
{
	int number1;
	cout << "Enter number.";
	cin >> number1;
	
	factorial(number1);
	
	return 0;
}

