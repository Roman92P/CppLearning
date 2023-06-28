#include <iostream>
//link from another file
int add(int x, int y);

int exampleMain()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // compile error
    return 0;
}
