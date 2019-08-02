#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<string.h>
#include "Animal.cpp"
#ifndef ZOOLOGICO_CPP
#define ZOOLOGICO_CPP

using namespace std;

class Zoologico{
	
	private:
		
		Animal* animal;
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
		}//Fin del constructor simple
		
		Zoologico(string nombre,double tamanio,int capacidad_personas){
			
			this->nombre=nombre;
			this->tamanio=tamanio;
			this->capacidad_personas=capacidad_personas;
			
		}//Constructor sobrecargado
		
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
        
        void remZona_artica(int p){
        	zona_artica.erase(zona_artica.begin()+p);
		}//Fin del metodo que remueve un animal de la zona artica
		
		void setZona_desertica(vector<Animal*>zona_desertica){
            this->zona_desertica=zona_desertica;
        }//Fin del metodo set de la zona desertica
             
        void setZona_desertica(Animal*animal){
            this->zona_desertica.push_back(animal);
        }//Fin del metodo set de un solo animal en la zona desertica
             
        vector<Animal*> getZona_desertica(){
            return this->zona_desertica;
        }//Fin del metodo get del vector de los animales de la zona desertica
        
        void remZona_desertica(int p){
        	zona_desertica.erase(zona_desertica.begin()+p);
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
        	zona_de_jungla_tropical.erase(zona_de_jungla_tropical.begin()+p);
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
        	zona_sabana.erase(zona_sabana.begin()+p);
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
