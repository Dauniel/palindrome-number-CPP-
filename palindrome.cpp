# include <iostream>
using namespace std;

int main () {

int number, rnumber = 0, remainder, test;
cin >> number;

while (number != 0) {
    remainder = number % 10;
    rnumber = rnumber * 10 + remainder;
    number /= 10;
}

cout << rnumber << "\n";

if (rnumber == number)
cout << "number is palindrome\n";

else

cout << "number is not palindrome\n";

}