// StudentGradeFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//function prototypes
float StudentInput(string, float, float);

int main()
{
    int i, total[5];
    string name;
    float grade1, grade2;

    for (i = 0; i < 5; i++) {
        cout << "\nEnter the name of the student: ";
        cin >> name;
        cout << "\nEnter grade1: ";
        cin >> grade1;
        cout << "\nEnter grade2: ";
        cin >> grade2;
        total[i]=StudentInput(name, grade1, grade2);
        cout << "\nThe total grade is: " << total[i] << endl;
        cout << "\nThe average grade is: " << total[i] / 2 << endl;
    }
}

float StudentInput(string n, float g1, float g2) {
    float total;
    total = g1 + g2;
    cout << "\nThe name of the student is: " << n<<endl;
    cout << "\nGrade1 = " << g1<<endl;
    cout << "\nGrade2 = " << g2<<endl;
    return (total);
}
