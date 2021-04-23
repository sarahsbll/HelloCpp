#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    int q;
    cin >> n >> q;

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

    return 0;
}