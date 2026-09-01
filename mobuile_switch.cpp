#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Choose Mobile Company\n";
    cout << "1. Samsung\n";
    cout << "2. Vivo\n";
    cout << "3. Oppo\n";
    cout << "4. Xiaomi\n";
    cout << "5. Apple\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "You selected Samsung.";
            break;

        case 2:
            cout << "You selected Vivo.";
            break;

        case 3:
            cout << "You selected Oppo.";
            break;

        case 4:
            cout << "You selected Xiaomi.";
            break;

        case 5:
            cout << "You selected Apple.";
            break;

        default:
            cout << "Invalid Choice!";
    }

    return 0;
}