#include <iostream>

using namespace std;
int calculateValue(int n){
    if(n == 1){
        return 3;
    }
    int previousValue=calculateValue(n-1);
    int currentValue=previousValue*previousValue+3;    
    return currentValue;
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int result = calculateValue(n);
    cout<<"f("<<n<<")="<<result<<endl;

    return 0;
}
