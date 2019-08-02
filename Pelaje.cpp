#include<iostream>
#include<string.h>

#ifndef PELAJE_CPP
#define PELAJE_CPP

using namespace std;

class Pelaje{
	
	private:
		
		string color;
		string grosor;
		string largo;
		
		
	protected:
		
	public:
		
		Pelaje(){
			
		}//Fin del constructor simple
		
		Pelaje(string color,string grosor,string largo){
		
			this-> color=color;
			this-> grosor=grosor;
			this-> largo=largo;
		
		}//Fin del constructor sobrecargado
	
		void setColor(string color){
			this->color.assign(color);
		}//Set del color
		
		string getColor(){
			return this->color;
		}//Get del color
		
		void setGrosor(string grosor){
			this->grosor.assign(grosor);
		}//Set del grosor
		
		string getGrosor(){
			return this->grosor;
		}//Get del grosor
		
		void setLargo(string largo){
			this->largo.assign(largo);
		}//Set del largo
		
		string getLargo(){
			return this->largo;
		}//Get del largo
		
		void print(){
			cout<<"Color del pelaje: "<<color<<
			" Grosor del pelaje: "<<grosor<<
			" Largo del pelaje: "<<largo<<endl;
		}//Fin del print
		
		~Pelaje(){
		}//Fin del destructor
};

#endif
