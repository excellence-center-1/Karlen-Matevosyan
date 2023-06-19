#include <iostream>
using namespace std;

class Complex {
    public:
        double real;
        double imag;

        void setValue (){
            cin>>real;
            cin>>imag;
        }

        void Display (){
            cout<<real<<"+"<<imag<<"i"<<endl;
        }

        void Sum (Complex c1,Complex c2){
            real = c1.real + c2.real;
            imag = c1.imag + c2.imag;
        }

        void Substraction (Complex c1,Complex c2){
            real = c1.real - c2.real;
            imag = c2.imag - c2.imag;
        }


        void Multiplication (Complex c1,Complex c2){
            real = c1.real * c2.real - c1.imag * c2.imag;
            imag = c1.real * c2.imag + c1.imag * c2.real;
        }
};

int main () {
    Complex c1,c2,c3;

    cout<<"Enter real and imaginary part of first complex number"<<endl;
    c1.setValue();
    cout<<"Enter real and imaginary part of second complex number"<<endl;
    c2.setValue();

    cout<<"The Sum Of Two Complex Numbers Is: ";
    c3.Sum(c1,c2);
    c3.Display();

    cout<<"The Substraction Of Two Complex Numbers Is: ";
    c3.Substraction(c1,c2);
    c3.Display();

    cout<<"The Multiplication Of Two Complex Numbers Is: ";
    c3.Multiplication(c1,c2);
    c3.Display();

    return 0;
}
