#include <iostream>
#include <string>
#include <sstream> // string stream http://www.cplusplus.com/reference/sstream/stringstream/
#include <vector>
// #include <ios>    // For streamsize
// #include <limits> // For numeric_limits<>

int main()
{
    int nl;
    int nq;
    scanf("%d %d", &nl, &nq);
    std::cin.ignore();

    std::vector<std::string> code;

    std::string line;
    for (int i = 0; i < nl + 1; i++)
    {
        //std::cin.ignore(1024, '\n'); // the only bug was moving this line outside the loop
        getline(std::cin, line);
        code.push_back(line);
    }

    for (int j = 0; j < nl; j++)
    {
        std::cout << code[j] << "\n";
    }
}
