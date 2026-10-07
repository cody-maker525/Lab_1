#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
/*
title: q1: reverse an integer
author: Clodagh Kelly
comment on method: initialize 3 variables, 2 strings,
one original (str) the other reverse (rev). and a final int x
this will be the input.
take an input from a user using cin.
Convert this to a string to be reversed.
use a for loop to add each character by going from the end
character in the original string and iterating backwards until the
full word is created backwords and printed at the end*/
int main()
{
    std::string rev; // cr
    std::string str;
    int x;

    cout << "Type a number: ";
    cin >> x;

    str = to_string(x);
    for (int i = str.length() - 1; i >= 0; i--)
    {
        rev += str.at(i);
    }
    std::cout << rev << endl;
    // to string then new string
    return 0;
}