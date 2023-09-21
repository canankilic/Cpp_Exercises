// brand model year of car with constructor 

#include <iostream>

using namespace std;

class Car{
	private: //declarations 
		string brand;
		string model;
		int year;
		
	public:
		Car(string brand, string model, int year) //Constructor
		{
			this->brand = brand;
			this->model = model;
			this->year = year;
		}
		
		void setBrand(string tur)
		{
			brand = tur;
		}
		
		void setModel(string cins)
		{
			model = cins;
		}
		
		void setYear(int yil)
		{
			year = yil;
		}
		
		
		void showInfo()
		{
			cout << "Brand: " << brand << "\nModel: " << model << "\nYear: " << year << endl;
		}
};



int main()
{
	Car* araba1 = new Car("BMW", "540i", 2019);
	
	araba1->showInfo();
	
	delete araba1;
	
	return 0;
}
