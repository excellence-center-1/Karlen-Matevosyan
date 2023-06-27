#include <iostream>
#include <cstring>
using namespace std;

class String {
    private:
        char *data;
        size_t length;
        size_t capacity;

    public:
        // Default
        String () : data(NULL), length(0), capacity(0) {}

        // Constructor from C-style string (From Internet)
        String(const char* str) : length(strlen(str)), capacity(length + 1) {
            data = new char[capacity];
            strcpy(data, str);
        }
        // Copy
        String (const String &str) : length(str.length), capacity(str.capacity) {
            data = new char[capacity];
            for (size_t i = 0;i< length;i++){
                data[i] = str.data[i];
            }
        }

        // Destructor
        ~String () {
            delete [] data;
        }

        size_t Get_length () const {
            return length;
        }

        size_t Get_capacity () const {
            return capacity;
        }

        void clear () {
            delete [] data;
            data = NULL;
            length = 0;
            capacity = 0;
        }

        bool isempty () const {
            return length == 0;
        }

        // Function to set a character at a specific index (Was taken from Internet)
        void setCharAt(size_t index, char ch) {
            if (index >= 0 && index < length) {
                data[index] = ch;
            }
        }

        // Function to retrieve a character at a specific index (Was taken from internet)
        char getCharAt(size_t index) const {
            if (index >= 0 && index < length) {
                return data[index];
            }
            return '\0';  // Return null character if index is out of range
        }

        void print() const {
            if (data != nullptr) {
                cout << data;
            }
        }

};

int main () {
    String c1; // Default
    String c2 = "Nothing Interesting: "; // Copy
    String c3(c2); // Copy from c2

    cout<<"c1 Length: "<<c1.Get_length()<<endl;
    cout<<"c1 Capacity: "<<c1.Get_capacity()<<endl;
    cout<<"c1 Empty: "<<(c1.isempty() ? "True" : "False")<<endl;

    cout<<"c2 Length: "<<c2.Get_length()<<endl;
    cout<<"c2 Capacity: "<<c2.Get_capacity()<<endl;
    cout<<"c2 Empty: "<<(c2.isempty() ? "True" : "False")<<endl;

    cout<<"c3 Length: "<<c3.Get_length()<<endl;
    cout<<"c3 Capacity: "<<c3.Get_capacity()<<endl;
    cout<<"c3 Empty: "<<(c3.isempty() ? "True" : "False")<<endl;

    c2.clear();
    cout<<"c2 Length After Clearing: "<<c2.Get_length()<<endl;
    cout<<"c2 Empty After Clearing: "<<(c2.isempty() ? "True" : "False")<<endl;
    
    c3.setCharAt(0, 'K');
    cout << "c3 After Modifying: ";
    c3.print();
    cout << endl;

    return 0;
}
