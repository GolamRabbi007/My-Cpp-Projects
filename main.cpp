#include <iostream>
using namespace std;

int main()
{
	double euros{0};
    double usd_per_eur{1.19};
    double dollars{0};
    
    cout<<"welcome to Euros to Dollar conversion table"<<endl;
    cout<<"Please input the Euros amount: ";
    cin>>euros;
    dollars = usd_per_eur * euros;
    cout<<"Your converted dollar amount is: "<<"$ "<<dollars;
    
    return 0;
}
