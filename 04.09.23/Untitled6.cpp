#include <iostream>
using namespace std;


void deger(int &ref)
{
	ref = 20;
}

int main()
{
	int a = 10;
	
	deger(a);
	
	cout << a << endl;
	
	return 0;
}
