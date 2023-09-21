#include <iostream>
using namespace std;

class Student{//1 class 1 method
public:
	string name;
	
	void telName()
	{
		cout << "My name is " << name << endl;
	}
	 
};

int main ()
{
	Student student1;
	student1.name = "Canan";
	
	Student student2;
	student2.name = "Fatma";
	
	student1.telName();
	student2.telName();

	
	return 0;
}
