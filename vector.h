/* why so fienious? */
#pragma once

#include <initializer_list>

template <typename T>
class Vector {
    private:
        T* elements; // some array -> type is double
        int size; // number of elements in that array -> will be int
        int capacity; // total capacity of array
        int dimension;
    public:
        /* default constructor */ 
        Vector() : elements(nullptr), size(0), capacity(0) {}
        
        /* empty vector constructor */
        Vector(int size) : size(size), capacity(size) { elements = new T[capacity]; }

        /* constructor */
        Vector(std::initializer_list<T> init_vector) : size(init_vector.size()), capacity(init_vector.size()) {

            elements = new T[capacity];

            int index = 0;
            for(T vector_element : init_vector) {
                elements[index++] = vector_element;
            }

        }

        /* deconstructor */
        ~Vector() {
            delete[] elements;
        }

        /* operator functions */

        // return a reference to the specific index
        // allows indirect access to assigning or displaying the value
        T& operator[](int index) {
            return this->elements[index];
        }

        // implement custom operator
        // and 2d functionality

        /*
        T& operator<>(int row, int col) {
            return this->elements[row * column + column];
        }
        */

        // addition
        // need to add compatibility for different sized vectors
        Vector operator+(Vector<T>& someVector) {

            Vector<T> result(this->size); 

            for(int i = 0; i < this->size; i++) {
                T value = this->elements[i];
                result[i] = value + someVector[i];
            }

            return result;
        }

        // subtraction
        Vector operator-(Vector<T>& someVector) {

            Vector<T> result(this->size);

            for(int i = 0; i < this->size; i++) {
                T value = this->elements[i];
                result[i] = value - someVector[i];
            }

            return result;
        }

        // multiplication
        Vector operator*(Vector<T>& someVector) {
            
            Vector<T> result(this->size);

            /* this is so bad, so so bad holy shit */
            for(int i = 0; i < 4; i ++) {
                for(int j = 0; j < 4; i) {
                    Vector<T> thisRow = {this->elements[0 + (i * 4)], this->elements[1 + (i * 4)], this->elements[2 + (i * 4)], this->elements[3 + (i * 3)]};
                    Vector<T> someRow = {someVector[0 + j], someVector[4 + j], someVector[8 + j], someVector[12 + j]};

                    result[i * j + j] = thisRow[i] * someRow[0] + thisRow[i] * someRow[1] + thisRow[i] * someRow[2] + thisRow[i] * someRow[3]; 
                }
            }

            return result;

        }

        /* display | debug functions */

        int getSize() {
            return size;
        }

        void displayVector() {
            for(int i = 0; i < size; i++) {
                std::cout << elements[i] << "\n";
            }
        }


        
        /*
        void displayVector() {
            if (T == Vector::Vector<int>) {
                for(int i = 0; i < size; i++){
                    for(int j = 0; j < elements[i].getSize(); j++) {
                        std::cout << elements[i][j] << "\n";
                    }
                }
            } else {
                for(int i = 0; i < size; i++) {
                    std::cout << elements[i] << "\n";
                }
            }
        }
        */

};


