<<<<<<< HEAD
#include <iostream> 
#include <stack>
#include <string>
using namespace std; 

// Write a C++ program that creates a stack, pushes some values onto it, and prints the stack.
// Example Input: Stack {10, 20, 30}
// Output: Top of stack: 30
/*
int main() {
    stack<int> my_stack; 
    int n;

    cout << "How many values do you want to add to your stack?: ";
    cin >> n;

    cout << "What values do you wantto add to your stack?: ";
    for(int i = 0; i < n; i++){
        int value; 
        cin >> value; 
        my_stack.push(value);
    }

    cout << "The top of the stack: " << my_stack.top() << endl;
}
*/

// Write a C++ program that pops the top element from the stack and prints the updated stack.
// Example Input: Stack {10, 20, 30}, Pop once
// Output: Top of stack after pop: 20

/*
int main(){
    stack<int> my_stack; 
    int n;

    cout << "How many values do you want to add to your stack?: ";
    cin >> n;

    cout << "What values do you wantto add to your stack?: ";
    for(int i = 0; i < n; i++){
        int value; 
        cin >> value; 
        my_stack.push(value);
    }

    cout << "do you want to remove the top element? (y/n)"; 
    string answer; 
    cin >> answer;
    if(answer == "y"){
        my_stack.pop();
        cout << "Top of the stack after pop: " << my_stack.top() << endl;
    } else {
        cout << "TOp of the stack: " << my_stack.top() << endl;
    }
    return 0;
}
*/

// Write a C++ program that checks whether a stack is empty and prints the result.
// Example Input: Stack {5, 10, 15}
// Output: Stack is not empty
/*
int main() {
    stack<int> my_stack;
    int n;
    cout << "how many values do you want t oadd to your stack?: ";
    cin >> n;

    cout << "What values do you wantto add?: ";
    for(int i = 0; i < n; i++){
        int value; 
        cin >> value;
        my_stack.push(value);
    }

    if(my_stack.empty()){
        cout << "YOUR STACK IS EMPTY" << endl;
    } else {
        cout << "YOUT STACK IS NOT EMPTY" << endl;
    }
}
*/

// Write a C++ program that reverses a sequence of integers using a stack.
// Example Input: Sequence {1, 2, 3, 4, 5}
// Output: Reversed Sequence: 5 4 3 2 1
/*
int main(){
    stack<int> my_stack;
    int n;

    cout << "how many values do you want to add?: ";
    cin >> n;

    cout << "enter the values you want to add to your stack: ";
    for(int i = 0; i < n; i++){
        int value; 
        cin >> value;
        my_stack.push(value);
    }

    cout << "reverse your stack? (y/n): ";
    string answer; 
    cin >> answer; 

    if(answer == "y") {
        stack<int> temp_stack;

        while(!my_stack.empty()){
            temp_stack.push(my_stack.top());
            my_stack.pop();
        }

        cout << "reversed stakc: ";
        while(!temp_stack.empty()){
            cout << temp_stack.top() << " ";
            temp_stack.pop();
        }
        cout << endl;
    } 
    else {
        cout << "original stack: ";
        while(!my_stack.empty()){
            cout << my_stack.top() << " "; 
            my_stack.pop();
        }
        cout << endl;
    }
    return 0;

}
*/

// Write a C++ program that counts and prints the number of elements in a stack.
// Example Input: Stack {1, 2, 3, 4, 5}
// Output: Number of elements in stack: 5
/*
int main(){
    stack<int> my_stack; 
    int counter = 0;

    for(int i = 6; i > 1; i--){
        my_stack.push(i);
    }

    stack<int> temp_stack = my_stack;

    while(!temp_stack.empty()){
        temp_stack.pop();
        counter++;
    }

    cout << "num of elemebts in stack: " << counter << endl;
    return 0;
}
*/
=======
#include <iostream> 
#include <stack>
#include <string>
using namespace std; 

// Write a C++ program that creates a stack, pushes some values onto it, and prints the stack.
// Example Input: Stack {10, 20, 30}
// Output: Top of stack: 30
/*
int main() {
    stack<int> my_stack; 
    int n;

    cout << "How many values do you want to add to your stack?: ";
    cin >> n;

    cout << "What values do you wantto add to your stack?: ";
    for(int i = 0; i < n; i++){
        int value; 
        cin >> value; 
        my_stack.push(value);
    }

    cout << "The top of the stack: " << my_stack.top() << endl;
}
*/

// Write a C++ program that pops the top element from the stack and prints the updated stack.
// Example Input: Stack {10, 20, 30}, Pop once
// Output: Top of stack after pop: 20

/*
int main(){
    stack<int> my_stack; 
    int n;

    cout << "How many values do you want to add to your stack?: ";
    cin >> n;

    cout << "What values do you wantto add to your stack?: ";
    for(int i = 0; i < n; i++){
        int value; 
        cin >> value; 
        my_stack.push(value);
    }

    cout << "do you want to remove the top element? (y/n)"; 
    string answer; 
    cin >> answer;
    if(answer == "y"){
        my_stack.pop();
        cout << "Top of the stack after pop: " << my_stack.top() << endl;
    } else {
        cout << "TOp of the stack: " << my_stack.top() << endl;
    }
    return 0;
}
*/

// Write a C++ program that checks whether a stack is empty and prints the result.
// Example Input: Stack {5, 10, 15}
// Output: Stack is not empty
/*
int main() {
    stack<int> my_stack;
    int n;
    cout << "how many values do you want t oadd to your stack?: ";
    cin >> n;

    cout << "What values do you wantto add?: ";
    for(int i = 0; i < n; i++){
        int value; 
        cin >> value;
        my_stack.push(value);
    }

    if(my_stack.empty()){
        cout << "YOUR STACK IS EMPTY" << endl;
    } else {
        cout << "YOUT STACK IS NOT EMPTY" << endl;
    }
}
*/

// Write a C++ program that reverses a sequence of integers using a stack.
// Example Input: Sequence {1, 2, 3, 4, 5}
// Output: Reversed Sequence: 5 4 3 2 1

int main(){
    stack<int> my_stack;
    int n;
    cout << "how many values do you want t oadd to your stack?: ";
    cin >> n;

    cout << "What values do you wantto add?: ";
    for(int i = 0; i < n; i++){
        int value; 
        cin >> value;
        my_stack.push(value);
    }

    cout << "Reverse your stack? (y/n): ";
    string answer; 
    cin >> answer; 

    if(answer == "y"){

        stack<int> temp_stack;

        while(!temp_stack.empty()){
            int temp_value = my_stack.top();
            my_stack.pop();
            temp_stack.push(temp_value);
        }

        while(!temp_stack.empty()){
            cout << temp_stack.top() << " ";
            temp_stack.pop();

        }
    } else {
        while(!my_stack.empty()){
            cout << my_stack.top() << " "; 
            my_stack.pop();
        }
    }
}
>>>>>>> a86b2260a1eae40b552a25214446fa8e0b249947
