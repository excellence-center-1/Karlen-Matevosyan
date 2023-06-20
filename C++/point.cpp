#include <iostream>
using namespace std;

const double PI = 3.14;

class Point {
    protected:
        double x,y;

    public:
        Point (double xValue,double yValue) : x(xValue), y(yValue) {}

        void show () const {
            cout << "Point: (" << x << ", " << y << ")" <<endl;

        }
};

class Circle : public Point {
    private:
        double radius;

    public:
        Circle (double xValue,double yValue,double radiusValue) : Point(xValue,yValue), radius(radiusValue) {}

        double area () const {
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

        double area () const {
            return width * height;
        }

        void show () const {
            cout<<"Rectangle Width: "<<width<<endl;
            cout<<"Rectangle Height: "<<height<<endl;
        }
};


int main () {
    Point p(3.2,2.6);
    p.show();

    Circle c(1.0,2.0,5.0);
    c.show();
    cout<<"Circle Area: "<<c.area()<<endl;

    Rectangle r(2.0,4.0,3.0,6.0);
    r.show();
    cout<<"Rectangle Area: "<<r.area()<<endl;
}
