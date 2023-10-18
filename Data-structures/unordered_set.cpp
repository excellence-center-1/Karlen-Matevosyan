#include <iostream>
using namespace std;

template <typename b1t>
class UnorderedSet {
    private:
        struct Node {
            int data;
            Node* next;

            Node(int value) : data(value), next(nullptr) {}
        };

        static const int tableSize = 10;
        Node* table[tableSize];

        int hash(b1t value){
            return value % tableSize;
        }

    public:
        UnorderedSet(){
            for(int i = 0;i < tableSize;i++){
                table[i] = nullptr;
            }
        }

        void insert(b1t value){
            int index = hash(value);
            Node* newNode = new Node(value);

            if(table[index] == nullptr){
                table[index] = newNode;
            } else {    
                Node* current = table[index];
                while(current->next !=nullptr){
                    current = current->next;
                }
                current->next = newNode;
            }
        }

        bool contains(b1t value){
            int index = hash(value);
            Node* current = table[index];

            while(current != nullptr){
                if(current->data == value){
                    return true;
                }
                current = current->next;
            }
            return false;
        }

        void print() const {
            for(int i = 0;i < tableSize;i++){
                Node* current = table[i];
                while(current != nullptr){
                    cout << current->data << " ";
                    current = current->next;
                }
            }
            cout << endl;
        }

};

int main() {
    UnorderedSet<int> uset;

    uset.insert(10);
    uset.insert(25);
    uset.insert(12);

    cout << "Initial Unordered Set: ";
    uset.print();

    cout << "Contains 10? " << uset.contains(10) << endl;
    cout << "Contains 17? " << uset.contains(17) << endl;
    /*
       UnorderedSet<string> strSet;

       strSet.insert("Banana");
       strSet.insert("Apple");

       cout << "Contains 'Apple'? " << strSet.contains("Apple") << endl;
       cout << "Contains 'Watermelon'? " << strSet.contains("Watermelon") << endl;
     */
    return 0;
}
