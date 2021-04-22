#include <iostream>

using namespace std;

#define log(x) cout << x
#define fetch(x) cin >> x

int main()
{

    int size;
    fetch(size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        fetch(arr[i]); /* False: int x; arr[i] = scanf("%d", &x); you're taking one user input, and placing it in x */ /* False: log(arr[size - 1]);  you can't print a value that you haven't filled yet in the array */
    }

    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]); /* Or: cout << arr[i] << " "; */
    }

    /* an alternative solution using dynamically allocated memory
with new & delete (C++); instead of malloc & free (C) 
unlike malloc and free that just allocate memory to objects; new and delete apart from allocating memory also call constructor and destructor.

#include <iostream>

int main() 
{
    int N,i=0;
    std::cin>>N;
    int *A = new int[N];
    while(std::cin>>A[i++]);
    while(std::cout<<A[--N]<<' ' && N);
    delete[] A;
    return 0;
}
*/

    /* an alternative solution using STL containers, instead of  C-style arrays
containers present a lot of advantages such as being compatible with STL algorithms, or providing useful member functions such as 'std::vector::size()' 
In this case, we can use 'std::vector', which is a dynamic array.  

#include <vector>
#include <iostream>
#include <iterator>

int main()
{
    std::size_t size{}; // Here we use 'std::size_t' instead of 'int'
                        // because an array size cannot be negative
    std::cin >> size;
    std::vector<int> vect(size);
    for (std::size_t i{}; i < size; ++i)
    	std::cin >> vect[i];

    // One of the many advantages to use C++ STL containers: is we can use reverse iterators
    for (auto rit = vect.rbegin(); rit != vect.rend(); ++rit)
        std::cout << *rit << ' ';
    std::cout << std::endl;
    return 0;
}
*/

    return 0;
}