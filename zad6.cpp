#include <iostream>

using namespace std;

int main() {
    
    int a, b, c, d = 0;
    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;
    cout<<"Podaj c: ";
    cin>>c;
    cout<<"Podaj d: ";
    cin>>d;
    int tab[2][2] = {{a,b},{c,d}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<tab[i][j]<<" "; 
        }
        cout<<endl;
    }

    return 0;
}