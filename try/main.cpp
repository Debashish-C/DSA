#include <iostream>
#include "insert.h" // Include the header file

int main() {
    std::vector<int> numbers;
    int num;

    std::cout << "Enter a number to insert: ";
    std::cin >> num;

    insertElement(numbers, num);

    std::cout << "Updated list: ";
    for (int n : numbers) {
        std::cout << n << " ";
    }

    return 0;
}
