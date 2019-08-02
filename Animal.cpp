#include<iostream>
#include<string.h>

#ifndef ANIMAL_CPP
#define ANIMAL_CPP

using namespace std;

class Animal{
	
	private:
		
		string nombre_especie;
		string nombre_animal;
		string tamanio_animal;
		string tipo_animal;
		
		
	protected:
		
	public:
		
		Animal(){
			
		}//Fin del constructor simple
		
		Animal(string nombre_especie,string nombre_animal,string tamanio_animal,string tipo_animal ){
		
			this->nombre_especie=nombre_especie;
			this-> nombre_animal=nombre_animal;
			this-> tamanio_animal=tamanio_animal;
			this-> tipo_animal=tipo_animal;
			
		}//Fin del constructor sobrecargado
	
		void setNombre_especie(string nombre_especie){
			this->nombre_especie.assign(nombre_especie);
		}//Set del nombre especie
		
		string getNombre_especie(){
			return this->nombre_especie;
		}//Get del nombre especie
		
		void setNombre_animal(string nombre_animal){
			this->nombre_animal.assign(nombre_animal);
		}//Set del nombre animal
		
		string getNombre_animal(){
			return this->nombre_animal;
		}//Get del nombre animal
		
		void setTamanio_animal(string tamanio_animal){
			this->tamanio_animal.assign(tamanio_animal);
		}//Set del tamanio animal
		
		string getTamanio_animal(){
			return this->tamanio_animal;
		}//Get del tamanio animal
		
		void setTipo_animal(string tipo_animal){
			this->tipo_animal.assign(tipo_animal);
		}//Set del tipo animal
		
		string getTipo_animal(){
			return this->tipo_animal;
		}//Get del tipo_animal
		
		void print(){
			cout<<"Nombre de especie: "<<nombre_especie<<
			" Nombre del animal: "<<nombre_animal<<
			" Tamaño del animal: "<<tamanio_animal<<
			" Tipo del animal: "<<tipo_animal<<endl;
		}//Fin del print
		~Animal(){
		}//Fin del destructor
};

#endif
