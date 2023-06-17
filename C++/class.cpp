#include <iostream>
#include <string.h>

using namespace std;
class car
{
	private:
		char *model;
		char *color;
		size_t max_power;
	public:
		void print ()
		{
			cout << model<<endl;
			cout << color<<endl;
			cout << max_power;
		}
		car ()
		{
			model = new char[20];
			color = new char[20];
			max_power = 300;
		}

		car (const char *car_model,const  char *car_color, size_t car_max_power)
		{
			model = new char[20];
			color = new char[20];
			strcpy (model, car_model);

			strcpy (color, car_color);

			max_power = car_max_power;
		}

		~car ()
		{
			delete[]model;
			delete[]color;
		}

};

int main ()
{
	// car object ();
	car object2 = car ("Mercedes E63 ","Black ",220); 
	object2.print();
}

