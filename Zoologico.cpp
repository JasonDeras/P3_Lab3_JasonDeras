#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<string.h>
#include "Animal.cpp"
#include "Patas.cpp"
#include "Pelaje.cpp"
#include "Ojos.cpp"
#include "Orejas.cpp"
#include "Cola.cpp"
#ifndef ZOOLOGICO_CPP
#define ZOOLOGICO_CPP

using namespace std;

class Zoologico{
	
	private:
		
		Animal* animal;
		Patas* patas;
		Pelaje* pelaje;
		Ojos* ojos;
		Orejas* orejas;
		Cola* cola;
		string nombre;
		double tamanio;
		int capacidad_personas;
		vector<Animal*>zona_artica;
		vector<Animal*>zona_desertica;
		vector<Animal*>zona_de_jungla_tropical;
		vector<Animal*>zona_sabana;
		
		
	protected:
		
	public:
		
		Zoologico(){
			animal=new Animal();
			patas=new Patas();
			pelaje=new Pelaje();
			ojos=new Ojos();
			orejas=new Orejas();
			cola=new Cola();
		}//Fin del constructor simple
		
		Zoologico(Animal* animal,Patas* patas,Pelaje* pelaje,Ojos* ojos,Orejas* orejas,Cola* cola,string nombre,double tamanio,int capacidad_personas){
			
			this->animal=animal;
			this->patas=patas;
			this->pelaje=pelaje;
			this->ojos=ojos;
			this->orejas=orejas;
			this->cola=cola;
			this->nombre=nombre;
			this->tamanio=tamanio;
			this->capacidad_personas=capacidad_personas;
			
		}//Constructor sobrecargado
		
		void setAnimal(Animal* animal){
			this->animal=animal;
		}//Fin del metodo set del animal
		   
		Animal* getAnimal(){
			return animal;
		}//Fin del metodo get del animal
		
		void setPatas(Patas* patas){
			this->patas=patas;
		}//Fin del metodo set de las patas
		   
		Patas* getPatas(){
			return patas;
		}//Fin del metodo get de las patas
		
		void setPelaje(Pelaje* pelaje){
			this->pelaje=pelaje;
		}//Fin del metodo set del pelaje
		   
		Pelaje* getPelaje(){
			return pelaje;
		}//Fin del metodo get del pelaje
		
		void setOjos(Ojos* ojos){
			this->ojos=ojos;
		}//Fin del metodo set de los ojos
		   
		Ojos* getOjos(){
			return ojos;
		}//Fin del metodo get de los ojos
		
		void setOrejas(Orejas* orejas){	
			this->orejas=orejas;
		}//Fin del metodo set de las orejas
		   
		Orejas* getOrejas(){
			return orejas;
		}//Fin del metodo get de las orejas
		
		void setCola(Cola* cola){
			this->cola=cola;
		}//Fin del metodo set de la cola
		   
		Cola* getCola(){
			return cola;
		}//Fin del metodo get de la cola
		
		void setNombre(string nombre){
			this->nombre.assign(nombre);
		}//Set del nombre
		
		string getNombre(){
			return this->nombre;
		}//Get del nombre
		
		void setTamanio(double tamanio){
			this->tamanio=tamanio;
		}//Set del tamaño
		
		double getTamanio(){
			return this->tamanio;
		}//Get del tamaño
		
		void setCapacidad_personas(int capacidad_personas){
			this->capacidad_personas=capacidad_personas;
		}//Set de la capacidad de personas
		
		int getCapacidad_personas(){
			return this->capacidad_personas;
		}//Get de la capacidad de personas
		
		void setZona_artica(vector<Animal*>zona_artica){
            this->zona_artica=zona_artica;
        }//Fin del metodo set de la zona artica
             
        void setZona_artica(Animal*animal){
            this->zona_artica.push_back(animal);
        }//Fin del metodo set de un solo animal en la zona artica
             
        vector<Animal*> getZona_artica(){
            return this->zona_artica;
        }//Fin del metodo get del vector de la zona artica
        
        void remZona_artica(){
        	zona_artica.clear();
        	if(zona_artica.empty()){
        		zona_artica.clear();
			}//Fin del if que se asegura que esta limpio el arreglo
		}//Fin del metodo que limpia el vector de la zona artica
		
		void setZona_desertica(vector<Animal*>zona_desertica){
            this->zona_desertica=zona_desertica;
        }//Fin del metodo set de la zona desertica
             
        void setZona_desertica(Animal*animal){
            this->zona_desertica.push_back(animal);
        }//Fin del metodo set de un solo animal en la zona desertica
             
        vector<Animal*> getZona_desertica(){
            return this->zona_desertica;
        }//Fin del metodo get del vector de los animales de la zona desertica
        
        void remZona_desertica(){
        	zona_desertica.clear();
        	if(zona_desertica.empty()){
        		zona_desertica.clear();
			}//Fin del if que se asegura que esta limpio el arreglo
		}//Fin del metodo que remueve un animal de la zona desertica
		
		void setZona_de_jungla_tropical(vector<Animal*>zona_de_jungla_tropical){
            this->zona_de_jungla_tropical=zona_de_jungla_tropical;
        }//Fin del metodo set de los animales de la zona de jungla tropical
             
        void setZona_de_jungla_tropical(Animal*animal){
            this->zona_de_jungla_tropical.push_back(animal);
        }//Fin del metodo set de un solo animal en la zona de jungla tropical
             
        vector<Animal*> getZona_de_jungla_tropical(){
            return this->zona_de_jungla_tropical;
        }//Fin del metodo get del vector de zona de jungla tropical
        
        void remZona_de_jungla_tropical(int p){
        	zona_de_jungla_tropical.clear();
        	if(zona_de_jungla_tropical.empty()){
        		zona_de_jungla_tropical.clear();
			}//Fin del if que se asegura que esta limpio el arreglo
		}//Fin del metodo que remueve un solo animal de zona de jungla tropical
		
		void setZona_sabana(vector<Animal*>zona_sabana){
            this->zona_sabana=zona_sabana;
        }//Fin del metodo set de la zona sabana
             
        void setZona_sabana(Animal*animal){
            this->zona_sabana.push_back(animal);
        }//Fin del metodo set de una sola computadora
             
        vector<Animal*> getZona_sabana(){
            return this->zona_sabana;
        }//Fin del metodo get del vector de la zona sabana
        
        void remZona_sabana(int p){
        	zona_sabana.clear();
        	if(zona_sabana.empty()){
        		zona_sabana.clear();
			}//Fin del if que se asegura que esta limpio el arreglo
		}//Fin del metodo que remueve un solo animal de la zona sabana
		
		void print(){
			
			cout<<"Nombre: "<<nombre<<
			" Tamaño: "<<tamanio<<
			" Capacidad de personas: "<<capacidad_personas<<endl;
			
		}//Fin del metodo to string
		
		~Zoologico(){
			
		}//Fin del destructor
};

#endif
