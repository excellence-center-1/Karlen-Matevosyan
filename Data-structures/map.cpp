#include <iostream>
using namespace std;

template <typename b1t_key, typename b1t_val>
class Map {
    private:
        struct Node{
            b1t_key key;
            b1t_val value;
            Node* next;

            Node(const b1t_key& k, const b1t_val v) : key(k), value(v), next(nullptr) {}
        };

        Node* head;

    public:
        Map() : head(nullptr) {}

        void insert(const b1t_key& key, const b1t_val& value){
            Node* current = head;
            while(current){
                if(current->key == key){
                    current->value = value;
                    return;
                }
                current = current->next;
            }

            Node* newNode = new Node(key,value);
            newNode->next = head;
            head = newNode;
        }

        bool find(const b1t_key& key,  b1t_val& value) const{
            Node* current =head;
            while(current){
                if(current->key == key){
                    value = current->value;
                    return true;
                }
                current = current->next;
            }
            return false;
        }

        void remove (const b1t_key& key){
            if(head->key == key){
                Node* temp = head;
                head = head->next;
                delete temp;
                return;
            }

            Node* current = head;
            while(current->next){
                if(current->next->key == key){
                    Node* temp = current->next;
                    current->next = current->next->next;
                    delete temp;
                    return;
                }
                current = current->next;
            }
        }

        bool contains(const b1t_key& key){
            Node* current = head;
            while(current){
                if(current->key == key){
                    return true;
                }
                current = current->next;
            }
            return false;
        }
    
        void print()const {
            Node* current = head;
            while(current){
                cout << "Key:" << current->key << " Value-" << current->value << endl;
                current = current->next;
            }
        }

};

int main () {
    Map <int, string> map;
    string value;

    map.insert(1,"One");
    map.insert(2,"Two");
    map.insert(3,"Three");

    if(map.find(2,value)) {
        cout << "Value For Key 2: " << value << endl;
    } else {
            cout << "Key 2 Not Found... " << endl;
        }

    map.remove(3);
    map.print();

    if(map.contains(1)){
        cout << "Key 1 Exists In The Map " << endl;
    } else {
            cout << "Key 1 Doesn`t Exists In The Map... " << endl;
        }

    return 0;
}
