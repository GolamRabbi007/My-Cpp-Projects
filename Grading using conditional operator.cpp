#include <iostream>
using namespace std;

int main()
{
	double scores{};
    cout<<"Welcome to Score to Grade conversion module"<<endl;
    cout<<endl;
    cout<<"Please type in your score: "<<endl;
    cin>>scores;
    cout<<"You have got "<<((scores)>=80 && (scores)<=100 ? "A" : "F")<<endl; 
                                                
	return 0;
}
