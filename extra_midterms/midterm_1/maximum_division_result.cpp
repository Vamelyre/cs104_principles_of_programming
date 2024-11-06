// Write a program the determines the maximum division result between any two numbers in an array
// Define an integer array with the size of your choie (must be >= 10)
// Input: 3, 7, 1, 8, 5, 10, 2, 6, 4, 9
// Output: 10

#include <iostream> 
#include <array> 
using namespace std; 

int main(){

    int array[10] = {3, 7, 1, 8, 5, 10, 2, 6, 4, 9};
    int max = 0;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            double ans = array[i] / array[j]; // add division by 0 later
            if(ans > max){
                max = ans;
            }
        }
    }

    cout << max << endl;
    return 0;
}
