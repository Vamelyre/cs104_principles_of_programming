#include <iostream>
#include <set> 
#include <vector>
using namespace std;

// Write a C++ program that checks if a given value exists in a set.
// Example Input: Set {1, 2, 3, 4, 5}, Check for 3
// Output: 3 exists in the set
/*
int main() {
    set<int> set = {1, 2, 3, 4, 5};

    int checking_value;

    cout << "value you want to check: " << endl;
    cin >> checking_value; 

    int set_size = sizeof(set) / sizeof(set[0]);

    bool exists = false;

    for(int i = 0; i < set_size; i++) {
        if(set[i] == checking_value) {
            exists = true;
            break;
        }
    }

    if(exists) {
        cout << "your value exusts" << endl;
    } else {
        cout << "value doesn't exist." << endl;
    }
}
*/

// Write a C++ program that removes a specified value from a set and prints the updated set.
// Example Input: Set {10, 20, 30, 40}, Remove 30
// Output: 10 20 40

/*
int main() {
    set<int> set = {10, 20, 30, 40};
    int remove_value = 30; 

    set.erase(remove_value);

    vector<int> vec(set.begin(), set.end());

    for(int i = 0 ; i < vec.size(); i++){
        cout << vec[i] << endl;
    }
    return 0;

}
*/

// Write a C++ program that finds and prints the size of a set after inserting elements.
// Example Input: {2, 4, 6, 8, 10}
// Output: Size of the set: 5

/*
int main() {
    set<int> mySet; 

    int set_count; 
    int set_elements; 

    cout << "enter how many elements you want to add to the set: " << endl;
    cin >> set_count; 

    cout << "enter the elements: " << endl;

    for (int i = 0; i < set_count; i++) {
        cin >> set_elements; 
        mySet.insert(set_elements); 
    }

    cout << "Size of the set: " << mySet.size() << endl; 

    return 0;
}
*/
