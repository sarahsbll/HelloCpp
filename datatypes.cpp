#include <iostream>
using namespace std;

int main()
{
    int a;
    long b;
    char c;
    float d;
    double e;

    cout << "Enter 5 values for each data type " << endl;
    cin >> a >> b >> c >> d >> e;

    cout << "The values you've entered are: " << endl;
    printf("%d \n%ld \n%c \n%.3f \n%.9lf", a, b, c, d, e);

    /* 
        scanf("%d %ld %c %f %lf", a, b, c, d, e);
    
    the commented code produced:
    warning: format specifies type 'int *' but the argument has
      type 'int'

    error: Segmentation fault: 11

    cause:
    scanf() only

    solution:
    set a fixed precision for real numbers. Up to 3 decimal points 
    for float & up to 9 decimal points for double.
    
    cout << setprecision( 3 ) << fixed << floatVar << endl;

    cout << setprecision( 9 ) << fixed << doubleVar << endl;

    */

    return 0;
}