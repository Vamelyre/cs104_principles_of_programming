#include <iostream>
#include <cmath>
using namespace std; 

int main()
{
    int length_floor, width_floor;  

    cout << "What's the length of the floor?: ";
    cin >> length_floor; 

    cout << "What's the width of the floor?: "; 
    cin >> width_floor; 

    double tile_area = 4.0; // the area of the tiles used. 4.0 and not 4 to make sure it returns a float when calculating the number of tiles

    double floor_area = (length_floor * width_floor) / 2; // gets the floor area
    double tiles = ceil(floor_area / tile_area); // gets the number of tiles required but rounds up the decimal
    
    cout << "The minimum quantity which will SURELY cover the floor is: " << tiles << endl;
    return 0;
}
