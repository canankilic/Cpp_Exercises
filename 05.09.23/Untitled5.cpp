#include <iostream>
using namespace std;


int main()
{
	
	/* int *ptr;
	int arr[] = {1,2,3,4,5};
	
	ptr = arr;
	
	cout <<ptr[1] << endl;
	*/
	
	int *ptr = new int;
	
	*ptr = 5;
	
	delete ptr;
	
	
	return 0;
}
