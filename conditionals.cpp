#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter an integer: " << endl;

    cin >> n;
    /*  cin.ignore(numeric_limits<streamsize>::max(), '\n');

     the first parameter determines how many characters to ignore. 
     In this case that's max(), meaning "ignore as much as is needed."
     
     the second parameter sets the delimiter, 
     i.e. the character after which cin stops ignoring
     In this case: up to '\n' or EOF - whichever comes first
    
     source: stackoverflow
    */

    if (n <= 9)
    {
        switch (n)
        {
        case 1:
            cout << "one" << endl;
            break;
        case 2:
            cout << "two" << endl;
            break;
        case 3:
            cout << "three" << endl;
            break;
        case 4:
            cout << "four" << endl;
            break;
        case 5:
            cout << "five" << endl;
            break;
        case 6:
            cout << "six" << endl;
            break;
        case 7:
            cout << "seven" << endl;
            break;
        case 8:
            cout << "eight" << endl;
            break;
        case 9:
            cout << "nine" << endl;
            break;
        }
    }
    else
    {
        cout << "Greater than 9" << endl;
    }
    return 0;

    /* a more concise solution using an array & the ternary operator
        variable = (condition) ? expressionTrue : expressionFalse;

    
    string a[]={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
    
    cin>>n;
    
    cout<<((n>9)?a[0]:a[n]);
    
    */
}