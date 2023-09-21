#include <iostream>
using namespace std;

int main()
{
	int a, b = 0;
	string islem;
	
	cout << "This is a CALCULATOR" << endl;
	cout << "1 for +\n2 for -\n3 for *\n4 for /"<< endl;
	
	cout <<"Enter the numbers and then calculator symbol.";
	
	cin >> a >> b;
	cin >> islem;
	
	if(islem == "1")
	{
		cout << a + b;
	}
	
	else if(islem == "2")
	{
		cout << a - b;
	}
	
	else if(islem == "3")
	{
		cout << a * b;
	}
	
	else if(islem == "4")
	{
		cout << a / b;
	}
	
	else
		cout << "Warning enter a valid number";
	
	return 0;
}
