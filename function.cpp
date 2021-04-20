#include <iostream>

using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    /* instead of using the first value of the array, which is a variable,
    we could improve readibilty by using a separate variable m 
    that acts as a temporary holder for the max
    m = arr[0];
    */
    int arr[4] = {a, b, c, d};

    for (int i = 1; i < 4; i++)
    {
        if (arr[i] > a)
        {
            a = arr[i];
        }
    }

    return a;
}

int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int ans = max_of_four(a, b, c, d);

    printf("%d", ans);

    return 0;
}

/* 
an alternative solution based on a process of elimination
    
    int ans;

    if (a > b && a > c && a > d)
        ans = a;
    else if (b > c && b > d)
        ans = b;
    else if (c > d)
        ans = c;
    else
        ans = d;

    return ans;

    more concise solution using the ternary operator 
    (a>b?a:b)>(c>d?c:d)?(a>b?a:b):(c>d?c:d)

*/