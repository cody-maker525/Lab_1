

#include <iostream>
#include <algorithm>
using namespace std;

/*
title: q2: highest common divisor
author: Clodagh Kelly
comment on method: initialize and take in 2 inputs using cin and initializing them on top
use the minimum method from algorithm library to find the minimum value between x and y, since
it's the largest common divisor the for loop will not go above the smaller number.
use the smaller number (m) as the amount of iterations for the for loop.
initialize largest (largest divisor) as 1 becuase everything divides into 1.
if i goes into x evenly with no remainders so i%x = 0 AND the same for y then it becomes the new largest
it keeps getting updated until the for loop terminates then the largest is printed */
int main()
{
    int x, y;

    cout << "Type a first number: ";
    cin >> x;
    cout << "Type a second number: ";
    cin >> y;

    int m = min(x, y);
    int largest = 1;
    for (int i = 1; i < m; i++)
    {

        if (x % i == 0 && y % i == 0)
        {
            largest = i;
        }
    }
    std::cout << largest << endl;
    return 0;
}