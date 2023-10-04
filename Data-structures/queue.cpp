#include <iostream>
#include "Vector_for_help.cpp"
using namespace std;

template <typename b1t>
class Queue {
    private:
        Vector <b1t> data;

    public:
        void enqueue(const b1t& value){  // enqueue == push
            data.push_back(value);
        }

        void dequeue(){                  // dequeue == pop
            if (isEmpty()){
                cerr << "Queue is Empty... " << endl;
            }
            data.erase(0);
        }

        b1t& front(){
            if (isEmpty()){
                cerr << "Queue is Empty... " << endl;
            }
            return data.front();
        }

        bool isEmpty(){
            return data.getSize() == 0;
        }   

        size_t size(){
            return data.getSize();
        }

        void print() const{
            for (int i = 0; i < data.getSize(); i++){
                cout << data[i] << " ";
            }
            cout << endl;
        }

};

int main (){
    Queue <int> queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);

    cout << "Queue Elements: ";
    queue.print();

    cout << "Front: " << queue.front() << endl;

    queue.dequeue();

    cout << "Front after Pop: " << queue.front() << endl;

    cout << "After All Operations: " ;
    queue.print();

    cout << "Size: " << queue.size() << endl;

    return 0;
}
