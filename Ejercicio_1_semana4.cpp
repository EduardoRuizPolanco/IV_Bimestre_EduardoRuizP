#include <iostream>
#include <conio.h>

using namespace std;
int main() {

string nombre[10];
int a[5];
string dato;
char band = 'F';

for(int i=0; i<10; i++){
cout<<"Ingrese un nombre: ";
cin>>nombre[i];

}

	cout<<"\nIngrese el numero a buscar  ";
	cin>>dato;

int j;
while((band == 'F')&&(j<10)){
	
	if(a[j]==dato){
		band = 'V';
	}
	j++;
}
if(band == 'F'){
	cout<<"\El numero que vusca no existe";
}
else if(band == 'V'){
	cout<<"El nombre "<<dato<<" fue encontrado en la pos"<<j;
}


getch();
return 0;
}





//Ejercicios para subir a >github
//El profe los va a subir a Geducar
//Hacer una lista de 10 nombres y que se pueda buscar el nombre en la lista; si se encuentra que el programa muestre el nombre y su posicion sino que muestre el nombre no se encontro


