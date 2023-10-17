#include <iostream>
using namespace std;

class Set {
    private:
        struct Node {
            int data;
            Node* next;

            Node(int value) : data(value), next(nullptr) {}
            //Node* head;
        };
        Node* head;

    public:
        Set() : head(nullptr) {}

        bool contains(int element) const {
            Node* current = head;
            while (current) {
                if (current->data == element) {
                    return true;
                }
                current = current->next;
            }
            return false;
        }

        bool isEmpty(){
            return head == nullptr;
        }

        size_t size () const {
            size_t count = 0;
            Node* current = head;
            while(current) {
                ++count;
                current = current->next;
            }
            return count;
        }

        void insert(int element) {
            if(!contains(element)){
                Node* newNode = new Node(element);
                newNode->next = head;
                head = newNode;
            }
        }

        void clear() {
            while(head){
                Node* temp = head;
                head = head->next;
                delete temp;
            }
        }

        Node* find(int element){
            Node* current = head;
            while(current){
                if(current->data == element){
                    return current;
                }
                current = current->next;
            }
            return nullptr;
        }

        void print() const {
            Node* current = head;
            while(current){
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
};

int main () {
    Set set;

    set.insert(22);
    set.insert(5);
    set.insert(8);
    set.insert(13);

    cout << "Set: ";
    set.print();

    cout << "Is Set Empty? " << (set.isEmpty() ? "Yes" : "No") << endl;
    cout << "Size: " << set.size() << endl;

    set.clear();
    cout << "Set After Clearing: ";
    set.print();
    cout << "Is Set Empty? " << (set.isEmpty() ? "Yes" : "No") << endl;

    /*Set::Node* found = set2.find(4);
    if (found) {
        cout << "Found: " << found->data << endl;
    } else {
        cout << "Not found." << endl;
    } */
   
    return 0;
}
