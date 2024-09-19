#include <iostream>
using namespace std; 

/*Fernando earns $50 per day at a construction site and wants to buy a computer. He can only take 1 day off. 
  How many days must he work to afford the computer? */

int main() {
   int computer_price;
   int daily_wage; 

   cout << "How much does the computer cost?:"; // asking the price of the computer
   cin >> computer_price;

   int days = (computer_price / 50) + 1;

   cout << "Fernando must work for " << days << " days in order to save up for the computer" << endl;
   return 0;
}
