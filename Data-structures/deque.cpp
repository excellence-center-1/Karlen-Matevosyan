#include <iostream>
#include "Vector_for_help.cpp"

template <typename b1t>
class Deque {
    private:
        Vector <b1t> data;

    public:
        void push_back(const b1t& value) {
            data.push_back(value);
        }

        void push_front(const b1t& value){
            data.insert(0,value);
        }

        void pop_back() {
            if(data.isEmpty()){
                cerr << "Deque Is Empty... " << endl;
            }
            data.erase(data.getSize() - 1);
        }

        void pop_front() {
            if(data.isEmpty()){
                cerr << "Deque Is Empty... " << endl;
            }
            data.erase(0);
        }

        void clear() {
            cout << "Clearing..." << endl;
            data.clear();
        }

        bool isEmpty() {
            return data.getSize() == 0;
        }

        size_t size(){
            return data.getSize();
        }

        b1t& at(size_t index){
            return data.at(index);
        }

        b1t& operator[](size_t index){
            return data[index];
        }

        b1t& front(){
            return data.front();
        }

        b1t& back(){
            return data.back();
        }

        void print(){
            data.print();
        }

};

int main() {
    Deque<int> deque;

    deque.push_back(25);
    deque.push_back(6);
    deque.push_back(12);

    deque.push_front(0);
    deque.push_front(-1);

    deque.print();
    cout << endl;

    cout << "Size: "<< deque.size() << endl;

    cout << "Front: " << deque.front() << endl;
    cout << "Back: " << deque.back() << endl; 

    cout << "Element at index 1: " << deque[1] << std::endl; 

    deque.pop_front();
    deque.pop_front();

    deque.pop_back();

    cout << "After Pop: ";
    deque.print();
    cout << endl;


    deque.clear();
    
    cout << "Is Deque Empty? " << (deque.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
