#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>//Input
using std:: string;
using std:: to_string;
int menu();
int Ejercicio1();
int Ejercicio2();
int Ejercicio3();
int Ejercicio4();
int main(){
int opcion = 0;
	do{
	switch(opcion=menu()){
		case 1:
	            Ejercicio1();
	    break;
	
			case 2:
	                   Ejercicio2();
			break;
				case 3:
				   Ejercicio3();
				break;
				       case 4:
				       Ejercicio4();
				break;
					case 5:
						cout<<"El programa se cerrara"<<endl;
					break;
	}
}while(opcion!=5);
}
int menu(){
	while(true){
  	//cout<<"MENU"<<endl;
  	//mostrar tres opciones
  	//1.- Ejercicio 1
  	//2.- Ejercicio 2
  	//3.- Ejercicio 3
  	//4.- salir
  	cout<<"MENU"<<endl
  	<<"1.- Ejercico 1.1"<<endl
	<<"2.- Ejercicio 1.2"<<endl
  	<<"3.- Ejercicio 2"<<endl
  	<<"4.- Ejercicio 3"<<endl
  	<<"5.- salir"<<endl;
  	//pedir al usuario una opcion
  	cout<<"Ingrese una opcion: ";
  	int opcion =0;
  	//leer la opcion
  	cin>>opcion;
  	//validar la opcion
  	if(opcion>=1 && opcion<= 5){
  		//si es valido retornar
  		return opcion;
	  }
	  else{

  	//else mostrar mensaje de error al usuario
  	cout<<"La opcion elegida no es valida, ingrese un valor entre 1 y 4"<<endl;
  }
  }//end del while
  	return 0;
  }
int Ejercicio1(){
	string cadena="";
	int suma=0;//variable para sacar lo que produce el numero ingresado
	cout<<"Ingrese la cadena de numeros: "<<endl;
	cin>>cadena;
	//valida que el tamaño de la cadena sea par
	if(cadena.length()%2!=0){
	     cout<<"Ingrese una cadena con tamaño par"<<endl;
	     cout<<"Ingrese la cadena de numeros: "<<endl;
        cin>>cadena;
	}
	for(int i=0;i<cadena.length();i++){
		if(cadena[i] == cadena[i+1]){
			suma+=(int)cadena[i]-48;

		}
		//validacion para comparar el ultimo numero con el primero
		if(i==cadena.length()-1){
		  if(cadena[0]==cadena[i]){
		    suma+=(int)cadena[i-1]-48;
		  }
		}

	}
	cout<<"El numero "<<cadena<<" produce "<<suma<<endl;
}
int Ejercicio2(){
	string cadena="";
        int suma=0;//variable para sacar lo que produce el numero ingresado
        cout<<"Ingrese la cadena de numeros: "<<endl;
        cin>>cadena;
        //valida que el tamaño de la cadena sea par
        if(cadena.length()%2!=0){
             cout<<"Ingrese una cadena con tamaño par"<<endl;
             cout<<"Ingrese la cadena de numeros: "<<endl;
        cin>>cadena;
	}
	int pasos =0;//variables para contar la cantidad de pasos en los que debe comparar
	pasos = cadena.length()/2;
	for(int i=0;i<cadena.length();i++){
	   if(cadena[i]==cadena[i+pasos]){
	       suma+=((int)cadena[i]-48)+((int)cadena[i]-48);
	   }
	}
	cout<<"El numero "<<cadena<<" produce "<<suma<<endl;

}
int Ejercicio3(){
  int numero=0;//variable para el numero
  int f=0,suma=0,mul=0;//variables para la comprobacion del numero perfecto
  cout<<"Ingrese el numero: "<<endl;
  cin>>numero;
  string factores1 ="";//variables para guardar los factores del numero perfecto
 
  string factores2="";//variable para guardar los factores del numero perfecto genero del no perfecto
  cout<<"Factores del numero "<<numero<<endl;
  //comprueba si el numero es perfecto
  for(int i=1;i<numero;i++){
     mul = numero%i;
     if(mul==0){
	     suma+=i;
	     factores1+=to_string(i)+",";
	     //cout<<i<<endl;
  }
  }
if(numero==suma){
	cout<<"El numero "<<numero<<" es perfecto"<<endl;
	cout<<"Factores: "<<factores1<<endl;

}
else{
	cout<<"El numero "<<numero<<" no es perfecto"<<endl;
	mul=0;
	suma=0;
	//busca los numeros menores al numero no perfecto
	for(int perfecto = numero;perfecto>=0;perfecto--){
		factores2="";
		mul=0;
		suma=0;
		//cout<<perfecto<<endl;
		//empieza a verificar si los numeros generados son perfectos
           for(int j=1;j<perfecto;j++){
     mul = perfecto%j;
     if(mul==0){
	     factores2+=to_string(j)+",";
             suma+=j;
  }
	  }
	   if(perfecto==suma && perfecto!=0){
	     cout<<"El numero perfecto mayor que no supere P es: "<<perfecto<<endl;
             cout<<"Factores: "<<factores2<<endl;
	   }
	}
	
}
}
int Ejercicio4(){
string cadena="";
cout<<"Ingrese la cadena: "<<endl;
cin>>cadena;
int cont=0;
for(int i=0;i<cadena.length();i++){
   for(int j=i+1;j<cadena.length();j++){
       if(cadena[i] == cadena[j]){
	       cont++;
       }
   }

}
if(cont!=0){
	cout<<"No se pueden repetir caracteres"<<endl;
	cout<<"Ingrese la cadena: "<<endl;
cin>>cadena;
}
string intercalada="";
int x = cadena.length();
for(int i=0;i<cadena.length()*2;i++){
  int num = rand()%(cadena.length());//numero aletorio
  cout<<cadena[num];
  if(i==cadena.length()){
	 cout<<endl;
  }
}
}
