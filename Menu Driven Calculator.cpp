#include <iostream>
using namespace std;
int main() {
    int choice;
    float a,b;
    do {
       cout <<"Choose Any One Option Sir Ihtisham!"<<endl;
	    cout << "\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch (choice) {
            case 1: cout << "Result: " << a + b << endl; break;
            case 2: cout << "Result: " << a - b << endl; break;
            case 3: cout << "Result: " << a * b << endl; break;
            case 4:
                if (b != 0) cout << "Result: " << a / b << endl;
                else cout << "Cannot divide by zero!\n";
                break;
            case 5: cout << "Goodbye Sir Ihtisham!\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 5);
return 0;
}


