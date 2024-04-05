#include <iostream>
#include <iomanip>

using namespace std;

double calculateSeriesSum(int n, bool positiveTerm) {
    if (n == 1) {
        if (positiveTerm) {
            return 1.0;
        } else {
            return -0.5;
        }
    }
    double term;
    if(positiveTerm){
        term=calculateSeriesSum(n-1, false)+1.0/n;
    }else{
        term=calculateSeriesSum(n-1, true)-1.0/n;
    }
    return term;
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n; 
    double sum=calculateSeriesSum(n, true);
    cout<<fixed<<setprecision(4);
    cout<<"Sum of the series: "<<sum<<endl;
    
    return 0;
}
