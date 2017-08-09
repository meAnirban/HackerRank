#include <stdio.h>
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


float cdf(float x, float mu, float sigma){
    return 0.5*(1 + erf((x-mu)/(sigma*pow(2,0.5))));
}

int main() {
    float x, n, mu, std;
    cin>> x;
    cin>> n;
    cin>> mu;
    cin>> std;
    cout<<std::fixed<< std::setprecision(4) <<cdf(x, n*mu, std*pow(n,0.5))<<endl;
   return 0;
}
