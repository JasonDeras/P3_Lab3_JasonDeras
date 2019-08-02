#include<iostream>
#include<string.h>
#include<vector>
#include<bits/stdc++.h>
#include "Clase.cpp"
#ifndef ALUMNO_CPP
#define ALUMNO_CPP

class Clase;

using namespace std;

class Alumno{
	
	private:
		
		string nombre;
		string usuario;
		string contrasenia;
		int edad;
		string genero;
		string carrera;
		vector<Clase*>clases;
		
	protected:
		
	public:
		
		Alumno(){
			
		}//Fin del constructor simple
		
		Alumno(string nombre,string usuario,string contrasenia,int edad,string genero,string carrera){
			
			this->nombre=nombre;
			this->usuario=usuario;
			this->contrasenia=contrasenia;
			this->edad=edad;
			this->genero=genero;
			this->carrera=carrera;
		
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
		
		void setContrasenia(string contrasenia){
            this->contrasenia.assign(contrasenia);
        }//Fin del metodo set de la contraseña
             
        string getContrasenia(){
            return this->contrasenia;
        }//Fin del metodo get de la contraseña
		
		void setEdad(int edad){
            this->edad=edad;
        }//Fin del metodo set de la edad
             
        int getEdad(){
            return this->edad;
        }//Fin del metodo get del nombre
		
		void setGenero(string genero){
            this->genero.assign(genero);
        }//Fin del metodo set del genero
             
        string getGenero(){
            return this->genero;
        }//Fin del metodo get del genero
		
		void setCarrera(string carrera){
            this->carrera.assign(carrera);
        }//Fin del metodo set del la carrera
             
        string getCarrera(){
            return this->carrera;
        }//Fin del metodo get de la carrera
        
        void setClases(vector<Clase*>clases){
            this->clases=clases;
        }//Fin del metodo set de las clases
             
        void setClase(Clase*clase){
            this->clases.push_back(clase);
        }//Fin del metodo set de una sola clase
             
        vector<Clase*> getClases(){
            return this->clases;
        }//Fin del metodo get del vector de las clases
        
        void remClase(int p){
        	clases.erase(clases.begin()+p);
        }//Fin del metodo que elimina una clase
        
		void print(){
			
			cout<<"Nombre: "<<nombre<<
			" Usuario: "<<usuario<<
			" Contraseña: "<<contrasenia<<
			" Genero: "<<genero<<
			"Carrera: "<<carrera<<endl;
			cout<<"Clases"<<endl;
			for(int i=0;i<clases.size();i++){
				cout<<clases.at(i)<<endl;
			}//Fin del for de las clases
			
		}//Fin del metodo print
              
		~Alumno(){
			
		}//Fin del destructor
};

#endif
