#include <iostream>
using namespace std;

int main()
{
    int starting_floor; 
    int last_floor; 

    cout << "What floors would you like to rent? : "; 
    cin >> starting_floor >> last_floor; 
    
    int total_rent = 0; 

    for (int n = starting_floor; n <= last_floor; ++n) { // iterates through every floor from the input and calculates the total rent
        total_rent += 1000 + (n - 2) * 250;
    };

    cout << total_rent << endl;
    return 0;
}
