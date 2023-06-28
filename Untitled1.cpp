#include <iostream>

//function declaration example
int doMath(int, int, int, int);

main()
{
    int x = doMath(1,2,3,4);
    std::cout << x;
    return 0;
}

int doMath(int first, int second, int third, int fourth)
{
     return first + second * third / fourth;
}
