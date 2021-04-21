#include <iostream>

using namespace std;

void update(int *a, int *b)
{
    int c = (*a);
    int d = (*b);
    (*a) = c + d;
    (*b) = (c > d) ? c - d : d - c;
    /* if we didn't use temporary variables c & d to hold the initial values;
    the value of a would've changed when calculating the difference;
    to circumvent this, just susbtract the value of b from a, since that was the change 
    
    abs(*a - *b - *b) = abs(*a - 2 * *b)
    
    */
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    update(&a, &b);
    /* or you could create pointers containing the addresses to the variables
    and pass them as arguments to the update function 
    
    int *pa = &a, *pb = &b;
    
    update(pa, pb);
    
    */

    printf("%d\n%d", a, b);

    return 0;
}