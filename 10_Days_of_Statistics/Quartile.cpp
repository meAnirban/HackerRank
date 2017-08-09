#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int q1, q2, q3, size;
    cin >> size;
    vector<int> ar(size);
    for (int i = 0;i < size;i++)
        cin >> ar[i];

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
    cout << q1 << endl;
    cout << q2 << endl;
    cout << q3 << endl;
    return 0;
}
