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
        
        void setClases(vector<Clase*>clases){
            this->clases=clases;
        }//Fin del metodo set de las clases
             
        void setClase(Clase*clase){
            this->clases.push_back(clase);
        }//Fin del metodo set de una sola clase
             
        vector<Clase*> getClases(){
            return this->clase;
        }//Fin del metodo get del vector de las clases
        
        void remClase(int p){
        	clases.erase(clases.begin()+p);
        }//Fin del metodo que elimina una clase
        
		void print(){
			
			cout<<"Nombre: "<<nombre<<
			" Usuario: "<<usuario<<
			" Contraseña: "<<contrasenia<<
			" Pregrado: "<<pregrado<<
			" Profesion: "<<profesion<<endl;
			cout<<"Clases"<<endl;
			for(int i=0;i<clases.size();i++){
				cout<<clases.at(i)<<endl;
			}//Fin del for de las clases
			
		}//Fin del metodo print
            
		~Maestro(){
			
		}//Fin del destructor
};

#endif
