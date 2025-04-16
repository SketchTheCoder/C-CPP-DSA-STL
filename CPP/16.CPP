#include <iostream>
using namespace std;

class Employee; // Defined here as we are going to use it before the fucntion defination...

class Business {
    float revenue;

public:
    Business(float rev) : revenue(rev) {}

    friend float calculateTax(Employee&,Business&); // Friend function declaration
};

class Employee {
    float income;

public:
    Employee(float inc) : income(inc) {}

    friend float calculateTax(Employee&,Business&); // Friend function declaration
};

float calculateTax(Employee& emp,Business& bus) {
    // Employee tax calculation based on tax slabs
    float employeeTax = 0;
    if (emp.income > 400000) {
        if (emp.income <= 800000) {
            employeeTax = (emp.income - 400000) * 0.05;
        } else if (emp.income <= 1200000) {
            employeeTax = (emp.income - 800000) * 0.10 + 20000;
        } else if (emp.income <= 1600000) {
            employeeTax = (emp.income - 1200000) * 0.15 + 60000;
        } else if (emp.income <= 2000000) {
            employeeTax = (emp.income - 1600000) * 0.20 + 120000;
        } else if (emp.income <= 2400000) {
            employeeTax = (emp.income - 2000000) * 0.25 + 200000;
        } else {
            employeeTax = (emp.income - 2400000) * 0.30 + 300000;
        }
    }
    cout<<"Income tax for employee = "<<employeeTax<<endl;

    // Business tax calculation based on tax slabs
    float businessTax =0;
    if (bus.revenue > 400000) {
        if (bus.revenue <= 800000) {
            businessTax = (bus.revenue - 400000) * 0.05;
        } else if (bus.revenue <= 1200000) {
            businessTax = (bus.revenue - 800000) * 0.10 + 20000;
        } else if (bus.revenue <= 1600000) {
            businessTax = (bus.revenue - 1200000) * 0.15 + 60000;
        } else if (bus.revenue <= 2000000) {
            businessTax = (bus.revenue - 1600000) * 0.20 + 120000;
        } else if (bus.revenue <= 2400000) {
            businessTax = (bus.revenue - 2000000) * 0.25 + 200000;
        } else {
            businessTax = (bus.revenue - 2400000) * 0.30 + 300000;
        }
    }
cout<<"Income tax for business = "<<businessTax<<endl;
    
}

int main() {
    Employee emp(1500000); // Employee with income of 1,500,000
    Business bus(500000); // Business with revenue of 5,000,000
    calculateTax(emp,bus);
    return 0;
}