#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    // solution using vectors
    int n;
    int q;
    cin >> n >> q;

    // the following line causes this error: error: a space is required between consecutive right angle brackets (use '> >')
    // fix: compile with -std=c++11
    vector<vector<int>> arrA; // in this line the inner array isn't accessible because it doesn't have a name
                              // but you can create these inner arrays on the fly, and name them, as you loop through arrA

    int m;
    for (int i = 0; i < n; i++)
    {
        cin >> m;

        vector<int> arrB; // creating the inner arrays on the fly, and attributing names to them
        int val;
        for (int j = 0; j < m; j++)
        {
            cin >> val;
            arrB.push_back(val);
        }
        // error: segmentation fault 11 because i forgot to add the arrB as element of outer array arrA, and i was trying to access it for printing in the next loops

        arrA.push_back(arrB);
    }

    for (int t = 0; t < q; t++)
    {
        int i, j;
        cin >> i >> j;
        cout << arrA[i][j] << "\n";
    }

    /* alternative solution: editorial using heap-allocated arrays

    // Create an array of pointers to integer arrays
    // (i.e., an array of variable-length arrays)

    // array outer: pointer to integer pointers.
    int **outer = new int *[n]; // the first * in outer is for it to be an array
                                // the second * in outer is for it to hold arrays of integers (pointers to integers)

    // Fill each index of 'outer' with a variable-length array
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        // Create an array of length 'k' at index 'i'

        // element i of outer: pointer to integer values.
        outer[i] = new int[k]; // no need to dereference outer because we're not giving it a value, but a pointer;
                               // also, notice how we're not calling it as a pointer, but as an array (i.e actually, no need to dereference)

        // Fill each cell in the 'inner' variable-length array
        for (int j = 0; j < k; j++)
        {
            cin >> outer[i][j];
        }
    }
    

    // Perform queries:
    while (q-- > 0)
    {
        int outer_index;
        int inner_index;
        cin >> outer_index >> inner_index;

        // Find the variable-length array located at outer_index
        // and print the value of the element at inner_index.
        cout << outer[outer_index][inner_index] << endl;
    }
    */

    return 0;
}