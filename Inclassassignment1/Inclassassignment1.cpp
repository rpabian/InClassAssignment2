#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Employee
{
private:
	string name;
	int idNumber;
	string department;
	string position;
public:
	Employee(string eName, int eID, string dName, string pName)
	{
		name = eName;
		idNumber = eID;
		department = dName;
		position = pName;
	}
	Employee(string eName, int eID)
	{
		name = eName;
		idNumber = eID;
		department = "";
		position = "";
	}
	Employee()
	{
		name = "";
		idNumber = 0;
		department = "";
		position = "";
	}
	void setName(string eName)
	{
		name = eName;
	}
	void setID(int eID)
	{
		idNumber = eID;
	}
	void setDepartment(string dName)
	{
		department = dName;
	}
	void setPosition(string pName)
	{
		position = pName;
	}
	string getName()
	{
		return name;
	}
	int getID()
	{
		return idNumber;
	}
	string getDepartment()
	{
		return department;
	}
	string getPosition()
	{
		return position;
	}
};

int main()
{
	Employee employee1("Raul", 12345, "Customer Service", "Clerk");
	Employee employee2("George", 67890);
	Employee employee3;

	employee2.setDepartment("Inventory");
	employee2.setPosition("Stocker");

	employee3.setName("Spencer");
	employee3.setID(1337);
	employee3.setDepartment("Public Rep");
	employee3.setPosition("Social Media Rep");

	cout << std::left << std::setw(7) << employee1.getName()
		<< std::setw(5) << employee1.getID()
		<< std::setw(16) << employee1.getDepartment()
		<< std::setw(16) << employee1.getPosition() << endl;

	cout << std::left << std::setw(7) << employee2.getName()
		<< std::setw(5) << employee2.getID()
		<< std::setw(16) << employee2.getDepartment()
		<< std::setw(16) << employee2.getPosition() << endl;

	cout << std::left << std::setw(7) << employee3.getName()
		<< std::setw(5) << employee3.getID()
		<< std::setw(16) << employee3.getDepartment()
		<< std::setw(16) << employee3.getPosition() << endl;
	return 0;
}