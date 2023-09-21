#include <iostream>
using namespace std;

int main()
{
	
	string password = "deneme123";
	
	string input;
	cout << "Enter password: ";
	
	cin >> input;
	
	if( password == input)
	{
		cout << "System is opening";
	}
	
	else
	{
		cout << "System failed.";
	}
	
	
	
	
	return 0;
}
