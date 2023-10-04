#include <iostream>
using namespace std;

template <typename b1t>
class Vector {
    private:
        b1t* data;  // Pointer to dynamic array
        size_t current;  // Current number of elements
        size_t capacity;  // Capacity of the dynamic array

    public:
        // Constructor
        Vector() : current(0), capacity(1) {
            data = new b1t[capacity];
        }

        // Destructor
        ~Vector() {
            delete [] data;
        }   

        void push_back(const b1t& value){
            if (current == capacity){

                capacity *= 2;
                b1t* temp = new b1t[capacity];
                for (size_t i = 0; i <  current; i++){
                    temp[i] = data[i];
                }
                delete [] data;
                data = temp;                
            }
            data[current++] = value;
        }


        void insert(size_t pos, const b1t& value) {
            if (current == capacity) {
                capacity *= 2;
                b1t* temp = new b1t[capacity];

                for (size_t i = 0; i < pos; i++) {
                    temp[i] = data[i];
                }
                temp[pos] = value;

                for (size_t i = pos; i < current; i++) {
                    temp[i + 1] = data[i];
                }

                delete[] data;
                data = temp;
            } else {
                for (size_t i = current; i > pos; i--) {
                    data[i] = data[i - 1];
                }
                data[pos] = value;
            }
            ++current;
        }

        void erase(size_t position) {
            for (size_t i = position; i < current - 1; i++) {
                data[i] = data[i + 1];
            }
            --current;
        }

        void clear() {
            current = 0;
        }

        b1t& operator[](size_t index) {
            if (index >= current) {
                throw out_of_range("Index out of range");
            }
            return data[index];
        }

        b1t& at(size_t index) {
            if (index >= current) {
                throw out_of_range("Index out of range");
            }
            return data[index];
        }  


        b1t& front() {
            if (current == 0) {
                throw out_of_range("Vector is empty");
            }
            return data[0];
        }

        b1t& back() {
            if (current == 0) {
                throw out_of_range("Vector is empty");
            }
            return data[current - 1];
        }  



        size_t getSize() const {
            return current;
        }

        size_t getCapacity() const {
            return capacity;
        }

        void print() const {
            cout <<"The Elements: [ ";
            for (size_t i = 0; i < current; ++i) {
                cout << data[i] << " ";
            }
            cout << "]";
        }
};

