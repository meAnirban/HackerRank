#include <iostream>
#include <math.h>
#include <iomanip>
#include <vector>
#include <list>


using namespace std;

double mu(const vector<double> &a, int n){
    double sum = 0;
    for(int i = 0; i<n; i++){
        sum += a[i];
    }
    return sum/n;
}

double std_dev(const vector<double> &a, int n, double mu){
    double sum1 = 0;
    for(int i=0; i<n; i++){
        sum1 += pow((a[i] - mu), 2);
    }
    return pow((sum1/n), 0.5);
}



int main() {
    int n = 5, i;
    double b, a;
    double mu_x, mu_y, std_x, std_y, rho = 0;
    vector<double> x(n);
    vector<double> y(n);
    for(i = 0; i<n; i++){
        cin >> x[i];
        cin >> y[i];
    }
    mu_x = mu(x, n);
    mu_y = mu(y, n);
    std_x = std_dev(x, n, mu_x);
    std_y = std_dev(y, n, mu_y);

    for(i = 0; i<n; i++){
        rho += (x[i] - mu_x)*(y[i] - mu_y);
    }
    rho = rho/(n*std_x*std_y);

    b = rho*(std_y/std_x);
    a = mu_y - (b*mu_y);


    cout << std::fixed << std::setprecision(3) << a + b*80 << endl;

   return 0;
}
