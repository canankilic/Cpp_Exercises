#include <iostream>
using namespace std;

int main()
{
	int *ptr;
	int size;
	
	cout << "Enter byte range." << endl;
	cin >> size;

	ptr = new int[size];
	
	for(int i = 0; i < size ; i++)
	{
		cout << "values: " << endl;
		cin >> ptr[i]; 
	}
	
	for(int i = 0; i < size ; i++)
	{
		cout << "Eleman: " << ptr[i] << endl;
	}
	
	
	
	delete [] ptr;
	
	return 0;
}
