//integrantes del grupo: Mateo Sbodio, Juliana Aguero, David Vera.
#include <iostream>
#include <string>
using namespace std;



struct Fecha{
	int dia,mes,anio;
};



struct Persona{
	string nombre;
	int edad,peso;
	Fecha nacimiento;
};



struct Empleado{
	Persona persona;
	int salario;	
};



void MostrarFecha(Fecha f){
	cout<<f.dia<<"/"<<f.mes<<"/"<<f.anio<<endl;
}


void MostrarPersona(Persona p){	
	cout<<"El Nombre del usuario es: "<< p.nombre<<endl;
	cout<<"Edad: "<<p.edad<<endl;
	cout<<"Peso: "<<p.peso<<endl;
	cout<<"Nacimiento: ";
	MostrarFecha(p.nacimiento);	
};

void MostrarEmpleado(Empleado e){
	MostrarPersona(e.persona);
	cout<<"Salario: "<<e.salario<<endl<<endl;
}

int main (){
		
	Empleado var[3];
	Persona Veronica;
	Empleado Esteban; 
	
	
	Veronica.nombre = "Veronica";
	Veronica.edad = 20;
	Veronica.peso = 45;
	Veronica.nacimiento.dia = 2;
	Veronica.nacimiento.mes = 12;
	Veronica.nacimiento.anio = 1997;
	
	Esteban.persona.nombre ="Esteban";
	Esteban.persona.edad =19;
	Esteban.persona.peso =60;
	Esteban.persona.nacimiento.dia = 22;
	Esteban.persona.nacimiento.mes = 6;
	Esteban.persona.nacimiento.anio = 1998;
	Esteban.salario = 50000;
	
	var[0] = Esteban;
	

	for(int i=1;i<3;i++){
		cout<<"Ingrese el nombre del usuario: "<<endl;
		getline(cin,var[i].persona.nombre);
		cout<<"Ingrese la edad del usuario: ";
		cin>>var[i].persona.edad;
		cout<<"Ingrese el peso del usuario: "<<endl;
		cin>>var[i].persona.peso;
		cout<<"ingrese el dia de nacimiento del usuario: "<<endl;
		cin>>var[i].persona.nacimiento.dia;
		cout<<"ingrese el mes de nacimiento del usuario: "<<endl;
		cin>>var[i].persona.nacimiento.mes;
		cout<<"ingrese el anio de nacimiento del usuario: "<<endl;
		cin>>var[i].persona.nacimiento.anio;
		cout<<"ingrese el sueldo del usuario: "<<endl;
		cin>>var[i].salario;
		}
		
	MostrarPersona(Veronica);
	
	cout<<endl<<"Empleados \n"<<endl;
	
	for(int i=0;i<3;i++){
		MostrarEmpleado(var[i]);
	}
	
	
	system("pause");
	return 0;
}
