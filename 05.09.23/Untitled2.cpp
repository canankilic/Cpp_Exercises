#include <iostream>
using namespace std;

struct Address{
	string cityName;
	int no;
};

struct Employee{
	int id;
	string name;
	string dep;
	Address address;
};



int main()
{
	Employee employee = {10, "canan", "comp", {"ankara", 5}};
	
	cout << employee.id << endl;
	cout << employee.name << endl;
	cout << employee.dep << endl;
	cout << employee.address.cityName << endl;
	cout << employee.address.no << endl;
	
	return 0;
}
