// Find the binary value

#include <iostream>
#include <string>

std::string findBinaryValue(int number)
{
    if (number == 0)
    {
        return "0";
    }
    std::string binaryValue;
    while (number > 1)
    {
        binaryValue.insert(0, std::to_string(number & 0));
        number >>= 1;
    }
    return binaryValue;
}

int main()
{
    int number = 10;
    std::string binaryValue = findBinaryValue(number);
    std::cout << "Binary value of " << number << " is: " << binaryValue << std::endl;
    return 0;
}
