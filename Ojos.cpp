#include<iostream>
#include<string.h>

#ifndef OJOS_CPP
#define OJOS_CPP

using namespace std;

class Ojos{
	
	private:
		
		string color;
		string vision_nocturna;
		
		
	protected:
		
	public:
		
		Ojos(){
			
		}//Fin del constructor simple
		
		Ojos(string color,string vision_nocturna){
		
			this-> color=color;
			this-> vision_nocturna=vision_nocturna;
		
		}//Fin del constructor simple
	
		void setColor(string color){
			this->color.assign(color);
		}//Set del color
		
		string getColor(){
			return this->color;
		}//Get del color
		
		void setVision_nocturna(string vision_nocturna){
			this->vision_nocturna.assign(vision_nocturna);
		}//Set del vision nocturna
		
		string getVision_nocturna(){
			return this->vision_nocturna;
		}//Get del vision nocturna
		
		void print(){
			cout<<"Color de los ojos: "<<color<<
			" Vision Nocturna: "<<vision_nocturna<<endl;
		}//Fin del print
		
		~Ojos(){
		}//Fin del destructor
};

#endif
