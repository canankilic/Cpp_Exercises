#include <iostream>
using namespace std;

int main()
{
	
	int i = 1, j = 1;
	
	while(i <= 10 || j < 5)
	{
		cout << "i : " << i << " j : " << j << endl;
		i = i * 2;
		j++;
	}
	
	return 0;
}
