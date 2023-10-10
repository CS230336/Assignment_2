#include <iostream>
using namespace std;

int main()
{
    double credit1;
    double mark1;
    double credit2;
    double mark2;
    double credit3;
    double mark3;
    cout << "Enter the credit hours from Subject1: ";
    cin >> credit1;
    cout << "Enter the mark (%): ";
    cin >> mark1;
    
    cout << "Enter the credit hours from Subject2: ";
    cin >> credit2;
    cout << "Enter the mark (%): ";
    cin >> mark2;
    
    cout << "Enter the credit hours from Subject3: ";
    cin >> credit3;
    cout << "Enter the mark (%): ";
    cin >> mark3;
    
    double grade1 = (credit1*mark1) / 100;
    double grade2 = (credit2*mark2) / 100;
    double grade3 = (credit3*mark3) / 100;
    
    cout << "Your overall GPA: " << (grade1 + grade2 + grade3) / 3 << endl;

    return 0;
}