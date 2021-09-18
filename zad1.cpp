#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    int c,d;
    
    int tab[6][6];
    
    srand(time(NULL));
    
    for(int a=0; a<6; a++) {
        
        for(int b=0; b<6; b++) {
            tab[a][b]=rand()%70+1;
        }
        
    }
    
    for(int a=0; a<6; a++) {
        
        for(int b=0; b<6; b++) {
            cout<<tab[a][b]<<"\t";
            
        }
        cout<<endl;
    }
    
    cout<<"Dodawanie - 1, mnozenie - 2"<<endl;
    cin>>c;
    cout<<endl;
    
    if(c==1) {
        cout<<"Jaka liczbe dodac do wylosowanych liczb"<<endl;
        cin>>d;
            for(int a=0; a<6; a++) {
                
                for(int b=0; b<6; b++) {
                    cout<<tab[a][b]+d<<"\t";
                    
                }
                cout<<endl;
            }
        
    }
    
    if(c==2) {
        cout<<"Przez ile pomnozyc wylosowane liczby"<<endl;
        cin>>d;
                    for(int a=0; a<6; a++) {
                
                for(int b=0; b<6; b++) {
                    cout<<tab[a][b]*d<<"\t";
                    
                }
                cout<<endl;
            }
    }
    
    return 0;
}