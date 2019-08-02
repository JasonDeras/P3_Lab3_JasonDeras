#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<string.h>

using namespace std;

	int main(){
		
		int r=1;
		int op;
		
		while(r==1){
			
			cout<<"Menu\n\n\n";
			cout<<"Ingrese una opcion: ";
			cin>>op;
			cout<<"\n\n\n";
			
			switch(op){
				
				default:
					cout<<"Opcion no valida\n\n\n";
				break;
				
			}//Fin del switch de la opciones
			
			cout<<"Volver al menu?1.-Si,2.-No: ";
			cin>>r;
			cout<<"\n\n\n";
			
		}//Fin del while del menu
		
		system("pause");
		return 0;
		
	}//Fin del main
