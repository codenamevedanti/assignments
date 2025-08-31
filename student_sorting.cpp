#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    int day, month, year;
    int marks;

    void input() {
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Birth Date (dd mm yyyy): ";
        cin >> day >> month >> year;
        cout << "Enter Total Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll: " << roll 
             << " | DOB: " << day << "-" << month << "-" << year
             << " | Marks: " << marks << endl;
    }
};

int main() 
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];   

    cout << "\nEnter details of " << n << " students:\n";
    for (int i = 0; i < n; i++) 
    {
        cout << "\nStudent " << i + 1 << ":\n";
        s[i].input();
    }

   
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++)
         {
            if (s[j].marks > s[i].marks) 
            {
                Student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    cout << "Sorted Student List (by Marks):\n";
    for (int i = 0; i < n; i++) 
    {
        s[i].display();
    }

    return 0;
}
