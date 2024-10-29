#include <iostream>
#include <vector.h>

int main() {

    // TES NOTES
    // index=row×number of columns+column -> for single dimensional vector


    // addition testing
    // one dimensional

    Vector<int> myVectorOne = {1, 2, 3, 4};
    Vector<int> myVectorTwo = {1, 2, 3, 4};

    Vector<int> addVector = myVectorOne + myVectorTwo;
    Vector<int> multiplyVector = myVectorOne * myVectorTwo;
    addVector.displayVector();

    // two dimensional testing

    //Vector<Vector<int>> vec2d = {{1, 2, 3}, {1, 2, 3}};
    //std::cout << vec2d[0][0] << "\n"; 
    // vec2d.displayVector();


    return 0;
}