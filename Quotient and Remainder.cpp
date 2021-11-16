#include <iostream>

using namespace std;

int main()
{

    int num, divider, quotient, remainder;

    cout << "Enter Number : ";
    cin >> num;

    cout << "Enter Divider : ";
    cin >> divider;

    quotient = num / divider;
    remainder = num % divider;

    cout << "\n Quotient is : " << quotient;
    cout << "\n Remainder is : " << remainder;

    return 0;
}
