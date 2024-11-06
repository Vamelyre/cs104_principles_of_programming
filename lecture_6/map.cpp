#include <iostream> 
#include <map>
#include <string>
using namespace std;

// Write a C++ program that creates a map (key-value pairs), inserts values, and prints the map.
// Example Input: Map {1: "apple", 2: "banana"}
// Output: 1 -> apple, 2 -> banana

/*
int main() {
    map<int, string> map; 
    int n; 

    int key;
    string value;

    cout << "enter how many key-value pairs you want to create: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        
        cout << "enter the key:";
        cin >> key;

        cout << "Enter the value ofr hte key: ";
        cin >> value;

        map[key] = value;
    }

    for(const auto& x : map ){
        cout << "key: " << x.first << "value: " << x.second << endl;
    }
    return 0;
}
*/

// Write a C++ program that takes a key and finds the corresponding value in a map.
// Example Input: Map {1: "apple", 2: "banana"}, Search key 1
// Output: apple

/*
int main() {
    map<int, string> fruit_map = {
        {1, "orang"},
        {2, "banan"}
    };

    int search_key;
    cout << "enter a key to search for: ";
    cin >> search_key;

    auto n = fruit_map.find(search_key);

    for(const auto & x : fruit_map){
        cout << "key: " << x.first << "value: " << x.second << endl;
    }
    return 0;
}
*/

// Write a C++ program that updates the value of an existing key in a map.
// Example Input: Map {1: "apple", 2: "banana"}, Update key 1 to orange
// Output: 1 -> orange, 2 -> banana

/*
int main() {
    map<int, string> my_map = {
        {1, "apple"},
        {2, "banana"}
    };

    int updated_value_key;
    string updated_value;

    cout << "What value do you want to update (enter the key): " << endl;
    cin >> updated_value_key; 

    cout << "What's the value for that key: ";
    cin >> updated_value;

    my_map[updated_value_key] = updated_value;
    
    for(const auto& x : my_map){
        cout << "key: " << x.first << "valye: " << x.second << endl;
    }

    return 0;
}
*/

// Write a C++ program that removes a key-value pair from the map and prints the updated map.
// Example Input: Map {1: "apple", 2: "banana"}, Remove key 1
// Output: 2 -> banana

/*
int main() {
    map<int, string> my_map = {
        {1, "orange"}, 
        {2, "pineapple"}, 
        {3, "hi"}
    };

    for(const auto& x : my_map){
        cout << "key: " << x.first << "value: " << x.second << endl;
    }

    int delete_key;
    cout << "What key-value do you want to delete? Enter the key: "; 

    cin >> delete_key;

    my_map.erase(delete_key);

    for(const auto& x : my_map){
        cout << "key: " << x.first << "value: " << x.second << endl;
    }
    
}
*/

// Write a C++ program that finds and prints the size of a map after adding some key-value pairs.
// Example Input: {1: "apple", 2: "banana", 3: "cherry"}
// Output: Size of the map: 3

/*
int main(){
    map<int, string> my_map = {
        {1, "orange"}, 
        {2, "pineapple"}, 
        {3, "hi"}
    };

    for(const auto& x : my_map){
        cout << "key: " << x.first << " " << "value: " << x.second << endl;
    };

    int new_key;
    string new_value;
    
    int n; 

    cout << "how many values do you want to add?: ";
    cin >> n;

    cout << "Enter the key-value pair you want to add: ";

    for(int i = 0; i < n; i++){
        cin >> new_key >> new_value;
        my_map.insert({new_key, new_value});
    };

    cout << "the size of the map: " << my_map.size() << endl;

}
*/
