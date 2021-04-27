#include <iostream>
#include <string>

int main()
{
    // replace with fixed code for input
    int l = 2;
    int q = 1;

    //std::cout << l << q;

    //std::string* arr = new std::string[];
    // try to fill out the pointer array for practice

    // take in source code
    std::string hrml[l];

    for (int i = 0; i < l; i++)
    {
        getline(std::cin, hrml[i]);
    }

    /*for (int i = 0; i < l; i++)
    {
        std::cout << hrml[i];
    }*/

    // take in queries
    std::string queries[q];

    for (int x = 0; x < q; x++)
    {
        getline(std::cin, queries[x]);
    }

    for (int i = 0; i < q; i++)
    {
        // int j = 0;
        //std::cout << queries[i].length();

        int j = 0;
        int pos = 0; // segmentation fault 11: int j, pos = 0;
        while (queries[i][j] != '~')
        {
            j++;
        }

        pos = j;

        int ln;
        ln = (int)queries[i][pos - 1] - 48; // it didn't work with -'O'
        //std::cout << ln;

        std::string attrbt = "";
        for (int k = pos + 1; k < queries[i].length(); k++)
        {
            attrbt += queries[i][k]; // append() didn't work: error: no matching member function for call to 'append'
        }
        //std::cout << attrbt;

        for (int t = 0; t < l; t++)
        {
            if (t == ln - 1)
            {
                //std::cout << ;

                if (hrml[t].find(attrbt) != std::string::npos)
                {
                    //std::cout << hrml[t].find(attrbt);
                    /*
                    char f;
                    f = attr[0]
                    int z = 0;
                    int sum = 0;
                    while(hrml[i][z] )
                    */

                    //std::cout << "Found!";
                    int offset;
                    offset = hrml[t].find(attrbt) + attrbt.length() + 4;
                    // std::cout << offset;

                    // find length of attrValue, by finding end of "
                    int y = offset;
                    int posy = 0;             // segmentation fault 11: int j, pos = 0;
                    while (hrml[i][y] != '"') // maybe escape it with backlash
                    {
                        y++;
                    }

                    posy = y;
                    // std::cout << posy;

                    std::string attrValue = "";
                    for (int s = offset; s < posy; s++)
                    {
                        attrValue += hrml[t][s];
                    }

                    std::cout << attrValue;
                }
                else
                {
                    std::cout << "Not Found";
                }
            }
        }
    }

    // std::cout << queries[i][j + 1];

    /*for (int i = 0; i < q; i++)
    {
        std::cout << queries[i];
    }*/

    /*
    std::string tst;
    getline(std::cin, tst);

    std::cout << tst;
    */
}