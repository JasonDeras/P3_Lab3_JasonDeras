#include<iostream>
#include<string.h>

#ifndef OREJAS_CPP
#define OREJAS_CPP

using namespace std;

class Orejas{
	
	private:
		
		string tamanio;
		int capacidad_audicion;
		
		
	protected:
		
	public:
		
		Orejas(){
			
		}//Fin del constructor simple
		
		Orejas(string tamanio,int capacidad_audicion){
		
			this-> tamanio=tamanio;
			this-> capacidad_audicion=capacidad_audicion;
		
		}//Fin del constructor sobrecargado
	
		void setTamanio(string tamanio){
			this->tamanio.assign(tamanio);
		}//Set del tamanio de las orejas
		
		string getTamanio(){
			return this->tamanio;
		}//Get del tamanio de las orejas
		
		void setCapacidad_audicion(int capacidad_audicion){
			this->capacidad_audicion=capacidad_audicion;
		}//Set del capacidad audicion
		
		int getCapacidad_audicion(){
			return this->capacidad_audicion;
		}//Get del vision nocturna
		
		void print(){
			cout<<"Tamaño de las orejas: "<<tamanio<<
			" Capacidad de audicion: "<<capacidad_audicion<<endl;
		}//Fin del print
		
		~Orejas(){
		}//Fin del destructor
};

#endif
