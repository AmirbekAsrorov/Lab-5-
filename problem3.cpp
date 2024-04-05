#include <iostream>

using namespace std;

int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    int coef1=binomialCoefficient(n-1,k-1);
    int coef2=binomialCoefficient(n-1,k);   
    return coef1+coef2;
}
int main(){
    int n, k;
    cout<<"Enter the values of n and k: ";
    cin>>n>>k;
    int result = binomialCoefficient(n, k);
    cout<<"C("<<n<<", "<<k<<")="<<result<<endl;
    
    return 0;
}
