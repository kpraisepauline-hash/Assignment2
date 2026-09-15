#include <iostream>
using namespace std;
// This program checks the validity of a credit card number using the Luhn algorithm.
// It prompts the user to enter a credit card number and then determines if it is valid or invalid based on the algorithm's criteria.
bool isValid(long long number);
int sumOfDoubleEvenPlace(long long number);
// Returns the sum of the digits in the even places (from right to left) after doubling each digit.
int getDigit(int number);
// Returns the sum of odd-place digits in number.
int sumOfOddPlace(long long number);
// Returns true if the digit d is a prefix for number.
bool prefixMatched(long long number, int d);
// Returns the number of digits in d.
int getSize(long long d);
// Returns the first k digits from number. If the number of digits in number is less than k, return number.
long long getPrefix(long long number, int k);

int main() {
    long long cardNumber;
    // Prompt the user to enter a credit card number and read it into cardNumber
    cout << "Enter a credit card number as an integer: ";
    cin >> cardNumber;

    if (isValid(cardNumber))
        cout << cardNumber << " is valid." << endl;
    else
        cout << cardNumber << " is invalid." << endl;

    return 0;
}
// Returns true if the card number is valid.
bool isValid(long long number) {
    int totalDigits = getSize(number);
    if (totalDigits < 13 || totalDigits > 16) return false;
    if (!prefixMatched(number, 4) && !prefixMatched(number, 5) &&
        !prefixMatched(number, 37) && !prefixMatched(number, 6)) return false;
    return (sumOfDoubleEvenPlace(number) + sumOfOddPlace(number)) % 10 == 0;
}

int sumOfDoubleEvenPlace(long long number) {
    int sum = 0;
    while (number > 0) {
        number /= 10;
        int digit = (number % 10) * 2;
        sum += getDigit(digit);
        number /= 10;
    }
    return sum;
}

int getDigit(int number) {
    if (number < 10) return number;
    return number / 10 + number % 10;
}

int sumOfOddPlace(long long number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 100;
    }
    return sum;
}

bool prefixMatched(long long number, int d) {
    return getPrefix(number, getSize(static_cast<long long>(d))) == d;
}

int getSize(long long d) {
    int size = 0;
    while (d > 0) {
        d /= 10;
        size++;
    }
    return size;
}

long long getPrefix(long long number, int k) {
    int size = getSize(number);
    for (int i = size - k; i > 0; i--) {
        number /= 10;
    }
    return number;
}