#include <iostream>
#include <algorithm>
#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    std::sort(numbers.begin(), numbers.end());
    return (long)numbers[0] + (long)numbers[1];
}

int main()
{
    std::vector<int> nums;
    nums.push_back(8);
    nums.push_back(22);
    nums.push_back(19);
    nums.push_back(5);

    long sum = sumTwoSmallestNumbers(nums);

    std::cout << sum;
}
