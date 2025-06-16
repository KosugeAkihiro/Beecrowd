#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    double a,b,c;
    cin >> a >> b >> c;
    a = a*2;
    b = b*3;
    c = c*5;
    cout << "MEDIA = " << fixed << setprecision(1) << (a+b+c)/10 << "\n";
    
    return 0;
}