#include <iostream>
#include <cstring>
using namespace std;

int main(){
    
    int qtd, pos;

    cin >> qtd;

    string text;

    for(int i=0; i<qtd; i++)
    {
        cin.ignore();
        getline(cin, text);
        cin >> pos;
        for(int j=0; j<text.size(); j++)
        {
            if(text.at(j)-pos<65)
                text.at(j) = text.at(j) + 26 - pos;
            else text.at(j) = text.at(j) - pos;
        }
        cout << text << "\n";
    }
    
    return 0;
}