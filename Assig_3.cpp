#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n) {
    int result = 0, temp = 1;
    int i = 1;
    while(temp <= n) {
        temp = abs(pow(5, i));
        result = result + abs(n / temp);
        i++;
    }
    return result;
}

void binary_search(int n) {
    // Handle edge cases
    if(n < 0) {
        cout << "Invalid input: negative number" << endl;
        return;
    }
    
    if(n == 0) {
        cout << "1" << endl; // 0! = 1 has 0 trailing zeros
        return;
    }
    
    // Check if it's impossible to have exactly n trailing zeros
    // This happens when n is of the form 5k+1, 5k+2, 5k+3 for certain values
    // A more accurate check: if no factorial can produce exactly n trailing zeros
    
    int low = 5, high = n * 5, mid;
    int result = -1;
    
    while(low <= high) {
        mid = (low + high) / 2;
        int zeros = factorial(mid);
        
        if(zeros == n) {
            result = mid;
            high = mid - 1; // Continue searching for the smallest number
        }
        else if(zeros < n) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    
    if(result == -1) {
        cout << "No number with " << n << " trailing zeros exists" << endl;
    }
    else {
        cout << "Smallest number whose factorial has " << n << " trailing zeros: " << result << endl;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    
    // Input validation
    if(!(cin >> num)) {
        cout << "Invalid input: Please enter a valid integer" << endl;
        return 1;
    }
    
    binary_search(num);
    return 0;
}
