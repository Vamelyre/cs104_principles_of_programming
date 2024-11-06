// Let's image we have a factory which produces items and we stick a sticker with a barcode on it.
// The barcode should have the following structure "XYZ123abc". 
// The rules: 1. it must start with some 3-letter company prefix like XYZ (this will be specified by the user)
//            2. After the prefix it should have exactly 6 characters. 
// Create a string of an array with 5 elements, let the user enter those string values from the console. 
// Let the user enter the 3-letter company prefix. 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string prefix; 
    int barcode_num;
    string barcode_suffix;

    cout << "enter a 3-letter company prefix for the barcode: "; 
    while(true){
        cin >> prefix;
        if(prefix.length() == 3){
            break;
        } else {
            cout << "please make sure the prefix is exactly 3 letters: ";
        }
    }

    string barcode_array[5];

    cout << "etner 5 barcode numbers without the prefix: " << endl;
    for(int i = 0; i < 5; i++) {
        while(true) {
            cin >> barcode_num;
            if(barcode_num >= 100 && barcode_num <= 999) {
                break;
            } else {
                cout << "please make sure to enter a 3-digit number: ";
            }
        }

        cout << "Enter 3-letter suffix for barcode: ";
        while(true) {
            cin >> barcode_suffix;
            if(barcode_suffix.length() == 3) {
                break;
            } else {
                cout << "please make sure the suffix is exactly 3 letters: ";
            }
        }

        barcode_array[i] = prefix + to_string(barcode_num) + barcode_suffix;
    }

    cout << "barcodes:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << barcode_array[i] << endl;
    }
    return 0;
}
