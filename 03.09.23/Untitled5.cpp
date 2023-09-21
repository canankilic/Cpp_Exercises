#include <iostream>
using namespace std;

int main()
{
	string sys_username = "admin";
	string sys_password = "user123";
	string username;
	string password;
	
	while(true)
	{
		cout << "Enter username : ";
		cin >> username;
		
		cout << "Enter password : ";
		cin >> password;
		
		if(username == sys_username && password == sys_password)
		{
			cout << "Welcome " << username << endl;
			break;
		}
		else if (username != sys_username && password == sys_password)
		{
			cout << "Wrong username." << endl;
		}
		else if (username == sys_username && password != sys_password)
		{
			cout << "Wrong password." << endl;
		}
		else
		{
			cout << "Wrong username and password." << endl;
		}
	}
	
	
	
	
	return 0;
}
