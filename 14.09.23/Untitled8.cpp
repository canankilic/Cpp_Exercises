#include <iostream>

using namespace std;

class Employee{
	private:
		string name;
		int salary;
		int id;
		
	public:	
		
		Employee(string name, int id)
		{
			this->name = name;
			this->id = id;
			this ->salary = 12;
	 
		}
	
		Employee(string name, int salary, int id)
		{
			this->name = name;
			this->salary = salary;
			this->id = id;
		}
		
		void setName(string isim)
		{
			name = isim;
		}
		
		void setSalary(int maas)
		{
			salary = maas;
		}
		
		void setId(int id)
		{
			this->id = id;
		}	
			
		
		string getName()
		{
			return name;
		}
		
		int getSalary()
		{
			return salary;
		}
		
		int getId()
		{
			return id;
		}
		
		
		void showInfo()
		{
			cout << "Name: " << name << endl;
			cout << "Salary: " << salary << endl;
			cout << "Id: " << id << endl;
		}
};


int main()
{
	Employee calisan("Canan", 300000);
	calisan.showInfo();
	
	Employee employee2("canan", 4000);
	employee2.showInfo();
	return 0;
}
