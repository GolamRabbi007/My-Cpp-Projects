#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string s1 {};
    cout<<"Provide input name "<<endl;
    getline(cin,s1);  // Getline function allows to input a full line rather than selecting data till null
    cout<<"s1 = "<<s1<<endl;
    s1 += " is a good hearted person";
    string s2 {};
    s2 = s1 + " and he does as much as he can to help others";
    
    cout<<s2<<endl;
    cout<<s1<<endl;
    cout<<s2.length()<<endl;
//    cout<<s2.find('e')<<endl;
    
    if (s1.length()==s2.length()){
        cout<<" both are same"<<endl;
    }
    else {
        cout<<" both s1 & s2 are not same in length"<<endl;
    }
    
    for (size_t i {}; i<s2.length(); ++i) {
        if (isalpha(s2[i]))
            {
                s2[i]=toupper(s2[i]);
            }
            else{
                s2[i]=s2[i];
            }
    }
    cout<<s2<<endl;
	return 0;
}
