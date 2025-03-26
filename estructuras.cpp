#include <iostream>

using namespace std;

struct Estudiante{
	int *codigo;
	string *nombre;
	int **notas;
};

main(){
	Estudiante estudiante;
	int fila=0, columna=0;
	cout<<"Cuantos Estudiantes deseas Ingresar:";
	cin>>fila;
	cout<<"Cuantos filas Deseas Ingresar: ";
	cin>>columna;
	
	estudiante.codigo=new int[fila];
	estudiante.nombre=new string[fila];
	estudiante.notas= new int *[fila];
	for(int i=0; i<fila;i++){
		estudiante.notas[i]=new int[columna];
	}
	
	cout<<"_________________________Ingreso de Notas______________"<<endl;
		for(int i=0; i<fila;i++){
		cout<<" Nota["<<i<<"]: ";
			 cin>>estudiante.codigo[i];
			 cin.ignore();
			 cout<<"Nombre Completo:["<<i<<"]:";
		 	 getline(cin,estudiante.nombre[i]);
				for(int ii=0; ii<columna;ii++){
					cout<<"Ingrese Nota["<<ii<<"]: ";
					cin>>*(*(estudiante.notas+i)+ii);
				}
				cout<<"_____________"<<endl;
		}
	cout<<"__________Mostrar los Datos__________________"<<endl;
			for(int i=0; i<fila;i++){
		cout<<" Nota["<<i<<"]: "<<estudiante.codigo[i]<<endl;
			 cin.ignore();
			 cout<<"Nombre Completo:["<<i<<"]:"<<estudiante.nombre[i]<<endl;
				for(int ii=0; ii<columna;ii++){
					cout<<"Ingrese Nota["<<ii<<"]: "<<*(*(estudiante.notas+i)+ii)<<endl;
					}
						cout<<"_____________"<<endl;
				}
				

	for(int i=0; i<fila;i++){
	delete []estudiante.notas[i];
	}
	delete []estudiante.codigo;
	delete [] estudiante.nombre;
	 delete [] estudiante.notas;
	
				
	
		system("pause");
	}

/*main(){
	
	Estudiante estudiante;
	for (int i=0; i<2; i++){
		cout<<"_____________________________"<<endl;
			cout<<"Ingrese codigo: ";
	cin>>estudiante.codigo[i];
	cin.ignore();
	cout<<"Ingrese Nombre: ";
	getline(cin,estudiante.nombre[i]);
	cout<<"Ingrese Nota: ";
	cin>>estudiante.nota[i];
	
	}
		for (int i=0; i<2; i++){
				cout<<"_____________________________"<<endl;
			cout<<"Codigo: "<<estudiante.codigo[i]<<endl;
	cout<<"Nombre Completo:"<<estudiante.nombre[i]<<endl;
	cout<<"Nota:"<<estudiante.nota[i]<<endl;
		
	}	*/
	

