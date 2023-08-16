#include <iostream>
#include <conio.h>

using namespace std;
int main() {
	
int fila, columnas;


cout<<"La matriz es de 3X3"<<endl;

int mat[3][3];

for(int i=0; i<3; i++){
for(int j=0; j<3; j++){
cout<<"ingrese el dato en la posicion: "<<i<<","<<j<<endl;
cin>>mat[i][j];
}	
}
cout<<"La Matriz es"<<endl;
for(int i=0; i<3; i++){
for(int j=0; j<3; j++){
if(i == j){
cout<< mat[i][j] <<" ";
}
else{
cout<<0<<" ";
}
}
cout<<endl;	
}	
return 0;
getch();
}
