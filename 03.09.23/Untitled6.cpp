#include <iostream>
using namespace std;

int main()
{
	/*int array[] = {10, 20, 30, 40};
	
	double arrayd[] = {1.2, 3.5, 4.6, 7.6};
	
	for(int i = 0; i < 5 ; i++)
	{
		cout << i << ". index value: " << arrayd[i] << endl;
	} */
	
	string arr[4];
	
	for(int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}
	
	for(int i = 0; i < 4; i++)
	{
		cout << i << ". index value: " << arr[i] << endl;
	}
	

	
	
	
	return 0;
}
