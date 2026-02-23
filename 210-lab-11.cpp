#include <iostream>
#include<cstdlib> //for atof
#include<string>
using namespace std;

struct Employee {
    string name;
    double wage;
    int phone; 
    string* tasks;

    ~Employee() {
        delete[] tasks;
        tasks = nullptr;
    }
};

void inputEmp(Employee*);
void displayEmp(Employee*);

int main()
{
    
}

void inputEmp(Employee* eptr) {
    static int count = 1;
    cout << "Input data for Employee #" << count << ":" << endl;
    cout << "Name: ";
    getline(cin, eptr->name);
    d

}





