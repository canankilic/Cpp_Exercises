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
	
	cout << calisan.name << endl;
	
	calisan.name = "merhaba";
	cout << calisan.name << endl;

	return 0;
}
