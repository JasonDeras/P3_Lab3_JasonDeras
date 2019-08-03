#include<iostream>
#include<string.h>
#include "Patas.cpp"
#include "Pelaje.cpp"
#include "Ojos.cpp"
#include "Orejas.cpp"
#include "Cola.cpp"
#ifndef ANIMAL_CPP
#define ANIMAL_CPP

using namespace std;

class Animal{
	
	private:
		
		Patas* patas;
		Pelaje* pelaje;
		Ojos* ojos;
		Orejas* orejas;
		Cola* cola;
		string nombre_especie;
		string nombre_animal;
		string tamanio_animal;
		string tipo_animal;
		
		
	protected:
		
	public:
		
		Animal(){
			patas=new Patas();
			pelaje=new Pelaje();
			ojos=new Ojos();
			orejas=new Orejas();
			cola=new Cola();
		}//Fin del constructor simple
		
		Animal(Patas* patas,Pelaje* pelaje,Ojos* ojos,Orejas* orejas,Cola* cola,string nombre_especie,string nombre_animal,string tamanio_animal,string tipo_animal ){
			
			this->patas=patas;
			this->pelaje=pelaje;
			this->ojos=ojos;
			this->orejas=orejas;
			this->cola=cola;
			this->nombre_especie=nombre_especie;
			this-> nombre_animal=nombre_animal;
			this-> tamanio_animal=tamanio_animal;
			this-> tipo_animal=tipo_animal;
			
		}//Fin del constructor sobrecargado
		
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
			patas->print();
			pelaje->print();
			ojos->print();
			orejas->print();
			cola->print();
		}//Fin del print
		~Animal(){
		}//Fin del destructor
};

#endif
