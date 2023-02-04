#include <iostream>
using namespace std;

int main()
//{
//    char selection {};
//    do 
//    {
//    cout<<"select from 1 to 5: "<<endl;
//    cout<<"1-do this... "<<endl;
//    cout<<"2-do that... "<<endl;
//    cout<<"3-do somrthing else... "<<endl;
//    cout<<"4-quit... "<<endl;
//    cin>>selection;
//    if (selection == '1')
//    {cout<<"you chose do this"<<endl;}
//    else if (selection == '2')
//    {cout<<"you chose do that"<<endl;}
//    else if (selection == '3')
//    {cout<<"you chose do something else"<<endl;}
//    else if (selection == 'q' || selection =='Q')
//    {cout<<"goodbye"<<endl;}
//    else {cout<<"Unknown option.. Please try again"<<endl;}
//    } 
//    while (selection != 'q' && selection != 'Q');
//    
//    cout<<"Thanks"<<endl;;
//	return 0;
//}




{
    char input {};
    do 
    {
        cout<<"choose the following options"<<endl;
        cout<<"1-Sum"<<endl;
        cout<<"2-Subtraction"<<endl;
        cout<<"3-Multiplication"<<endl;
        cout<<"1-Division"<<endl;
        cout<<"N-quit"<<endl;
        cin>>input;
        if (input == '1')
            {cout<<"You chose sum:" <<endl;}
        else if (input == '2')
            {cout<<"You chose subtraction:" <<endl;}
        else if (input == '3')
            {cout<<"You chose Multiplication: " <<endl;}
        else if (input == '4')
            {cout<<"You chose Division: " <<endl;}
        else if (input == 'n' || input =='N')
            {cout<<"goodbye" <<endl;}
        else {cout<<"Unknown Option"<<endl;}
    }
    while (input !='n' && input !='N' );
    cout<<"Thanks"<<endl;
        return 0;
}
