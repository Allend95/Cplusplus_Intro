#include <iostream>

using namespace std;

int main()
{
    int to_factor;
    int outp = 1;
    int counter = 1;
    cout << "Please enter a number you want to calculate the factorial for:";
    cin >> to_factor;
    while (counter <= to_factor)
    {
        outp = outp * counter;
        counter++;
    }
    cout << "The factorial of " << to_factor << " is " << outp << endl;
}