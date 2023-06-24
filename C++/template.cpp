#include <iostream>
using namespace std;

template <typename T>
class Calculator {
    private:
    T num1;
    T num2;

    public:
    Calculator (T n1,T n2) : num1(n1), num2(n2) {}

    void displayResult () {
        cout<<"The Sum of 2 numbers is: "<<Sum()<<endl;
        cout<<"The Substraction of 2 numbers is: "<<Substract()<<endl;
        cout<<"The Multiplication of 2 numbers is: "<<Multiply()<<endl;
        cout<<"The Division 2 number is: "<<Divide()<<endl;
}

    T Sum () const {
        return num1 + num2;
}

    T Substract () const {
        return num1 - num2;
}

    T Multiply () const {
        return num1 * num2;
}

    T Divide () const {
        return num1 / num2;
}

};

int main () {
    Calculator<int> intCalc(15,10);
    intCalc.displayResult();

    return 0;
}
