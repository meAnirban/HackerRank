#include <cmath>
#include <cstdio>
#include <vector>
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


double getstd(const vector<int> &array){
    double mean, sum = 0.0, sum1 = 0.0;
    double st_d;
    for(int i = 0; i<array.size(); i++){
        sum += array[i];
    }
    mean = sum/array.size();

    for(int j=0; j<array.size(); j++){
        sum1 += pow(array[j] - mean, 2);
    }
    st_d = sqrt(sum1/array.size());
    return st_d;
}

int main() {
    int size;
    cin >> size;
    vector<int> ar(size);
    for (int i = 0;i < size;i++)
        cin >> ar[i];

    sort(ar.begin(), ar.end());

    cout << std::fixed << std::setprecision(1) << getstd(ar) << endl;

    return 0;
}
