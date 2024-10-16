#include <iostream>
#include <vector>
#include <utility> 

using namespace std;

// Write a C++ program that reverses the order of elements in a vector.
// Example Input: {1, 2, 3, 4, 5}
// Output: {5, 4, 3, 2, 1}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    for (int i = numbers.size(); i >= 1 ; i--) {
        numbers.push_back(i);
    }

    cout << "Output: {";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i];
        if (i < numbers.size() - 1) {
            cout << ", "; 
        }
    }
    cout << "}" << endl;

    return 0;
}

//  N4
// Write a C++ program that checks whether a vector is sorted in ascending order.
// Example Input: {1, 2, 3, 4, 5}
// Output: The vector is sorted in ascending order.

/*
int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    for(int i = 0; i < numbers.size(); i++) {
        if(numbers[i] < numbers[i - 1]) {
            cout << "The vector is not sorted in an ascending order" << endl;
        } else {
            cout << "The vector is sorted in an ascending order" << endl;
        }
    }
    return 0;
}
*/
 
//  N5
// Write a C++ program that removes all even numbers from a vector and prints the result.
// Example Input: {1, 2, 3, 4, 5, 6}
// Output: {1, 3, 5}

/*
int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6};
    
    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i] % 2 == 0){
            for(int j = i; j < numbers.size() - 1; j++){
                numbers[j] = numbers[j + 1]; // shift the elements to the left 
            }   
            numbers.pop_back(); // prevent duplicates 
            i--; 
        }
    }

    cout << "output: {";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i];
        if (i < numbers.size() - 1) {
            cout << ", "; 
        }
    }
    cout << "}" << endl;
}
*/