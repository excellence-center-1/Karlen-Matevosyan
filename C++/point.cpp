#include <iostream>
using namespace std;

const double PI = 3.14;

class Point {
    protected:
        double x,y;

    public:
        Point (double xValue,double yValue) : x(xValue), y(yValue) {}

        virtual void show () const {
            cout << "Point: (" << x << ", " << y << ")" <<endl;

        }

        virtual double area () const = 0;
        
};

class Circle : public Point {
    private:
        double radius;

    public:
        Circle (double xValue,double yValue,double radiusValue) : Point(xValue,yValue), radius(radiusValue) {}

        double area () const override{
            return PI * radius * radius;
        }

        void show () const {
            cout<<"Circle Radius: "<<radius<<endl;
        }

};

class Rectangle : public Point {
    private:
        double width,height;

    public:
        Rectangle (double xValue,double yValue,double widthValue,double heightValue) : Point(xValue,yValue) , width(widthValue), height(heightValue){}

        double area () const override {
            return width * height;
        }

        void show () const {
            cout<<"Rectangle Width: "<<width<<endl;
            cout<<"Rectangle Height: "<<height<<endl;
        }
};


int main () {
    Point *P;
    Circle C(1.0,2.0,5.0);
    Rectangle R(2.0,4.0,3.0,6.0);

    P = &C;
    P->show();
    cout<<"Circle Area: "<<P->area()<<endl;

    P = &R;
    P->show();
    cout<<"Rectangle Area: "<<P->area()<<endl;
}
