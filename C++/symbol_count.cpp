#include <iostream>                                         

int main() {
    char str = 'l';
    int count = 0;
    char symbol [] = "Hello my name is Karlen:";
    for (int i = 0;i<=sizeof(symbol);i++){
        if (symbol[i] == str)
            count++;
    }
    std::cout<<"The Count Of Given char(l) is: "<<count<<std::endl;
}
