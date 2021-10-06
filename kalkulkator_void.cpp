#include <iostream>
#include <math.h>

using namespace std;

void dodawanie(int a, int b){
	int c;
	c = a + b;
	cout<<c;
}

void odejmowanie(int a, int b){
	int c;
	c = a - b;
	cout<<c;
} 

void mnozenie(int a, int b){
	int c;
	c = a * b;
	cout<<c;
}

void dzielenie(int a, int b){
	int c;
	c = a / b;
	cout<<c;
}

int main(int a, int b)
{
	int c, d;
	cout << "podaj a: ";
	cin >> a;
	cout << "podaj b: ";
	cin >> b;
	
	cout<<endl;
	
	cout<<"Dodawanie - 1"<<endl;
	cout<<"Odejmowanie - 2"<<endl;
	cout<<"Mnozenie - 3"<<endl;
	cout<<"Dzielenie - 4"<<endl;
	
	cout<<endl;
	
	cin>>d;
	
	cout<<endl;
	
	switch(d) {
	    
	    case 1:
	    cout<<"Dodawanie ";
	    dodawanie(a, b);
        cout<<endl;
        break;
        
        case 2:
	    cout<<"Odejmowanie ";
        odejmowanie(a, b);
        cout<<endl;
        break;
        
        case 3:
	    cout<<"Mnozenie ";
	    mnozenie(a, b);
        cout<<endl;
        break;
        
        case 4:
        cout<<"Dzielenie ";
	    dzielenie(a, b);
        cout<<endl;
        break;
        
        default:
        cout<<"Podano zla cyfre"<<endl;
	}

	return 0;
}