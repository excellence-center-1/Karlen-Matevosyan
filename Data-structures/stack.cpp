#include <iostream>
#include "Vector_for_Stack.cpp"
using namespace std;

template <typename b1t>
class Stack {
    private:
        Vector<b1t> data;

    public:
        void push(const b1t& value){
            data.push_back(value);
        }

        void pop(){
            if (isEmpty()){
                cerr << "Stack Is Empty... " << endl;
            }
            data.erase(data.getSize() - 1);
        }
        
        b1t& top(){
            if (isEmpty()){
                cerr << "Stack Is Empty... " << endl;
            }
            return data.back();
        }

        bool isEmpty(){
            return data.getSize() == 0;
        }   

        size_t size(){
            return data.getSize();
        }

};

int main(){
    Stack <int> stack;

    stack.push(15);
    stack.push(12);
    stack.push(8);
    stack.push(6);

    cout << "Top: " << stack.top() << endl;

    stack.pop();

    cout << "Pop: " << stack.top() << endl;

    cout << "Size: " << stack.size() << endl;

    return 0;
}
