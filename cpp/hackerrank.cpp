#include <iostream>

void plus_minus(int *a, int *b){
    *a += *b;
    *b = ((*a - *b) - *b) > 0 ? ((*a - *b) - *b) : -((*a - *b) - *b);
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a = 3514, b = 2122;
    plus_minus(&a, &b);
    std::cout << a << " " << b;
    return 0;
}