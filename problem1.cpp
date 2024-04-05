#include <iostream>
#include <iomanip>

using namespace std;

double calculateValue(int n){
    if (n == 1){
        return 4.0;
    }
    double previousValue = calculateValue(n - 1);
    double currentValue = (previousValue / 2.0) - 1.0;    
    return currentValue;
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<fixed<<setprecision(10);
    cout<<"a"<<n<<" = "<<calculateValue(n)<<endl;
    return 0;
}
