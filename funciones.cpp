#include <iostream>

using namespace std;
//metodo
void  suma(int &num1, int &num2){
	int resultado=0;
	num1+=1;//11
	num2+=1;//21
	resultado = num1+num2;
	cout<<resultado<<endl;
}

int suma1(int num1,int num2,int num3){
	int resultado=0;
	resultado = num1+num2+num3;
	return resultado;
}
main(){
	int a=10, b=20;
suma(a,b);	
cout<<"A:"<<a<<endl;
cout<<"B:"<<b<<endl;
cout<<"____________________________"<<endl;
cout<<suma1(30,40,10)<<endl;
	system("pause");
}
