#include <iostream>

void pangsi(int &tes){
    std::cout << tes << '\n';
}

int main(){
    int tes = 5;
    int *tos = &tes;
    std::cout << tes << '\n';
    pangsi(tes);
    std::cout << *tos << '\n';

    return 0;
}