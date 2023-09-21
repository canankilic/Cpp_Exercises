#include <iostream>
using namespace std;


int main()
{
	string parola = "123456";
	string input;
	
	do {
		cout << "Parolanizi girin:";
		cin >> input;
		
		if(input != parola)
		{
			cout << "Parola yanlis.";
		}
		
	} while(input != parola);
	
	cout << "Hosgeldiniz.";
	
	return 0;
}
