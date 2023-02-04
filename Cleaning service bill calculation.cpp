/* Frank's carpet cleaning service
Charges $30 per room
Sales Tax Rate 6%
Estimates are valid for 30 days

Prompt the user for the number of rooms they would like to clean
Provide estimates as:

Estimate for carpet cleaning service:
Number of rooms:2
Price per room: $30
Cost: $60
tax: $3.6

============================
 * Pseudocode:
 * Prompt the user for the number of rooms they have.
 * Display the cost
 * take input of the number of rooms
 * Provide the output.
*/

#include <iostream>
using namespace std;

int main()
{

    cout<<"Hello Welcome to Golam Rabbi's Carpet cleaning Service"<<endl;
    cout<<"\nHow many rooms would like to be cleaned?: "<<endl;
    
    int number_of_rooms{0};
    cin>>number_of_rooms;
    
    cout<<"Estimates for carpet cleaning service:\n";
    cout<<"Number of rooms: "<<number_of_rooms<<endl;
    cout<<endl;
    const double price_per_room {40.0};
    const double tax {price_per_room*number_of_rooms*0.06};
    const double total_cost {tax+(price_per_room*number_of_rooms)};
    const double expiry_date {30};
    cout<<"Price per room is $"<<price_per_room<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Cost: $"<<price_per_room*number_of_rooms<<endl;
    cout<<endl;
    cout<<"Sales Tax: 6%"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Tax Expense: $"<<tax<<endl;
    cout<<endl;
    cout<<"Total Expense: "<<total_cost<<endl;
    cout<<"The Estimate is valid for "<<expiry_date<<" days"<<endl;
    
    return 0;
}
