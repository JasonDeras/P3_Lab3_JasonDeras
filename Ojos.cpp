#include<iostream>
#include<string.h>

#ifndef OJOS_CPP
#define OJOS_CPP

using namespace std;

class Ojos{
	
	private:
		
		string color_ojo;
		string vision_nocturna;
		
		
	protected:
		
	public:
		
		Ojos(){
			
		}//Fin del constructor simple
		
		Ojos(string color_ojo,string vision_nocturna){
		
			this-> color_ojo=color_ojo;
			this-> vision_nocturna=vision_nocturna;
		
		}//Fin del constructor sobrecargado
	
		void setColor_ojo(string color_ojo){
			this->color_ojo.assign(color_ojo);
		}//Set del color
		
		string getColor(){
			return this->color_ojo;
		}//Get del color
		
		void setVision_nocturna(string vision_nocturna){
			this->vision_nocturna.assign(vision_nocturna);
		}//Set del vision nocturna
		
		string getVision_nocturna(){
			return this->vision_nocturna;
		}//Get del vision nocturna
		
		void print(){
			cout<<"Color de los ojos: "<<color_ojo<<
			" Vision Nocturna: "<<vision_nocturna<<endl;
		}//Fin del print
		
		~Ojos(){
		}//Fin del destructor
};

#endif
