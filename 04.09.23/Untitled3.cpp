#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	int *ptr = &a;
	
	cout << "Degiskenin adresi : " << &a << endl;
	cout << "Degiskenin adresi : " << ptr << endl;
	
	cout << "Degiskenin degeri : " << *ptr << endl;
	
	*ptr = 8;
	cout << "Degisken : " << a << endl;


	return 0;
}
