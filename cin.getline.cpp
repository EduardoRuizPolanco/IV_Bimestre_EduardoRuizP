#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
	
char palabra[20];
int longitud;

cout<<"Ingrese una cadena de palabras: ";
gets(palabra);

longitud=strlen(palabra);
cout<<"longitud = "<<longitud<<endl;

if(longitud>=10){
cout<<palabra<<" \n";
}
else{
cout<<"Su cadena es muy corta"<<endl;
}
	
return 0;
getch();
}
