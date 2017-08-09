#include <iostream>
#include <math.h>
#include <iomanip>
#include <vector>


using namespace std;


float cdf(float x, float mu, float sigma){
    return 0.5*(1 + erf((x-mu)/(sigma*pow(2,0.5))));
}

int main() {
    float q1, q2, mu, std;
    vector<float> a(2);
    for(int i= 0; i<2; i++){
        cin>>a[i];
    }
    mu = a[0];
    std = a[1];
    cin>> q1;
    cin>> q2;
    cout<<std::fixed<< std::setprecision(2) <<100 - 100*cdf(q1, mu, std)<<endl;
    cout<<std::fixed<< std::setprecision(2) <<100 - 100*cdf(q2, mu, std)<<endl;
    cout<<std::fixed<< std::setprecision(2) <<100*cdf(q2, mu, std)<<endl;
   return 0;
}
