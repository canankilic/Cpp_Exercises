#include <iostream>
using namespace std;

struct Employee{
	int id;
	string name;
	string department;
};


int main()
{
	Employee calisan = {12, "Canan klc", "bilgisayar"};
	
	Employee* ptr = &calisan;
	
	cout << calisan.name << endl;
	cout << ptr->department << endl;

	return 0;
}
