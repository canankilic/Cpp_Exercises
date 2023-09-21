#include <iostream>

using namespace std;

class Employee{
	private:
		string name;
		int salary;
		
	public:	
	
		Employee(string isim, int maas)
		{
			name = isim;
			salary = maas;
		}
		
		void setName(string isim)
		{
			name = isim;
		}
		
		void setSalary(int maas)
		{
			salary = maas;
		}	
		
		string getName()
		{
			return name;
		}
		
		int getSalary()
		{
			return salary;
		}
		
		void showInfo()
		{
			cout << "Name: " << name << endl;
			cout << "Salary: " << salary << endl;
		}
};


int main()
{
	Employee calisan("Canan", 300000);
	calisan.showInfo();
	return 0;
}
