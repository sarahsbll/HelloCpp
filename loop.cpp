#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    cout << "Enter integers a and b :" << endl;

    cin >> a >> b;

    cout << "The integers in English are :" << endl;

    string transcribe[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = a; i <= b; i++)
    {
        if (i <= 9)
        {
            cout << transcribe[i - 1] << endl;
        }
        else
        {
            if (i % 2 == 0)
            {
                cout << "even" << endl;
            }
            else
            {
                cout << "odd" << endl;
            }
        }
        /* more concise solution using the ternary operator

            cout<<((i<=9)?c[i]:((i%2==0)?"even":"odd"))<<endl;

        */
    }
    return 0;
}