#include <iostream>
#include<cstdlib> //for atof
#include<string>
using namespace std;

struct Employee {
    string name;
    double wage;
    int phone; 
    int numTasks;
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
    string buf;

    cout << "Input data for Employee #" << count << ":" << endl;
    
    cout << "Name: ";
    getline(cin, eptr->name);

    cout << "Wage: ";
    cin >> buf; eptr->wage = atof(buf.c_str());
    cin.ignore(1000, 10);

    cout << "Phone Number: ";
    cin >> buf; eptr->phone = atoi(buf.c_str());
    cin.ignore(1000, 10);


    cout << "Number of Tasks: ";
    cin >> buf; eptr->numTasks = atoi(buf.c_str());
    cin.ignore(1000, 10);
    
    eptr->tasks = new string[eptr->numTasks];
    for (int i = 0; i < eptr->numTasks; i++) {
        cout << "Task # " << i + 1 << ": ";
        getline(cin, eptr->tasks[i]);
    }

    cout << endl;
    count++;
}

void displayEmp(Employee* eptr) {
    cout << "Employee Summary: " << endl;
    cout << "Name: " << eptr->name << endl;
    cout << "Wage: " << eptr->wage << endl;
    cout << "Phone Number: " << eptr->phone << endl;
    cout << "Number of Tasks: " << eptr->numTasks << endl;
    
    for (int i = 0; i < eptr->numTasks; i++) {
        cout << "Task # " << i + 1 << ": ";
        getline(cin, eptr->tasks[i]);
    }
}





