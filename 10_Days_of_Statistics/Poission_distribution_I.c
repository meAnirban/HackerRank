#include <iomanip>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

float fact(float n){
    if(n <= 1.0){
        return 1.0;
    }
    return n*fact(n - 1.0);
}

float pois_dist(float n, float k){
    float e = 2.71828;
    float f = (pow(n, k)*pow(e, (-n)))/fact(k);
    return f;
}

int main() {
    float n, k;
    cin >> n;
    cin >> k;
    cout << std::fixed << std::setprecision(3) << pois_dist(n, k);
    return 0;
}
