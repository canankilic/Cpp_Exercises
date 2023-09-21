// no, name, fee

#include <iostream>

using namespace std;

class Student{
	private:
		int no;
		string name;
		int fee;
		
	public:
		Student(int id, string isim, int para)
		{
			no = id;
			name = isim;
			fee = para;
		}
		
		void setNo(int id)
		{
			no = id;
		}
		
		void setName(string isim)
		{
			name = isim;
		}
		
		void setFee(int para)
		{
			fee = para;
		}
		
		int getNo()
		{
			return no;
		}
		
		string getName()
		{
			return name;
		}
		
		int getFee()
		{
			return fee;
		}
		
		void showInfo()
		{
			cout << "Name: " << name << "\nNumber: " << no << "\nFee: " << fee << endl;
		}
};

int main()
{
	int id;
	string isim;
	int para;
	
	cout << "Enter student number. ";
	cin >> id;
	
	cin.ignore();
	
	cout << "Enter student name. ";
	getline(cin, isim);
	
	cout << "Enter school fee. ";
	cin >> para;
	
	
	Student* myStudent = new Student(id, isim, para);	
	myStudent->showInfo();

	
	delete myStudent;
	
	return 0;
}

