#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter a year to see if it is a leap year: ";
    int currentYear;
    cin >> currentYear;

    bool isDivisibleBy4 = (currentYear % 4) == 0;
    bool isDivisibleBy100 = (currentYear % 100) == 0;
    bool isDivisibleBy400 = (currentYear % 400) == 0;

    if (isDivisibleBy4)
    {
        if (isDivisibleBy100)
        {
            if (isDivisibleBy400)
            {
                cout << "LEAP YEAR" << endl;
            }
            else
            {
                cout << "NOT A LEAP YEAR" << endl;
            }
        }
        else
        {
            cout << "LEAP YEAR" << endl;
        }
    }
    else
    {
        cout << "NOT A LEAP YEAR" << endl;
    }
}
