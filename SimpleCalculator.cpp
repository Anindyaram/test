//Basic Program for Calculator

#include <iostream>
#include <cmath>
using namespace std;

class calculator
{
        double a, b;

public:
        void get()
        {
                cout << "\nEnter First Number : ";
                cin >> a;
                cout << "Enter Second Number : ";
                cin >> b;
                cout<<endl;
        }
        double add()
        {
                return a + b;
        }
        double sub()
        {
                return a - b;
        }
        double mul()
        {
                return a * b;
        }
        double div()
        {
                if (b == 0)
                {
                        cout << "Division by zero" << endl;
                        return INFINITY;
                }
                else
                {
                        return a / b;
                }
        }
};

int main()
{
        int choice;
        calculator c;
        cout << "Select any one " << endl;
        cout << "Enter 1 for addition " << endl;
        cout << "Enter 2 for subtraction " << endl;
        cout << "Enter 3 for multiplication " << endl;
        cout << "Enter 4 for division" << endl;
        cout << "Enter 5 to exit\n" << endl;

        do
        {
                cout << "Enter Choice : ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                        c.get();
                        cout << "Result : " << c.add() << endl;
                        break;
                case 2:
                        c.get();
                        cout << "Result : " << c.sub() <<"\n"<< endl;
                        break;
                case 3:
                        c.get();
                        cout << "Result : " << c.mul() <<"\n"<< endl;
                        break;
                case 4:
                        c.get();
                        cout << "Result : " << c.div() <<"\n"<< endl;
                        break;
                }
        } while (choice >= 1 && choice <= 4);

        return 0;
}