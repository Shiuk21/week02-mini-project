#include <iostream>
using namespace std;

int main()
{
    double newTemp;
    double temp;
    double f;
    double c;
    int input;

    cout << "Enter a temperature: ";
    cin >> temp;
    if (!cin)
    {
        cout << "Invalid Input" << endl;
    }
    else 
    {
        cout << "Enter 1 for Farenheit or 2 for Celsius: ";
        cin >> input;

        if (input != 1 && input != 2)
        {
            cout << "Invalid input" << endl;
            
        }
        else if (input == 1)
        {
            newTemp = (temp - 32) * 5/9;
            cout << temp << " F converts to " << newTemp << " C" << endl;
        }
        else
        {
            newTemp = temp * 9/5+32;
            cout << temp << " C converts to " << newTemp << " F" << endl;
        }   
    }
    
}