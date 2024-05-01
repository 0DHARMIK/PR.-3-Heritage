#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int id;
    string name;
    string role;
public:
    void setId(int empId) {
        id = empId;
    }
    void setName(string empName) {
        name = empName;
    }
    void setRole(string empRole) {
        role = empRole;
    }
};

class SalaryExperience : public Employee {
protected:
    double salary;
    int experience;
public:
    void setSalary(double empSalary) {
        salary = empSalary;
    }
    void setExperience(int empExperience) {
        experience = empExperience;
    }
};

class CompanyDetails : public SalaryExperience {
protected:
    string comp_name;
    string address;
public:
    void setCompanyName(string companyName) {
        comp_name = companyName;
    }
    void setAddress(string empAddress) {
        address = empAddress;
    }
    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Role: " << role << endl;
        cout << "Salary: " << salary << endl;
        cout << "Experience: " << experience << " years" << endl;
        cout << "Company Name: " << comp_name << endl;
        cout << "Address: " << address << endl;
    }
};

class ContactDetails : public CompanyDetails {
protected:
    string email;
    string contact;
public:
    void setEmail(string empEmail) {
        email = empEmail;
    }
    void setContact(string empContact) {
        contact = empContact;
    }
    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Role: " << role << endl;
        cout << "Salary: " << salary << endl;
        cout << "Experience: " << experience << " years" << endl;
        cout << "Company Name: " << comp_name << endl;
        cout << "Address: " << address << endl;
        cout << "Email: " << email << endl;
        cout << "Contact: " << contact << endl;
    }
};

int main() {
    ContactDetails emp1;

    emp1.setId(101);
    emp1.setName("John Doe");
    emp1.setRole("Software Engineer");
    emp1.setSalary(50000.0);
    emp1.setExperience(5);
    emp1.setCompanyName("XYZ Corp");
    emp1.setAddress("123 Main St, City, Country");
    emp1.setEmail("john@example.com");
    emp1.setContact("123-456-7890");

    emp1.display();

    return 0;
}