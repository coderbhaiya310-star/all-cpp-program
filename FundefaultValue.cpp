//function DefaultValue demo
#include <iostream>
using namespace std;
void studentdetails(string name = "John Doe", int age = 18, string grade = "A") {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Grade: " << grade << endl;
}

int main() {
    cout << "Student 1 details (using default values):" << endl;
    studentdetails(); // Using default values

    cout << "\nStudent 2 details (overriding default values):" << endl;
    studentdetails("Alice Smith", 20, "B"); // Overriding default values

    cout << "\nStudent 3 details (overriding some default values):" << endl;
    studentdetails("Bob Johnson", 19); // Overriding some default values

    cout << "\nStudent 4 details (overriding some default values):" << endl;
    studentdetails("Charlie Brown"); // Overriding some default values

    return 0;
}