#include <iostream>
#include <utility>
#include <vector>
using namespace std;

/*  // Write a program that creates a pair of two integers, stores them, and prints both elements.

    int main() {
    pair <int, int> pair_name;

    cout << "Enter the first number:";
    cin >> pair_name.first;

    cout << "Enter the second number:";
    cin >> pair_name.second;

    cout << "You entered the pair: (" << pair_name.fist << ", " << pair_name.second << ")" << endl;
    return 0;
}*/

//N2
//Write a C++ program that swaps the values of two pairs and prints the result
/*int main() {
    pair <int, int> pair1, pair2;

    cout << "Enter the values of the first pair: ";
    cin >> pair1.first >> pair1.second;

    cout << "Enter the values of the second pair: ";
    cin >> pair2.first >> pair2.second;

    cout << "\nThe orginial pairs: " << endl; // \n displays the next line on a new line
    cout << "(" << pair1.first << ", " << pair1.second << ")" << endl;
    cout << "(" << pair2.first << ", " << pair2.second << ")" << endl;

    swap(pair1, pair2); //swaps the pairs

    cout << "\nThe swapped pairs" << endl; 
    cout << "(" << pair1.first << ", " << pair1.second << ")" << endl;
    cout << "(" << pair2.first << ", " << pair2.second << ")" << endl;

    return 0;
}*/

/* N5
Write program that counts how many times a specific pair appears in an array of pairs.
    Example Input: Array of pairs: [(1, 2), (3, 4), (1, 2), (5, 6)], Search pair: (1, 2)
    Output: The pair (1, 2) appears 2 times.
*/


    int main() {
    vector<pair<int, int>> array_of_pairs = {
        {1, 2},
        {3, 4},
        {1, 2},
        {5, 6}
    };

    pair<int, int> search_pair; 

    cout << "What pair are you looking for?: " << endl;
    cin >> search_pair.first >> search_pair.second;

    int num = 0;

    for ( int i = 0; i < array_of_pairs.size(); i++) { 
        if (array_of_pairs[i] == search_pair) { 
            num++;
        }
    } 

    cout << "Your pair apears " << num << " times." << endl;

}
