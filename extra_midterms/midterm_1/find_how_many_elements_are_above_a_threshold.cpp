// Declare an inreger array with size of 10 of your choice (must be >= 10)
// Let the user enter their values from the console.
// Declare an integer variable for a threshold
// Let the user enter the threshold value
// Find how many elements are larger than the threshold value. 
// Input : 1, 5, -5, 10, 25, 100. 
// Threshold: 10.
// Output: 25, 100. 

#include <iostream> 
#include <array>
using namespace std; 

int main(){
    int array[10];
    cout << "Enter at least 10 numbers for your array";
    for(int i = 0; i < 10; i++){
        cin >> array[i];
    };

    int threshold; 
    cout << "Pick a threshold: ";
    cin >> threshold;

    int count = 0;
    for(int i = 0; i < 10; i++){
        if(array[i] > threshold){
            cout << array[i] << " ";
            
        }
    }
    cout << count << " elements." << endl;
    return 0;
}
