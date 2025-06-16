#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    double a,b,med;
    cin >> a;
    cin >> b;
    a = a*3.5;
    b = b*7.5;
    med = (a+b)/11;
    cout << "MEDIA = " << fixed << setprecision(5) << med << "\n";
 
    return 0;
}