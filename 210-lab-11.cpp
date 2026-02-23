#include <iostream>
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

