#include <iostream>
using namespace std;

/* call by value

void degerDegis(int af)
{
	af = 20;
	cout << "Fonksiyon icinde deger : " << af << endl;
}


int main()
{
	int a = 10;
	cout << "a : " << a << endl;
	degerDegis(a);
	cout << "Fonksiyon icinde deger : " << a << endl;
	
} */

void degerDegis(int *ptr)
{
	
	*ptr = 20;
	cout << "Fonksiyon icinde deger : " << *ptr << endl;

}



int main()
{
	int a = 10;
	cout << "a : " << a << endl;
	degerDegis(&a);
	cout << "Fonksiyon icinde deger : " << a << endl;
	
}







