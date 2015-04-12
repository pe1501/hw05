// Author:Oscar Garcia Avila
// Date:4/11/2015
// Version:0.1

/*
  Homework 05
  this assignment muestra la sucesion de fibonacci y la proporcion divina almacenodos en un bufer de datos
*/
#include <iostream>
#include <math.h>//para usar la sqrt
int main ()
{
 char my_memory[1024];//reservamos un espacio de memoria de 1024 caracteres
 
	*((double*)(my_memory+1))=(1+sqrt(5))/2;//se hace una conversion explicita de datos de char a double en el espacio de memoria de buffermy_memori+1 
	*((double*)(my_memory+10))= 2*(1+sqrt(5))/2,//y se le asina un valor
	*((double*)(my_memory+20))= 3*(1+sqrt(5))/2;
	*((int*)(my_memory+30))=1;//se hace una conversion explicita de datos de char a entero en el espacio de memoria de buffermy_memori+1 
    *((int*)(my_memory+40))=1;//y se le asina un valor
    *((int*)(my_memory+50))=2;
    *((int*)(my_memory+60))=3;
	*((int*)(my_memory+70))=5;
    *((int*)(my_memory+80))=8;
    *((int*)(my_memory+90))=13;
    *((int*)(my_memory+100))=21;
    *((int*)(my_memory+110))=34;
    *((int*)(my_memory+120))=55;
	std::cout<<"LA PROPORCION DIVINA"<<std::endl;//se pone el mensaje desde la salida estandar 
	std::cout<<*((double*)(my_memory+1))<<"   "<<*((double*)(my_memory+10))<<"   "<<*((double*)(my_memory+20))<<std::endl;//se imprimen los valores de la 
	std::cout<<"LA SUCESION DE FIBONACCI"<<std::endl;//proporcion divina tomados de el buffer de datos
	for (int i=0;i<1;i++){
	std::cout<<*((int*)(my_memory+30))<<" "<<*((int*)(my_memory+40))<<" "<<*((int*)(my_memory+50))<<" "<<*((int*)(my_memory+60))<<" ";
	std::cout<<*((int*)(my_memory+70))<<" "<<*((int*)(my_memory+80))<<" "<<*((int*)(my_memory+90))<<" "<<*((int*)(my_memory+100))<<" ";
	std::cout<<*((int*)(my_memory+110))<<" "<<*((int*)(my_memory+120));//se imprimen los valores de la succesion de fibonacci tomados de el buffer de datos 
}
  return 0;
}
