#include <iostream>
#include <string>
using namespace std;

// Write a C++ program that counts how many vowels (a, e, i, o, u) are present in a given string.
// Example Input: "Hello World"
// Output: 3
/*
int main() {
    int vowels = 0;
    string text;
    getline(cin, text);
    
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == 'i' || text[i] == 'e' || text[i] == 'a' || 
            text[i] == 'u' || text[i] == 'o') {  
            vowels++;
        }
    }
    cout << vowels << endl;
}
*/

// Write a C++ program that reverses a given string without using built-in functions.
// Example Input: "Hello"
// Output: "olleH"

/*
int main() {
    string string = "Hello";
    int n = string.length();

    for (int i = 0; i < n / 2; i++) {
        char placeholder = string[i];
        string[i] = string[n - i - 1];
        string[n - i - 1] = placeholder;
    }

    cout << string << endl;
    return 0;
}
*/

// Write a C++ program that checks if a given string is a palindrome (reads the same forwards and backwards).
// Example Input: "madam"
// Output: Yes, it is a palindrome

/*
int main() {
    string string = "Hello";
    int n = string.length();

    bool palindrome = true;

    for(int i = 0; i < n/2; i++){
       if (string[i] != string[n - i - 1]){
            palindrome = false;
            break;
       }
    }

    if (palindrome) {
        cout << "is palindrome" << endl;
    } else {
        cout << "not palindrome" << endl;

    }
}
*/

// Write a C++ program to count the frequency of each character in a string and display the results.
// Example Input: "aabbcc"
// Output: a: 2, b: 2, c: 2

/*
int main() {
    string text;
    cout << "string: ";
    getline(cin, text); 

    const int char_size = 256; 
    int frequency[char_size] = {0}; 

    
    for (int i = 0; i < text.length(); i++) {
        frequency[text[i]]++; 
    }

    cout << "character frequencies:" << endl;

    for (int i = 0; i < char_size; i++) {
        if (frequency[i] > 0) {
            cout << (char)i << ": " << frequency[i] << endl; 
        }
    }
    return 0;
}
*/

// Write a C++ program that removes all whitespaces from a given string.
// Example Input: "H e llo W orld"
// Output: "HelloWorld"

/*
int main() {
    string text;

    cout << "string: ";
    getline(cin, text); 

    string no_whitespace; 

    for (int i = 0; i < text.length(); i++) {
        if (text[i] != " ") { 
            no_whitespace += text[i]; 
        }
    }
    cout << "no whitespaces: \"" << no_whitespace << "\"" << endl;

    return 0;
}
*/
