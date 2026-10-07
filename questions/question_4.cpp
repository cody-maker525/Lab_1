#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*
title: q1: return the power
author: Clodagh Kelly
comment on method: intitialize 2 inputs, x and y, initialize an answer of 1 because anything
*1 is itself. then create a for loop where i becomes the value of y, i (value of y) divides by 2 each time
which gives the O (log n (because a number y can only divide log y times before it reaches 0)) time complexity.
Each time there is an iteration x is multiplied by itself which pairs it off with itself.
so x^8 --> (x^2)^4 --> (x^4)^2 --> (x^8)^1= so if x is 2, then (4)^4 --> (16)^2 --> (256)^1.
If the y is odd then it will have a spare x leftover that will not be paired off so it needs to be
muliplied by the answer straight away as the x's will mulitply wrongly otherwise and get too high of a number
as it won't be a pair, and each time y is odd, the answer will multiply by the value x until y is 1
and it exits the loop */
int main()
{
    int x, y;

    cout << "Type a first number: ";
    cin >> x;
    cout << "Type a second number: ";
    cin >> y;

    int ans = 1;
    for (int i = y; i > 0; i = i / 2)
    {
        if (i % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
    }
    cout << ans << endl;

    return 0;
}