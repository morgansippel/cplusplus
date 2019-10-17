/**
    CS-11 Asn 2, 8 digit credit card validator
    Purpose: Improve math and variable skills.
    @author Morgan Sippel
    @version 1.0 Date Completed
*/
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, d= 0, e = 0, f = 0, g = 0, h = 0, eight = 0, b1=0, b10=0, d1=0, d10=0, f1=0, f10=0, h1=0, h10=0; // input variables
    int oddDigits = 0, evenDigits = 0, sumDigits = 0, checksum = 0, someVarThatWontBeUsed=0 ; // output variables
    cout << "Welcome to the Id Number Validator!\n";
    cout << "Enter eight numbers to check credit card validity:";
    cin >> eight;

        a = eight % 10; // rightmost digit
        b = eight / 10 % 10;
        c = eight / 100 % 10;
        d = eight / 1000 % 10;
        e = eight / 10000 % 10;
        f = eight / 100000 % 10;
        g = eight / 1000000 % 10;
        h = eight / 10000000 % 10;

    a=a+a;
    b=b+b;
    c=c+c;
    d=d+d;
    e=e+e;
    g=g+g;
    h=h+h;


    b1=b%10;
    b10=b/10;
    b=b1+b10;

    d1=d%10;
    d10=d/10;
    d=d1+d10;

    f1=f%10;
    f10=f/10;
    f=f1+f10;

    h1=h%10;
    h10=h/10;
    h=h1+h10;

    oddDigits = a+c+e+g;
    evenDigits = b+d+f+h;
    sumDigits = oddDigits + evenDigits;
    checksum = sumDigits%10;
    cout << "Luhn sum:  " << sumDigits << "\n";
    cout <<  "Check sum:  " << checksum << "\n";
    cout <<  "If the checksum is 0 then the number is valid\n";
   cout << "Press enter to exit...";
    cin  >> someVarThatWontBeUsed;
   return 0;

}
© 2019 GitHub, Inc.
