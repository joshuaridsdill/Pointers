// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/** MUST define to get dub strings printed to the console
*       |                                               *
*       |                                               *
*       V                                               *
*********************************************************/

#define DEBUGGING

#ifdef DEBUGGING
#define DEBUG_PRINT(x) std::cout << x << '\n'
#else
#define DEBUG_PRINT(x)
#endif

class Entity
{
public:
    Entity()
    {
        DEBUG_PRINT("Created!");
    }
};

int main()
{
    int a = 10;
    int b = 20;

    std::cout << "A: " << a << ", B: " << b << '\n';

    //Raw pointer
    int* p = &a;

    //Modifying memory through a dereferenced pointer
    *p = 15;
    
    std::cout << "A: " << a << ", B: " << b << '\n';

    int* p2 = &b;

    //Pointer to a pointer
    int** ptp = &p;

    //Modify where p points to through another pointer
    *ptp = p2;
     
    //Modify memory through a dereferenced pointer to a pointer
    **ptp = 25;
    
    std::cout << "A: " << a << ", B: " << b << '\n';

    //Allocate memory on the heap, call the constructor and return the address for the pointer to store
    int *c = new int;
    *c = 5;
    
    std::cout << "C: " << *c << '\n';

    Entity *e = new Entity();

    delete e;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
