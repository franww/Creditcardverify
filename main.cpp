#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

bool credit_card_verify(vector<int> numbers) {
    reverse(numbers.begin(), numbers.end());

    for (int c = 0; c < numbers.size(); c++) {
        if (c % 2 != 0) {
            numbers[c] = (numbers[c] * 2);
            if (numbers[c] > 9) {
                numbers[c] -= 9;
            }
        }
    }
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    return (sum % 10 == 0);
}

vector<int> insert_credit_card() {
    string creditNumber;
    vector<int> creditNumbers;

    while (true) {
        creditNumbers.clear();
        cout << "Send your credit card number [Without spaces]: ";
        cin >> creditNumber;

        if (creditNumber.size() != 16) {
            cout << "Invalid credit card number. Please enter a 16-digit number." << endl;
            continue;
        }

        bool isValid = true;
        for (size_t c = 0; c < creditNumber.size(); c++) {
            if (!isdigit(creditNumber[c])) {
                cout << "Invalid input. Only numeric characters are allowed." << endl;
                isValid = false;
                break;
            } else {
                creditNumbers.push_back(creditNumber[c] - '0');
            }
        }

        if (isValid) {
            cout << "Credit card number accepted!" << endl;
            return creditNumbers;
        } else {
            cout << "Please try again." << endl;
        }
    }
}

int main() {
    vector<int> creditCard = insert_credit_card();

    if (credit_card_verify(creditCard)) {
        cout << "Credit card numbers (digits): ";
        for (int num : creditCard) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "Invalid Credit Card" << endl;
    }

    return 0;
}
