#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    std::string rev;
    std::string str;
    int x;

    cout << "Type a number: ";
    cin >> x;

    str = to_string(x);
    for (int i = str.length() - 1; i > 0; i--)
    {
        rev += str.at(i);
    }
    std::cout << rev << endl;
    // to string then new string
    return 0;
}