#include<iostream>
#include<string.h>
#include "Clase.cpp"

#ifndef MAESTRO_CPP
#define MAESTRO_CPP

class Clase;

using namespace std;

class Maestro{
	
	private:
		
		string nombre;
		string usuario;
		string contrasenia;
		string pregrado;
		string profesion;
		vector<Clase*>clases;
		
	protected:
		
	public:
		
		Maestro(){
			
		}//Fin del constructor simple
		
		Maestro(string nombre,string usuario,string contrasenia,string pregrado,string profesion){
			
			this->nombre=nombre;
			this->usuario=usuario;
			this->contrasenia=contrasenia;
			this->pregrado=pregrado;
			this->profesion=profesion;
		
		}//Constructor sobrecargado
             
        void setNombre(string nombre){
            this->nombre.assign(nombre);
        }//Fin del metodo set del nombre
             
        string getNombre(){
            return this->nombre;
        }//Fin del metodo get del nombre
        
		void setUsuario(string usuario){
            this->usuario.assign(usuario);
        }//Fin del metodo set del usuario
             
        string getUsuario(){
            return this->usuario;
        }//Fin del metodo get del usuario
		
		void setPregrado(string pregrado){
            this->pregrado.assign(pregrado);
        }//Fin del metodo set del pregrado
             
        string getPregrado(){
            return this->pregrado;
        }//Fin del metodo get del pregrado
		
		void setProfesion(string profesion){
            this->profesion=profesion;
        }//Fin del metodo set de la profesion
             
        string getProfesion(){
            return this->profesion;
        }//Fin del metodo get del nombre
		
		~Maestro(){
			
		}//Fin del destructor
};

#endif
