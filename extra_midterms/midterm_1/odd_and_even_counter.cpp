// Declare an integer with size of 10 of your choice (must be >= 10)
// Let the user enter their values from the console.
// Count how many odd and even numbers are in the array and write that information in the console
// input: 10 20 5 7 8 12 277 -97 889 1000
// output: even: 5; odd: 5;

#include <iostream> 
#include <array> 

using namespace std; 

int main(){
    int array[10];

    cout << "Enter the array values: ";
    for(int i = 0; i < 10; i++){
        cin >> array[i];
    };

    int even = 0;
    int odd = 0; 

    for(int i = 0; i < 10; i++){
        if(array[i] % 2 == 0){
            even++;
        } else {
            odd++;
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl; 
}