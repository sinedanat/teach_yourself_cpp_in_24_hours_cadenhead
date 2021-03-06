#include "String.hpp"
#include <iostream>

class Employee
{
public:
    Employee();
    Employee(String, String, String, long);
    ~Employee();
    Employee(const Employee&);
    Employee& operator=(const Employee&);

    const String& getFirstName() const
    {
        return firstName;
    }
    const String& getLastName() const
    {
        return lastName;
    }
    const String& getAddress() const
    {
        return address;
    }
    long getSalary() const
    {
        return salary;
    }

    void setFirstName(const String& fName)
    {
        firstName = fName;
    }
    void setLastName(const String& lName)
    {
        lastName = lName;
    }
    void setAddress(const String& newAddress)
    {
        address = newAddress;
    }
    void setSalary(long newSalary)
    {
        salary = newSalary;
    }
private:
    String firstName;
    String lastName;
    String address;
    long salary;
};

Employee::Employee():
    firstName(""),
    lastName(""),
    address(""),
    salary(0)
{}

Employee::Employee(String newFirstName, String newLastName,
                   String newAddress, long newSalary):
    firstName(newFirstName),
    lastName(newLastName),
    address(newAddress),
    salary(newSalary)
{}

Employee::Employee(const Employee& rhs):
    firstName(rhs.getFirstName()),
    lastName(rhs.getLastName()),
    address(rhs.getAddress()),
    salary(rhs.getSalary())
{}

Employee::~Employee() {}

Employee& Employee::operator=(const Employee& rhs)
{
    if (this == &rhs)
        return *this;

    firstName = rhs.getFirstName();
    lastName = rhs.getLastName();
    address = rhs.getAddress();
    salary = rhs.getSalary();

    return *this;
}

int main()
{
    Employee edie("Jane", "Doe", "1461 Shore Parkway", 20000);
    edie.setSalary(50000);
    String lastName("Levine");
    edie.setLastName(lastName);
    edie.setFirstName("Edythe");

    std::cout << "Name: ";
    std::cout << edie.getFirstName().getString();
    std::cout << " " << edie.getLastName().getString() << std::endl;
    std::cout << "Address: ";
    std::cout << edie.getAddress().getString() << std::endl;
    std::cout << "Salary: " ;
    std::cout << edie.getSalary() << std::endl;

    return 0;
}

// Name: Edythe Levine
// Address: 1461 Shore Parkway
// Salary: 50000
