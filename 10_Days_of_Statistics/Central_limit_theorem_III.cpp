#include <iostream>
#include <math.h>
#include <iomanip>
#include <vector>


using namespace std;

int main() {
    int n;
    cin >> n;
    float mu, std, p, z;
    cin >> mu;
    cin >> std;
    cin >> p;
    cin >> z;
    cout<<std::fixed<< std::setprecision(2) << mu - z*std/sqrt(n) <<endl;
    cout<<std::fixed<< std::setprecision(2) << mu + z*std/sqrt(n) <<endl;
   return 0;
}
