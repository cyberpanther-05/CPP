// comentario Unilinear 

/*
comentarios
mutilineales
klk mi gente 
*/
    
// importo la libreria nativa "iostream obligatorio"
// me permite interactual con un programa desde cero
#include <iostream>


 // defino la funcion principal *obligatorio que se llame main 
 int main() {
     
     // Mostrar informacion en pantalla
   std::cout << "Tipos de datos en c++:" << std::endl;
   //texto
   std::cout <<"Kevin Feliz Henrizquez" << std::endl;
   std::cout <<"4" << std::endl;
   
   //numero entero
   std::cout <<4<<std::endl;
   
   //decimal
   std::cout <<4.5 << std::endl;
   
   //booleanos:
   //se presenta con un 1 si se verdadero, y con un 0 si es falso
   std::cout <<(5 < 4) << std::endl;
   std::cout <<(5 == 4) << std::endl;
   std::cout <<(5 > 4) << std::endl;
   std::cout << true << std::endl;
   std::cout << false << std::endl;
   
   //para controlar el flujo de nuestra logica
   //permiten comprar valores
   // controlan que bloque de codigo se va a ejecutar,dependiendo del resultado de la comparacion
   //declaramos una variable llamada edad, y le asigno un valor numerico de tipo entero.
   int edad = 39;
   
   //estructura basica de un if
   if (edad <= 1 && edad >=17) {
       std::cout <<"Eres menor de edad" <<std::endl;
   } else if (edad <= 18 && edad >=59) {
       
   } else {
      std::cout << "Eres un envejeciente" <<std::endl;
   }
   
   return 0;
   
 }
