#include <iostream>
using namespace std;

int main()
{
	string sys_username = "canan";
	string sys_password = "sifre1";
	
	string username;
	string password;
	
	cout << "Enter username: ";
	cin >> username;
	
	cout <<"Enter password";
	cin >> password;
	
	if(sys_username == username && sys_password == password)
	{
		cout << "Welcome!";
	}
	
	else if(sys_username == username && sys_password != password)
	{
		cout << "Password wrong";
	}
	
	else if(sys_username != username && sys_password == password)
	{
		cout << "username wrong";
	}
	
	else if(sys_username != username && sys_password != password)
	{
		cout << "everything wrong";
	}
	
	
	
	
	
	return 0;
}
