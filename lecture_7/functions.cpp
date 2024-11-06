#include <iostream>
using namespace std;

// Write a C++ function that calculates the factorial of a number. The function should take an integer n 
// and return the factorial of n. The main function should prompt the user for an input and print the result.
// Example Input: 5
// Example Output: 120

int find_factorial(int n){
    int ans = 1;
    for(int i = 1; i <=n; i++){
        ans *= i;
    }
    return ans;
}

int main() {
    int n; 
    cout << "enter a number to find its facotrial: ";
    cin >> n;

    cout << find_factorial(n) << endl;
}




