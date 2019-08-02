#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<string.h>

#ifndef ZOOLOGICO_CPP
#define ZOOLOGICO_CPP

using namespace std;

class Zoologico{
	
	private:
		
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
			
		}//Fin del constructor simple
		
		Zoologico(strin nombre,double tamanio,int capacidad_personas){
			
			this->nombre=nombre;
			this->tamanio=tamanio;
			this->capacidad_personas=capacidad_personas;
			
		}//Constructor sobrecargada
		
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
        	compus.erase(compus.begin()+p);
		}//Fin del metodo que remueve una computadora
		void setCompus(vector<Computadora*>compus){
            this->compus=compus;
        }//Fin del metodo set de las computadoras
             
        void setComputadora(Computadora*compu){
            this->compus.push_back(compu);
        }//Fin del metodo set de una sola computadora
             
        vector<Computadora*> getCompus(){
            return this->compus;
        }//Fin del metodo get del vector de las computadors
        
        void remComputadora(int p){
        	compus.erase(compus.begin()+p);
		}//Fin del metodo que remueve una computadora
		void setCompus(vector<Computadora*>compus){
            this->compus=compus;
        }//Fin del metodo set de las computadoras
             
        void setComputadora(Computadora*compu){
            this->compus.push_back(compu);
        }//Fin del metodo set de una sola computadora
             
        vector<Computadora*> getCompus(){
            return this->compus;
        }//Fin del metodo get del vector de las computadors
        
        void remComputadora(int p){
        	compus.erase(compus.begin()+p);
		}//Fin del metodo que remueve una computadora
		void print(){
			cout<<"Longitud:"<<longitud<<
			" anchura: "<<anchura<<
			" Area: "<<area()<<
			" perimetro: "<<perimetro()<<endl;
		}//Fin del metodo to string
		
		~Rectangulo(){
			
		}
};

#endif
