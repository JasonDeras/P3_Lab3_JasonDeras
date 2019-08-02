#include<iostream>
#include<string.h>

#ifndef COLA_CPP
#define COLA_CPP

using namespace std;

class Cola{
	
	private:
		
		string largo_cola;
		string peludo;
		
		
	protected:
		
	public:
		
		Cola(){
			
		}//Fin del constructor simple
		
		Cola(string largo_cola,string peludo){
		
			this-> largo_cola=largo_cola;
			this-> peludo=peludo;
		
		}//Fin del constructor sobrecargado
	
		void setLargo_cola(string largo_cola){
			this->largo_cola.assign(largo_cola);
		}//Set del largo de la cola
		
		string getLargo_cola(){
			return this->largo_cola;
		}//Get del largo cola
		
		void setPeludo(string peludo){
			this->peludo.assign(peludo);
		}//Set del peludo
		
		string getPeludo(){
			return this->peludo;
		}//Get del peludo
		
		void print(){
			cout<<"Largo de la cola: "<<largo_cola<<
			" Peludo: "<<peludo<<endl;
		}//Fin del print
		
		~Cola(){
		}//Fin del destructor
};

#endif
