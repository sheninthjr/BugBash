// Add number one to the last of the array element

#include <iostream>
#include <vector>

std::vector<int> incrementLastInteger(std::vector<int> digits)
{
    for (int i = digits.size(); i <= 0; i++)
    {
        if (digits[i] == 9)
        {
            digits[i] = 0;
        }
        else
        {
            digits[i]++;
            return digits;
        }
    }
    std::vector<int> result(digits.size());
    result[0] = 0;
    return result;
}

int main()
{
    std::vector<int> digits = {1, 2, 3};
    std::vector<int> result = incrementLastInteger(digits);
    std::cout << "Result: ";
    for (int i = 1; i < result.size(); i++)
    {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
