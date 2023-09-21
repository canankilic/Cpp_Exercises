#include <iostream>
using namespace std;

int main()
{
	
	int islem, num1, num2, son;
	
	cout << "Islemi girin: ";
	cin >> islem;
	cout << "Num1 ve num2 gir.";
	cin >> num1 >> num2;
	
	switch(islem)
	{
		case 1:
			son = num1 + num2;
			break;
		case 2:
			son = num1 - num2;
			break;
		case 3:
			son = num1 * num2;
			break;
		case 4:
			son = num1 / num2;
			break;
		default:
			cout << "Invalid number.";
		
		
	}
	 cout << son << endl;
	
	return 0;
}
