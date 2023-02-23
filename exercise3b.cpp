/*
    Jaylon Virgil
    CSC 419 Assignment 2: Exercise 3b (C++)
    --
    demonstrates unpredictable program behavior
    for an array element out of range in C++
*/

#include <iostream>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    std::cout << arr[6] << std::endl;
    return 0;
}