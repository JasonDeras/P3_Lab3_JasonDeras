#include<iostream>
#include<string.h>
#include "Maestro.cpp"
#include "Alumno.cpp"
#ifndef ALUMNO_CPP
#define ALUMNO_CPP

class Alumno;
class Maestro;

using namespace std;

class Clase{
	
	private:
		
		string nombre;
		string id;
		int capacidad;
		int alumnos_ac;
		Maestro *maestro;
		vector<Alumno*>alumnos;
		
	protected:
		
	public:
		
		Clase(){
			
		}//Fin del constructor simple
		
		Clase(string nombre,string id,int capacidad,int alumnos_ac,Maestro* maestro){
			
			this->nombre=nombre;
			this->id=id;
			this->capacidad=capacidad;
			this->alumnos_ac=alumnos_ac;
			this->maestro=maestro;
		
		}//Constructor sobrecargado
             
        void setNombre(string nombre){
            this->nombre.assign(nombre);
        }//Fin del metodo set del nombre
             
        string getNombre(){
            return this->nombre;
        }//Fin del metodo get del nombre
        
		void setId(string id){
            this->id.assign(id);
        }//Fin del metodo set del id
             
        string getId(){
            return this->id;
        }//Fin del metodo get del id
        
		void setCapacidad(int capacidad){
            this->genero=capacidad;
        }//Fin del metodo set de la capacidad
             
        int getCapacidad(){
            return this->capacidad;
        }//Fin del metodo get la capacidad
        
		void setAlumnos_ac(int alumnos_ac){
            this->alumnos_ac=alumnos_ac;
        }//Fin del metodo set de los alumnos actuales
             
        int getAlumnos_ac(){
            return this->alumnos_ac;
        }//Fin del metodo get del los alumnos actuales
		
		
		void setCarrera(string carrera){
            this->carrera.assign(carrera);
        }//Fin del metodo set del la carrera
             
        string getCarrera(){
            return this->carrera;
        }//Fin del metodo get de la carrera
        
		void setMaestro(Maestro*maestro){
			this->maestro=maestro;
		}//Fin del metodo set de la maestro   
		   
		Maestro* getMaestro(){
			return maestro;
		}//Fin del metodo get del maestro
		 
		 void setAlumnos(vector<Alumno*>alumnos){
            this->alumnos=alumnos;
        }//Fin del metodo set de los alumnos
             
        void setAlumno(Alumno*alumno){
            this->alumnos.push_back(alumno);
        }//Fin del metodo set de una sola clase
             
        vector<Alumno*> getAlumnos(){
            return this->alumnos;
        }//Fin del metodo get del vector de alumnos
        
        void remAlumnos(int p){
        	alumnos.erase(alumnos.begin()+p);
        }//Fin del metodo que elimina una clase
        
		void print(){
			
			cout<<"Nombre: "<<nombre<<
			" Id: "<<id<<
			" Capacidad de alumnos: "<<capacidad<<
			" Alumnos Actuales: "<<alumnos_ac<<
			" Maestro: "<<maestro<<endl;
			cout<<"Alumnos cursando la clase"<<endl;
			for(int i=0;i<alumnos.size();i++){
				cout<<alumnos.at(i)<<endl;
			}//Fin del for de las clases
			
		}//Fin del metodo print
        
		~Clase(){
			
		}//Fin del destructor
};

#endif
