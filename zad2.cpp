#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    int b,c;

    string imiona[10]={"Anna","Magdalena","Amadeusz","Mariusz","Grazyna","Oliwia","Agata","Iwona","Marcin","Ireneusz"};
    
    string nazwiska[10]={"Szpunat","Rowiak","Talar","Jesionek","Kukla","Cisok","Siek","Nycz","Mikolajczak","Polec"};
    
    srand(time(NULL));
    
    for(int a=0; a<5; a++) {
        
        b=rand()%10;
        c=rand()%10;
        
        cout<<imiona[b]<<" "<<nazwiska[c]<<endl;
    }

    return 0;
}