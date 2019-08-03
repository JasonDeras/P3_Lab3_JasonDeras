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
		Ojos *o=new Ojos();
		Orejas*ore=new Orejas();
		Cola *c=new Cola();
		int op;
		int op1;
		int op2;
		int op3;
		int r=1;
		vector<Animal*>espera;
		
		//Caracteristicas del menu
		cout<<"Ingrese el nombre del zoologico: ";
		cin>>nombre;
		cout<<"Ingrese el tamaño del zoologico: ";
		cin>>tamanio;
		cout<<"Ingrese la capacidad de personas del zoologico: ";
		cin>>capacidad_personas;
		cout<<"\n\n\n\n";
			
		//Inicio del programa
		while(r==1){
			
			//El menu
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
					
					//Caracteristicas del animal
					cout<<"Ingrese el nombre de la especie: ";
					cin>>nombre_especie;
					cout<<"Ingrese el nombre del animal: ";
					cin>>nombre_animal;
					cout<<"Ingrese el tamaño del animal: ";
					cin>>tamanio_animal;
					cout<<"1. Artico\n\n";
					cout<<"2. Desertic\n\n";
					cout<<"3. De jungla tropical\n\n";
					cout<<"3. De zabana";
					cout<<"Ingrese una opcion para el tipo de animal: ";
					cin>>op1;
					switch(op1){
						
						case 1:
							tipo_animal="Zona artica";
						break;
						
						case 2:
							tipo_animal="Zona Desertica";	
						break;
						
						case 3:
							tipo_animal="Zona de jungla Tropical";
						break;
						
						case 4:
							tipo_animal="Zona de Zabana";
						break;
						
						default:
							cout<<"Opcion no valida se iniciara en vacio\n\n\n\n";
							tipo_animal="";
						break;
					}//Fin de las opciones de las zonas de los animales
					
					//Caracteristicas de las patas
					cout<<"Ingrese la cantidad de las patas: ";
					cin>>cantidad_patas;
					cout<<"Ingrese el largo de las patas: ";
					cin>>largo_patas;
					cout<<"Ingrese el tipo de las patas: ";
					cin>>tipo_patas;
					
					//Caracteristicas del pelaje
					cout<<"Ingrese el color del pelaje: ";
					cin>>color;
					cout<<"Ingrese el grosor del pelaje: ";
					cin>>grosor;
					cout<<"Ingrese el largo del pelaje: "; 
					cin>>largo;
					
					//Caracteristicas de los ojos
					cout<<"Ingrese el color de ojo del animal: ";
					cin>>color_ojo;
					cout<<"1. Vision nocturna\n\n";
					cout<<"2. Sin vision nocturna\n\n";
					cout<<"Ingrese una opcion para la vision del animal: ";
					cin>>op2;
					switch(op2){
						
						case 1:
							vision_nocturna="Vision nocturna";
						break;
							
						case 2:
							vision_nocturna="Sin vision nocturna";	
						break;
							
						default:		
							cout<<"Opcion no valida se pondra en vacio\n\n\n\n";
							vision_nocturna="";
						break;
						
					}//Fin de las opciones de a vision noctura
					
					//Caracteristicas de la cola
					cout<<"Ingrese el largo de la cola: ";
					cin>>largo_cola;
					cout<<"1. Cola Peluda\n\n";
					cout<<"2. Cola normal\n\n";
					cout<<"Ingrese una opcion para la cola del animal: ";
					cin>>op3;
					switch(op3){
						
						case 1:
						peludo="Cola peluda";	
						break;
						
						case 2:
							peludo="Cola normal";
						break;
						
						default:
							cout<<"Opcion no valida si iniciar en vacio";
							peludo="";
						break;
					}//Fin de las opciones de la cola del animal
					a=new Animal(p,pe,o,ore,c,nombre_especie,nombre_animal,tamanio_animal,tipo_animal);
					espera.push_back(a);
					cout<<"\n\n\n\n";
				break;
				
				case 2:
					
				break;
				
				case 3:
					z->print();
				break;
				
				case 4:
					
					//Liberacion de memoria
					z->remZona_artica();
					z->remZona_desertica();
					z->remZona_de_jungla_tropical();
					z->remZona_sabana();
					z->~Zoologico();
					a->~Animal();
					p->~Patas();
					pe->~Pelaje();
					o->~Ojos();
					ore->~Orejas();
					exit(0);	
				break;
				
				default:
					cout<<"Opcion no valida\n\n\n\n";
				break;
			}//Fin del switch de las opciones del menu
			cout<<"Volver al menu?1.-Si,2.-No: ";
			cin>>r;
			cout<<"\n\n\n\n";
		}//Fin del while del menu
		
		//Liberacion de memoria
		z->remZona_artica();
		z->remZona_desertica();
		z->remZona_de_jungla_tropical();
		z->remZona_sabana();
		z->~Zoologico();
		a->~Animal();
		p->~Patas();
		pe->~Pelaje();
		o->~Ojos();
		ore->~Orejas();
		system("pause");
		return 0;
		
	}//Fin del main
