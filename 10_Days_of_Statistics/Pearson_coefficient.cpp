#include <iostream>
#include <math.h>
#include <iomanip>
#include <vector>


using namespace std;

float mu(const vector<float> &a, int n){
    float sum = 0;
    for(int i = 0; i<n; i++){
        sum += a[i];
    }
    return sum/n;
}

float std_dev(const vector<float> &a, int n, float mu){
    float sum1 = 0;
    for(int i=0; i<n; i++){
        sum1 += pow((a[i] - mu), 2);
    }
    return pow((sum1/n), 0.5);
}

float corr(int n, const vector<float> &x, const vector<float> &y){
    float mu_x = mu(x, n);
    float mu_y = mu(y, n);
    float sum = 0;
    for(int i = 0; i<n; i++){
        sum += (x[i] - mu_x)*(y[i] - mu_y);
    }
    return sum/(n*std_dev(x, n, mu_x)*std_dev(y, n, mu_y));
}

int main() {
    int n, i;
    cin >> n;
    vector<float> x(n);
    for(i = 0; i<n; i++){
        cin >> x[i];
    }
    vector<float> y(n);
    for(i = 0; i<n; i++){
        cin >> y[i];
    }

    cout << std::fixed << std::setprecision(3) << corr(n, x, y) << endl;

   return 0;
}
