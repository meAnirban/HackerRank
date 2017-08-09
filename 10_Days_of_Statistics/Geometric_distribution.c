#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

float geo_dist(int n, float p){
    float q = 1-p;
    float f ;
    f = p*pow(q, (n-1));
    return f;
}

int main() {
    int n;
    float p;
    vector<float> a(2);
    for(int i = 0; i<2; i++){
    cin>> a[i];
    }
    cin>> n;
    p = a[0]/a[1];

    cout<< std::fixed << std::setprecision(3) << geo_dist(n, p);
    return 0;
}
