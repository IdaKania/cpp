#include <iostream>

using namespace std;

int main() {
    
    int tab[10][10];
    for(int x=0; x<10; x++){
        for(int y=0; y<10; y++){
            if(x==y) tab[x][y]=1;
            else tab[x][y]=0;
            cout<<" "<<tab[x][y];
        }
        cout<<" "<<endl;
    }
    return 0;
    
}