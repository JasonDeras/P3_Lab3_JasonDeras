#include<iostream>
#include<string.h>

#ifndef PATAS_CPP
#define PATAS_CPP

using namespace std;

class Patas{
	
	private:
		
		int cantidad_patas;
		string largo_patas;
		string tipo_patas;
		
		
	protected:
		
	public:
		
		Patas(){
			
		}//Fin del constructor simple
		
		Patas(int cantidad_patas,string largo_patas,string tipo_patas){
		
			this-> cantidad_patas=cantidad_patas;
			this-> largo_patas=largo_patas;
			this-> tipo_patas=tipo_patas;
			
		}//Fin del constructor sobrecargado
	
		void setCantidad_patas(int cantidad_patas){
			this->cantidad_patas=cantidad_patas;
		}//Set del la cantidad de patas
		
		int getCantidad_patas(){
			return this->cantidad_patas;
		}//Get del la cantidad de pastas
		
		void setLargo_patas(string largo_patas){
			this->largo_patas.assign(largo_patas);
		}//Set del largo patas
		
		string getLargo_patas(){
			return this->largo_patas;
		}//Get del largo patas
		
		void setTipo_patas(string tipo_patas){
			this->tipo_patas.assign(tipo_patas);
		}//Set del tipo patas
		
		string getTipo_patas(){
			return this->tipo_patas;
		}//Get del tipo patas
		
		void print(){
			cout<<"Cantidad de patas: "<<cantidad_patas<<
			" Largo de las patas: "<<tipo_patas<<
			" Tipo de patas: "<<tipo_patas<<endl;
		}//Fin del print
		
		~Patas(){
		}//Fin del destructor
};

#endif
