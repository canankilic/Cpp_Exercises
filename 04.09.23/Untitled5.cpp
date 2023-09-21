#include <iostream>
using namespace std;

int main()
{
	string array[] = {"canan", "kilic", "merhaba"};

	string *ptr = array;
	
	cout << *(ptr + 1) << endl;
	
	return 0;
}
