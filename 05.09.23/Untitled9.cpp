//function overloading
#include <iostream>
using namespace std;

void selamla()
{
	cout << "Merhaba" << endl;
}

void selamla(string name)
{
	cout << "merhaba " << name << endl;
}

int main()
{
	
	selamla();
	
	selamla("canan");
	
	return 0;
}
