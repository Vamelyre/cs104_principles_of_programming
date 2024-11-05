#include <iostream>
using namespace std;

// N1
// Write a C++ program that takes an array of integers as input and finds the maximum element in the array.
// Example Input: {3, 1, 5, 7, 2}
// Output: 7
    
/* 
    int main() {
        int n; 
        cout << "The number of elements in the array: " << endl;
        cin >> n;

        int array[n];
        cout << "Elents of the array:";
        for(int i = 0; i < n; i++) { //makes a user-input array with a loop
            cin >> array[i];
            }
        
        int storing = array[0];

        for (int i = 0; i < n; i++){
            if (array[i] > storing) {
            storing = array[i];
            }
        }
        cout << storing << endl;
    }
*/

//N2
// Write a C++ program that counts how many even and odd numbers are in a given array of integers.
// Example Input: {1, 2, 3, 4, 5, 6, 7}
// Output: Even numbers: 3, Odd numbers: 4

/*
    int main() {
        int n; 
        cout << "The number of elements in the array: " << endl;
        cin >> n;

        int array[n];
        cout << "Elents of the array:";
        for(int i = 0; i < n; i++) { 
            cin >> array[i];
        };

        int even = 0;
        int odd = 0;

        for(int i = 0; i < n; i++) {
            if ((array[i] % 2) == 0){
                even++;
            } else {
                odd++;
            }
        }

        cout << "even: " << even << endl;
        cout << "odd: " << odd << endl;
}
*/

//N3
// Write a C++ program that reverses the given array of integers without using built-in functions.
// Example Input: {1, 2, 3, 4, 5}
// Output: {5, 4, 3, 2, 1}

/*
int main() {
    int n; 
    cout << "The number of elements in the array: " << endl;
    cin >> n;

    int array[n];
    cout << "Elents of the array:";
    for(int i = 0; i < n; i++) { 
        cin >> array[i];
    };
    //array[n] 

    int size_of_array = sizeof(array) / sizeof (array[0]);  

    for (int i = 0; i < size_of_array / 2; i++) {
       int placeholder = array[i];
       array[i] = array[size_of_array - i - 1];  
       array[size_of_array - i - 1] = placeholder;
    };

    cout<< "{ ";
    for (int i = 0; i < size_of_array; i++) {
        
        cout << array[i] << " ";
    }
    cout << "}" << endl;

    return 0;
}
*/
    
//N4
// Write a C++ program to find the second largest element in an array.
// Example Input: {1, 3, 4, 2, 7, 5}
// Output: 5

/*
int main(){
    int n; 
    cout << "The number of elements in the array: " << endl;
    cin >> n;

    int array[n];
    cout << "Elents of the array:";
    for(int i = 0; i < n; i++) { 
        cin >> array[i];
    };

    int max = array[0];
    int second_max = -1; // -1 because an array index can't be -1
    // 1 2 3 4 5
    for (int i = 0; i < n; i++){
        if (array[i] > max) {
            second_max = max; 
            max = array[i];
        } else if (array[i] > second_max && array[i] != max) {
            second_max = array[i];
        }
    }

    if (second_max == -1){
        cout << "second largest element oesn't exist." << endl;
    } else {
        cout << "second largest: " << second_max << endl;
    }
    

    return 0;

}
*/

//N5
// Write a C++ program that checks whether a given array is sorted in ascending order.
// Example Input: {1, 2, 3, 4, 5}
// Output: Array is sorted

/*
int main() {
    int arr[3] = {1, 2, 5};

    int size_arr = sizeof(arr) / sizeof(arr[0]);
    
    bool answer = true;

    for (int i = 0; i < size_arr - 1; i++){
        if (arr[i] > arr[i + 1]){ 
            break;
        }
    }

    if (answer) {
        cout << "sorted" << endl;
    } else {
        cout << "not sorted" << endl;
    }
    return 0;
}
*/
