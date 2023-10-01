#include <iostream>
using namespace std;

template <typename b1t>
class LinkedList {
    struct Node {
        b1t data;
        Node* prev;
        Node* next;

        Node(const b1t& value) : data(value), prev(nullptr), next(nullptr){}

    };

    Node* head;
    Node* tail;
    size_t size;

    public:
    LinkedList() : head(nullptr), tail(nullptr), size(0) {}

    void push_front(const b1t& value){
        Node* newNode = new Node(value);
        if (empty()){
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        size++;
    }

    void push_back(const b1t& value){
        Node* newNode = new Node(value);
        if (empty()){
            tail = head = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    void pop_front(){
        if(empty()){
            cerr << "List is Empty" << endl;
            //return;
        }
        if(size == 1){
            delete head;
            head = tail = nullptr;
        } else {
            Node* temp = head;
            head = head->next;
            head->prev = nullptr;
            delete temp;
        }
        size--;
    }

    void pop_back(){
        if(empty()){
            cerr << "List is Empty" << endl;
            //return;
        }
        if (size == 1){
            delete tail;
            head = tail = nullptr;
        } else {
            Node* temp = tail;
            tail = tail->prev;
            tail->next = nullptr;
            delete temp;   
        }
        size--;
    }

    bool empty() const {
        return size == 0;
    }

    size_t getSize() const {
        return size;
    }

    void print() const {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << std::endl;
    }

    ~LinkedList() {
        while (!empty()) {
            pop_front();
        }
    }

};

int main (){
    LinkedList <int> myList;

    myList.push_front(0);
    myList.push_front(1);
    myList.push_front(2);
    myList.push_front(3);
    cout << "List after Push: ";

    myList.print();

    myList.pop_front();
    myList.pop_back();
    cout << "List after Pop: ";

    myList.print();

    return 0;
}
