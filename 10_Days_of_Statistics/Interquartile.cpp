#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int n, size;
    float q1, q2, q3;
    vector<int> ar;
    cin >> n;
    vector<int> x(n);
    for (int i = 0;i < n;i++)
        cin >> x[i];
    vector<int> f(n);
    for (int k = 0;k < n;k++)
        cin >> f[k];

    for(int r = 0; r<f.size(); r++){
        for(int s =0; s<f[r]; s++){
            ar.push_back(x[r]);
        }
    }
    size = ar.size();
    sort(ar.begin(), ar.end());
    if(size%2 == 0){
        q2 = (int) (ar[size/2 - 1] + ar[size/2]) / 2;
        vector<int> l(size/2);
        vector<int> u(size/2);
        for (int j = 0; j < size/2; j++){
            l[j] = ar[j];
            u[j] = ar[size/2 +j];
        }
        if(l.size()%2 == 0){
            q1 = (int)(l[size/4] + l[size/4 - 1])/2;
            q3 = (int)(u[size/4] + u[size/4 - 1])/2;
        }else{
        q1 = l[(l.size() - 1)/2];
        q3 = u[(l.size() - 1)/2];
        }
    }
    else{
        vector<int> l((size-1)/2);
        vector<int> u((size-1)/2);
        for (int j = 0; j < (size-1)/2; j++){
            l[j] = ar[j];
            u[j] = ar[(size+1)/2 +j];
        }
        q2 = (int) ar[(size-1)/2];
        if(l.size()%2 == 0){
            q1 = (int)(l[l.size()/2] + l[l.size()/2 -1])/2;
            q3 = (int)(u[l.size()/2] + u[l.size()/2 -1])/2;
        }else{
            q1 = l[(l.size()-1)/2];
            q3 = u[(l.size()-1)/2];
        }

    }
    cout << std::fixed << std::setprecision(1)<< (q3-q1) << endl;

    return 0;
}
