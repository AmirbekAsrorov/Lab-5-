#include<iostream>
#include<string>

using namespace std;

string getSubstring(const string& str, int i, int j){
    if(i==j){
        return string(1, str[i]);
    }
    return str[i]+getSubstring(str,i+1,j);
}
int main(){
    string input;
    int i,j;
    cout<<"Enter a string:";
    cin>>input;
    cout<<"Enter the starting position(i):";
    cin>>i;
    cout<<"Enter the ending position(j):";
    cin>>j;
    string substring=getSubstring(input,i,j);
    cout<<"Substring from position "<<i<<" to position "<<j<<":"<<substring<<endl;

    return 0;
}
