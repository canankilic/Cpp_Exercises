#include <iostream>
using namespace std;

class Student{
public:
	string name;
	 
};

int main ()
{
	Student student1;
	Student student2;
	
	student1.name = "Canan";
	student2.name = "Ayse";
	
	cout << "Ogrenci 1: " << student1.name << endl;
	cout << "Ogrenci 2: " << student2.name << endl;
	
	return 0;
}
