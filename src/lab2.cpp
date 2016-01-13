
#include <iostream>

using namespace std;

void odd_or_even (int num)
{
    if (num%2 == 0) //even
        cout << "The value " << num << " is an even number" << endl;
    else //odd
        cout << "The value " << num << " is an odd number" << endl;
}

void spelled_out_numbers (char num1)
{
    if (num1 == zero)
        cout << "0";
    else if (num1 == one)
            cout << "1";
    else if (num1 == two)
        cout << "2";
    else if (num1 == three)
        cout << "3";
    else if (num1 == four)
        cout << "4";
    else
        cout << "Not a number I know";
}

int main() {
 //   odd_or_even(7);
    int age;
    cout << "Enter the age of the recipient:" << endl;
    cin >> age;


    if (age<=0)
    cout << "Error: You're kidding!";
    else if (age>=110)
    cout << "Error: You're kidding!";
        else if (age<12)
        cout << "Next year you will be " << age + 1 << endl;
        else if (age==17)
        cout << "Next year you will be able to vote." << endl;
        else if (age>70)
        cout << "I hope you are enjoying retirement." << endl;
    else
    cout << "I hear you just had a birthday and you are " << age << " years old." << endl;

}


