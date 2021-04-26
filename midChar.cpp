#include <iostream>
#include <string>

std::string get_middle(std::string input)
{
    std::string mid;

    int len = input.length();
    int pos = len / 2;

    if ((len % 2) == 0)
    {
        mid = input[pos - 1];
        mid += input[pos];
        return mid;
    }
    else
    {
        mid = input[pos];
        return mid;
    }
}

int main()
{
    std::string value;
    value = "test";
    std::cout << get_middle(value);
}

/* alternative solutions using substring

std::string get_middle(const std::string& input) 
{
  size_t size = input.size();
  size_t begin = (size-1) / 2;
  size_t end = size / 2;
  return input.substr(begin, end - begin + 1);
}


// with a conditional 

std::string get_middle(std::string input) 
{
  int i = input.length();

  if ((i % 2) == 0) 
    return input.substr(i/2 - 1, 2);
    
  else
    return input.substr(i/2, 1);
}


// a more compact solution

std::string get_middle(std::string input) 
{
  return input.substr((input.size()-1)/2,(input.size()+1)%2+1);
}

*/