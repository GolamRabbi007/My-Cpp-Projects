#include <iostream>
#include <vector>

//int main()
//{
//	using namespace std;
//    vector <double> input_list{};  //I am creating the vector input list here
//    double scores_to_add {};
//    char option{};
//    double total {};
//    do
//    {   
//    cout<<"choose the following option-"<<endl;
//    cout<<"P - Print numbers"<<endl;
//    cout<<"A - Add a number"<<endl;
//    cout<<"M - Display the mean of a number"<<endl;
//    cout<<"S - Display the smallest number"<<endl;
//    cout<<"L - Display the largest number"<<endl;
//    cout<<"Q - Quit"<<endl;
//    cin>>option;
// 
//        if (option == 'a' || option == 'A')
//            
//                {
//                    cout<<"Add a number"<<endl;
//                    cin>> scores_to_add;
//                    input_list.push_back(scores_to_add);
//                }
//            
//        else if (option == 'p' || option == 'P')
//            
//                     // nested if used if input list has no value in it then it will show []
//                {
//                    if (input_list.size()==0)
//                    {cout<<" the list is empty "<<endl;}
//                    else 
//                    {cout<<"[";
//                          for (auto list: input_list)
//                          {cout<<list<<" ";}
//                          cout<<"]"<<endl;
//                    }
//                }
//        else if (option == 'm' || option == 'M')
//            {
//                if (input_list.size()==0)
//                    {cout<<" the list is empty "<<endl;}
//                    else 
//                    {
//                        for (auto list2: input_list) //initiating list2 for input list
//                           total += list2; 
//                          {cout<<"Mean is "<<total/input_list.size()<<endl;}
//                    }
//            }
//            
//        else if (option == 's' || option == 'S')
//        {
//            if (input_list.size()==0)
//                    {cout<<" the list is empty "<<endl;}
//            else {
//                  double smallest {input_list.at(0)};
//                  for (auto list : input_list)
//                      {if (list<smallest)
//                          {list = smallest;
//                      cout<<smallest;}}
//                 }
//                
//            }
//                
//            }
//        }
//            
//    } //error found!!
//    while (option !='q' && option !='Q');
//    
//	return 0;
//}

int main ()
{
    using namespace std;
    vector <double> input_list {};
    char option {};
    do {
        cout<<"Select the following: "<<endl;
        cout<<"P - Print numbers"<<endl;
        cout<<"A - Add a number"<<endl;
        cout<<"M - Display the mean of a number"<<endl;
        cout<<"S - Display the smallest number"<<endl;
        cout<<"L - Display the largest number"<<endl;
        cout<<"Q - Quit"<<endl;
        cin>>option;
        
        if (option=='p' or option=='P') //if option is p, we will print the numbers in the vector, however
                                        //if vector has no num in it, we need it to be empty.
        {if (input_list.size()==0){cout<<"Sorry no input made in the list. first add some numbers in the list"<<endl;}
         else {cout<<"{";
               for (auto inputs : input_list) 
               {cout<<inputs<<" ";}
               cout<<"}";
              }
                 
        }
    
    
    else if (option == 'a' || option == 'A')
    {
     cout<<"Please input your data"<<endl;
     double inputs_for_vector {};
     cin>>inputs_for_vector;
     input_list.push_back(inputs_for_vector);
     cout<<"your inputs are {";
     for (auto inputs : input_list)
     cout<< inputs << " ";
     cout<<"}"<<endl;
    }
    else if (option == 'm' || option == 'M')
      {if (input_list.size()==0)
        {
        cout<<"Sorry no input made in the list. first add some numbers in the list"<<endl;
        }
        else
        {
        cout<<"Mean is:"; 
        double total {};
        for (auto inputs : input_list)
        total += inputs ; 
        cout<< total /input_list.size()<<endl;
        }
       }
    else if (option == 's' || option == 'S')
       {if (input_list.size()==0) 
           {cout<<"Sorry no input made in the list. first add some numbers in the list"<<endl;}
        else 
            {
             cout<<"Smallest Number is: ";
             double smallest {input_list.at(0)};
             for (auto inputs : input_list )
             if (inputs<smallest)
                smallest = inputs;
                cout<<smallest<<endl;
            } 
       }
    else if (option == 'l' || option == 'L')
       {if (input_list.size()==0) 
           {cout<<"Sorry no input made in the list. first add some numbers in the list"<<endl;}
        else 
            {
             cout<<"Largest Number is: ";
             double largest {input_list.at(0)};
             for (auto inputs : input_list )
             if (inputs>largest)
                largest = inputs;
                cout<<largest<<endl;
            }
       }
    
       }
    
    while (option !='q' && option !='Q'); 
    return 0;
}
