
#include <iostream>
#include <string>

int main(void)
{

    int x = 22;
    int* p = &x;
    *p = 50;

    int y;
    char l;
    double z;
    long double h;

    std::cout << *p << std::endl;
    std::cout << sizeof(y) << std::endl;
    std::cout << sizeof(l) << std::endl;
    std::cout << sizeof(z) << std::endl;
    std::cout << sizeof(h) << std::endl;
    
    

	return 0;
}
