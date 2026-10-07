#include <iostream>
using namespace std;

/*
title: q4.5: power of two
author: Clodagh Kelly
comment on method: intitialize x as an input. create a function to return a boolean. if x is 0,
return false as it is not a power of 2, then make a for loop where i is x and i halves each iteration.
if i % 2 ==1 then return false as this means it is not a power of 2. also only iterate i until it is i>1 and not down
1 as i %1 is always = 1 and 1 is a power of two so it falls down to the return true. as a result the
i will keep halving until it reaches 2 and if it does it'll exit the for loop and return true and
if its odd it'll hit the i%2==1 so return false. use the boolalpha to print the boolean value.*/

bool isPowerTwo(int x)
{
    if (x == 0)
    {
        return false;
    }

    for (int i = x; i > 1; i = i / 2)
    {

        if (i % 2 == 1)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int x;

    cout << "Type a first number: ";
    cin >> x;

    cout << boolalpha << isPowerTwo(x) << endl;

    return 0;
}