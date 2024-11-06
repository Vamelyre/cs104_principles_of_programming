#include <iostream>
using namespace std;

// Write a C++ function that calculates the factorial of a number. The function should take an integer n 
// and return the factorial of n. The main function should prompt the user for an input and print the result.
// Example Input: 5
// Example Output: 120
/*
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
*/

// Write a C++ function that checks if a given number is prime. The function should take an integer n 
// and return true if the number is prime, and false otherwise. The main function should print whether the number is prime or not.
// Example Input: 7
// Example Output: 7 is a prime number.

/*
bool prime_check(int n) {
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout << "What number do you want to check if it's prime or not?: ";
    cin >> n;

    if(prime_check(n)){
        cout << "your number is prime";
    } else {
        cout << "your number is not prime.";
    }
}
*/
// Write a C++ function that takes three integers as arguments and returns the maximum of the three. 
// The main function should prompt the user to enter three numbers and print the largest one.
// Example Input: 4, 8, 2
// Example Output: The maximum number is 8

/*
int find_max(int a, int b, int c){
    int max = a; 
    if(b > max){
        max = b;
    } 
    if(c > max){
        c = max;
    }
    return max;
}

int main(){
    int first, second, third; 
    cout << "Enter 3 numbers to find which one's the largest: ";
    cin >> first >> second >> third;

    cout << "The largest number is: " << find_max(first, second, third);
    return 0;

}
*/

// Write a C++ function that takes an array and its size as arguments and returns the sum of all the elements in the array.
// The main function should call this function and print the result.
// Example Input: [1, 2, 3, 4, 5]
// Example Output: Sum of the array: 15

/*
int sumArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;
    
    cout << "enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    cout << "Enter " << size << " elemetns of the array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "sum of the array:" << sumArray(arr, size) << endl;
    
    return 0;
}
*/

// Write a C++ function that calculates the power of a number. The function should take two arguments: 
// the base and the exponent. It should return the result of raising the base to the power of the exponent. 
// The main function should prompt the user for the base and exponent and print the result.
// Example Input: 2, 3
// Example Output: 2 raised to the power 3 is 8

int find_power(int base, int index){
    int ans = 1;
    for(int i = 0; i < index; i++){
        ans *= base;
    }
}

int main(){
    int base, index; 

    cout << "enter the base: ";
    cin >> base; 

    cout << "enter the index: ";
    cin >> index; 

    cout << find_power(base, index);    

}







