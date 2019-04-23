#include <iostream>
using namespace std;

int main(){
	
    int numero;
    int nuevo_sueldo;
    int sueldo_inicial = 400;
    
        cin>>numero;
    
    switch(numero){
        case 1:
            cout<<"Categoria 1 "<<endl;
            cout<<"Su sueldo anterior es:"<<sueldo_inicial<<endl;
            cout<<"Su nuevo sueldo es:"<<sueldo_inicial*(15/10)<<endl;
          
        break;
        case 2:
            cout<<"Categoria 2 "<<endl;
            cout<<"Su sueldo anterior es:"<<sueldo_inicial<<endl;
            cout<<"Su nuevo sueldo es:"<<sueldo_inicial*(0,10)<<endl;
        break;
        case 3:
           cout<<"Categoria 3 "<<endl;
            cout<<"Su sueldo anterior es:"<<sueldo_inicial<<endl;
            cout<<"Su nuevo sueldo es:"<<sueldo_inicial*(8/100)<<endl;
        break;
    }
}

