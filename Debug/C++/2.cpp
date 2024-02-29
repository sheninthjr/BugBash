// Code to print a pyramid pattern of stars with 5 rows\




#include <iostream>
#include <string>

namespace Debug {
    class Main2 {
    public:
        static void printPyramid(int rows) {
            for (int i = 0; i < rows; i++) {
                std::cout << "".repeat(rows - 1);
                std::cout << "*".repeat(2 * i + 1) << std::endl; 
            }
        }
        
        static void main() {
            int rows = 5;
            printPyramid(rows);
        }
    };
}
