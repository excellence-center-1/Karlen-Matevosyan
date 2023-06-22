#include <iostream>
using namespace std;

class Animal {
	public:
		virtual void eat (){
			cout<<"Eating "<<endl;
		}
};

class Goat : public Animal {
	public:
		void eat () {
			cout<<"Eating Grass "<<endl;
		}
};

class Dog : public Animal {
	public:
		void eat () {
			cout<<"Eating Meat "<<endl;
		}
};

int main () {
	Animal *A;
	Goat G;
	Dog D;
	A = &G;
	G.eat();
	A = &D;
	D.eat();
	return 0;
}
