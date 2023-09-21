#include <iostream>

using namespace std;

void Test()
{
	static int i = 3;
	i++;
	cout << "inin degeri: " << i << endl;
}

int main()
{
	Test();
	Test();
	Test();
	
	return 0;
}
