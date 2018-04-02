#include <iostream>
#include <fstream> //para MANEJAR ARCHIVOS(ejm: leer, escribir)
#include <string>

void print_numbers (int nmax,std::string name); //string name porque el nombre de un archivo es una cadena de texto
void read_numbers ( std::string name );

int main (void)
{
  print_numbers(100,"datosfout.txt");//fout=file output
  print_numbers(200,"datosfout2.txt"); //otro archivo con mas datos

  read_numbers("datosfout.txt");
  read_numbers("datosfout2.txt");
  
  return 0;
}
void print_numbers(int nmax,std::string name)
{
  std::ofstream fout (name); //fout asociado al archivo , OFSTREAM= ESCRIBIR arhivo
  fout.precision (16); fout.setf (std::ios::scientific);//me lo configura para ambas funciones
  for ( int ii=1; ii<=nmax; ++ii){
  fout << ii <<"\t"<< 1.0/ii<< std::endl;//1.0 para double; FOUT= FILE OUTPUT
  }
  fout.close ();//liberar el recurso para poder usarlo despues
}
void read_numbers( std::string name)
{
  std::ifstream fin (name); // FIN= FILE INPUT ,IFSTREAM= LEER archivo 
  int n, sumn=0; //asignado para el archivo con 100 numeros 
  double x, sumx=0; // asignado para el archivo con 200 datos 
  while (fin){
    fin >> n >> x ;
    sumn += n; // la suma de los 100
    sumx += x; // la suma de los 200
  }
  fin.close ();
  std::cout <<sumn<<"\t"<<sumx<<std::endl; // me retorna la suma de los 2 
}
    
  
