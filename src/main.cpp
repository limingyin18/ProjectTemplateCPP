#include "Computer.hpp"

#include <iostream>

using namespace ProjectTemplate;
using namespace std;

int main(int argc, char **argv)
{
    Computer<int> *ptr = new Add<int>();
    ptr->SetA(1);
    ptr->SetB(2);

    std::cout << "1 + 2 = " << ptr->Compute() << std::endl;

    return EXIT_SUCCESS; // pointer ptr do not release, memory leak!
}
