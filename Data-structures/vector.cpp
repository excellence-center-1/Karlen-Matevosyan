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

        void push(const b1t& value){
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

        size_t getSize() const {
            return current;
        }

        size_t getCapacity() const {
            return capacity;
        }

        void print() const {
            cout<<"The Elements: [ ";
            for (size_t i = 0; i < current; ++i) {
                cout<<data[i]<<" ";
            }
            cout<<"]";
        }
};

int main () {
    Vector <int> v;

    for (int i = 1; i <=5; i++){
        v.push(i);
    }

    v.print();

    cout << "\nSize: " << v.getSize() << "\n";
    cout << "Capacity: " << v.getCapacity() << "\n";

    return 0;
}
