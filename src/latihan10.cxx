/**
 * @file latihan10.cxx
 * @brief Classes and Objects
 * @details Inline Functions
 */

#include <iostream>
using namespace std;

inline int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    printf("%s\n", __FILE__);

    cout << max(10, 20);
    cout << " " << max(99, 88) << endl;

    return 0;
}