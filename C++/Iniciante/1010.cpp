#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    int p1, p2, n1, n2;
    float v1, v2, total;

    cin >> p1 >> n1 >> v1;
    cin >> p2 >> n2 >> v2;
    
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << n1*v1 + n2*v2 << "\n";
    
    return 0;
}