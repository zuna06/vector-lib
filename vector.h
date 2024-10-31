/* why so fienious? */
#pragma once

#include <initializer_list>
#include <chrono>
#include <functional>

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
            /* never mind its okay now :) */
            /* never mind this shit is ass */
            /* the fact that this even crossed my mind is ridiculous */
            
            /*
            int index = 0;
            for(int i = 0; i < 4; i++) {
                T thisRow[] = {this->elements[0 + (i * 4)], this->elements[1 + (i * 4)], this->elements[2 + (i * 4)], this->elements[3 + (i * 4)]};
                for(int j = 0; j < 4; j++) {
                    T someRow[] = {someVector[0 + j], someVector[4 + j], someVector[8 + j], someVector[12 + j]};
                    result[index++] = thisRow[0] * someRow[0] + thisRow[1] * someRow[1] + thisRow[2] * someRow[2] + thisRow[3] * someRow[3]; 
                }
            }
            */


            int index = 0;
            for(int i = 0; i < 4; i++) {
                for(int j = 0; j < 4; j++) {
                    result[index++] = (this->elements)[0 + (i * 4)] * someVector[0 + j]
                                    + (this->elements)[1 + (i * 4)] * someVector[4 + j]
                                    + (this->elements)[2 + (i * 4)] * someVector[8 + j]
                                    + (this->elements)[3 + (i * 4)] * someVector[12 + j];
                }
            }
            return result;
        }

        /* display | debug functions */

        int getSize() {
            return size;
        }
};

namespace Debug {

    template <typename T>
    void displayVector(Vector<T>& vector) {
            for(int i = 0; i < vector.getSize(); i++) {
                std::cout << vector[i] << "\n";
            }
        }

    template <typename T>
    void printTime(std::function<Vector<T>(Vector<T>&)>, Vector<T>& vector) {
    
        auto start = std::chrono::high_resolution_clock::now();
        func(vector);
        auto end = std::chrono::high_resolution_clock::now();

        std::chrono::duration<double> duration = end - start;

        std::cout << "Function execution time: " << duration.count() << " seconds" << "\n";
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

