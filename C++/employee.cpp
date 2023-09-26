#include <iostream>
using namespace std;

class Employee {
    public:
    const char *name;
    size_t age;
    size_t salary;

    void print () {
        cout<<name<<endl;;
        cout<<age<<endl;
        cout<<salary<<endl;
}

    Employee (const char *tempname,size_t tempage,size_t tempsalary): name(tempname),age(tempage),salary(tempsalary){}
};
class Jone : public Employee {
    void print () const {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<salary<<endl;
}
};

int main () {
    Employee E("Jone",25,150000);
    E.print();
}
