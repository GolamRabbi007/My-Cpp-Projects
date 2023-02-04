#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print (int num);
void print (double num);
void print (string text);
void print (vector <string> s);

void print (int num){
    cout<<num<<endl;
}

void print (double num){
    cout<<num<<endl;
}

void print (string text){
    cout<<text<<endl;
}

void print (vector <string> s){
    for (auto v:s)
    cout<<v<<endl;;
}

int main()
{
    vector <string> three_stooges {"Larry, Moe & Curly"};
    print (three_stooges);
	return 0;
}
