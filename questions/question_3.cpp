#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
/*
title: q3: palendrome integer
author: Clodagh Kelly
comment on method: since main must return an int we need a separate method to return and print
a boolean, the method made it cleaner to print the output with less lines of code needed.
in the bool method, take in the int x from the cin in the main method, convert it to a string
initialize the rev (reverse) string. loop through the string from the end and build up reverse string by
character starting at the last character and going backwards until the reverse is built.
then compare the 2 strings and return this. it will return true or false.
use boolalpha to print the boolean result to the page.*/

bool isPalendrome(int x)
{
    string str = to_string(x);
    string rev;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        rev += str.at(i);
    }
    return str == rev;
}
int main()
{
    int x;

    cout << "Type a number: ";
    cin >> x;
    cout << boolalpha << isPalendrome(x) << endl;

    return 0;
}