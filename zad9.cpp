#include <iostream>

using namespace std;

int main() {
    int tab[10][10];
    for(int x=0; x<10; x++){
        int a = 0;
        for(int y=0; y<10; y++){
            if(x==y) tab[x][y]=a;
            else tab[x][y]=0;
            a = a + 1;
            cout<<" "<<tab[x][y];
        }
        cout<<" "<<endl;
    }
    return 0;
}