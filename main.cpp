#include <iostream>
#include <vector.h>
#include <chrono>

int main() {

    // TES NOTES
    // index=row×number of columns+column -> for single dimensional vector

    // you aint nothin but a broke fien fien fien
    // broke mf fien

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

    // im going to rip my nuts off
    // 5 ms too long AHHHH
    
    
    //std::cout << << "\n";

    /*
    
    result[i * j + j] = (*this)[i] * someVector[0]
                                        + (*this)[i * j + 1] * someVector[1 * j]
                                        + (*this)[i * j + 2] * someVector[2 * j]
                                        + (*this)[i * j + 3] * someVector[3 * j + j];

    */

    //Debug::displayVector(multiplyVector);

    // two dimensional testing

    //Vector<Vector<int>> vec2d = {{1, 2, 3}, {1, 2, 3}};
    //std::cout << vec2d[0][0] << "\n"; 
    // vec2d.displayVector();


    return 0;
}