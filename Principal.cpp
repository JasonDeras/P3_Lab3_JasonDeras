#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<string.h>
#include "Zoologico.cpp"

using namespace std;

	int main(){
		
		//Variables del zoologico
		string nombre;
		double tamanio;
		int capacidad_personas;
		
		//Variables de control de Animal
		string nombre_especie;
		string nombre_animal;
		string tamanio_animal;
		string tipo_animal;
		
		//Variables de control de las Patas
		int cantidad_patas;
		string largo_patas;
		string tipo_patas;
		
		//Variables de control del Pelaje
		string color;
		string grosor;
		string largo;
		
		//Variables de control de los Ojos
		string color_ojo;
		string vision_nocturna;
		
		//Variables de control de la Cola
		string largo_cola;
		string peludo;
		
		
		//Variables de control del programa
		Zoologico *z=new Zoologico();
		Animal *a=new Animal();
		Patas *p=new Patas();
		Pelaje *pe=new Pelaje();
		Ojos * o =new Ojos();
		Orejas*ore=new Orejas();
		int op;
		int op1;
		int r=1;
		vector<Animal*>espera;
		vector<Animal*>zoologico;
		
		//Inicio del programa
		while(r==1){
			cout<<"Ingrese el nombre del zoologico: ";
			cin>>nombre;
			cout<<"Ingrese el tamaño del zoologico: ";
			cin>>tamanio;
			cout<<"Ingrese la capacidad de personas del zoologico: ";
			cin>>capacidad_personas;
			cout<<"\n\n\n\n";
			cout<<"Menu\n\n\n\n";
			cout<<"1. Crear un animal\n";
			cout<<"2. Mover de lista de espera a la del zoologico\n";
			cout<<"3. Listar lista del zoologico\n";
			cout<<"4. Salir\n\n\n\n";
			cout<<"Ingrese una opcion: ";
			cin>>op;
			cout<<"\n\n\n\n";
			switch(op){
				
				case 1:
					cout<<"I";
				break;
				
				case 2:
					
				break;
				
				case 3:
					
				break;
				
				case 4:
					
				break;
				default:
					cout<<"Opcion no valida\n\n\n\n";
				break;
			}//Fin del switch de las opciones del menu
			cout<<"Volver al menu?1.-Si,2.-No: ";
			cin>>r;
			cout<<"\n\n\n\n";
		}//Fin del while del menu
		system("pause");
		return 0;
		
	}//Fin del main
