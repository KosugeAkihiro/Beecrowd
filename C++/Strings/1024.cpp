#include <iostream>
#include <cstring>
using namespace std;

int main(){
    
    int qtd;
    char aux;

    cin >> qtd;
    cin.ignore();

    string text[qtd];

    for(int i=0; i<qtd; i++)
        getline(cin, text[i]);
    for(int i=0; i<qtd; i++)
    {
        for(int j=0; j<text[i].size(); j++)
        {
            if((text[i].at(j)>64 && text[i].at(j)<91) || (text[i].at(j)>96 && text[i].at(j)<123))
            {
                text[i].at(j) = text[i].at(j)+3;
            }
        }
        
        for(int j=0;j<text[i].size()/2;j++)
        {
                aux = text[i].at(j);
                text[i].at(j) = text[i].at(text[i].size()-(j+1));
                text[i].at(text[i].size()-(j+1)) = aux;
        }
        
        for(int j=text[i].size()/2; j<text[i].size(); j++)
            text[i].at(j) = text[i].at(j)-1;
    }
    for(int i=0;i<qtd;i++)
        cout << text[i] << "\n";
    
    return 0;
}