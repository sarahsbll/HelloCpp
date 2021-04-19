#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    cout << "Enter integers a and b :" << endl;

    cin >> a;

    cin >> b;

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
    }
    return 0;
}