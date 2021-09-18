#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int b=0;

    int tab[10];
    
    srand(time(NULL));
    
    for(int c=0; c<10; c++){
        
            tab[c]=rand()%100;
        
            if(tab[c]>b) {
                b=tab[c];
            }
            
        cout<<tab[c]<<endl;
    }
    
    cout<<"**********************"<<endl;
    
    cout<<b<<endl;
    
    return 0;
}