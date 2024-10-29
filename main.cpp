#include <iostream>
#include <vector.h>
#include <chrono>

int main() {

    // TES NOTES
    // index=row×number of columns+column -> for single dimensional vector


    // addition testing
    // one dimensional

    Vector<int> myVectorOne = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    Vector<int> myVectorTwo = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    Vector<int> addVector = myVectorOne + myVectorTwo;
    
    //Debug::printTime<int>(Debug::displayVector(addVector), addVector);

    auto start = std::chrono::high_resolution_clock::now();
    Vector<int> multiplyVector = myVectorOne * myVectorTwo;
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration = end - start;

    std::cout << "Function execution time: " << duration.count() << " seconds" << "\n";


    Debug::displayVector(addVector);

    // two dimensional testing

    //Vector<Vector<int>> vec2d = {{1, 2, 3}, {1, 2, 3}};
    //std::cout << vec2d[0][0] << "\n"; 
    // vec2d.displayVector();


    return 0;
}