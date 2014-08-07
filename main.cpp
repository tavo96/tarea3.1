#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
#include <set>          // std::list
#include <map>          // std::list
using namespace std;

//http://www.cplusplus.com/reference/set/multiset/?kw=multiset
//http://www.cplusplus.com/reference/map/multimap/?kw=multimap
//

//agrega 'valor' a 'mi_set'
void agregarASet(set<int> *mi_set,int valor)
{
    mi_set->insert (valor);//Con esta funcion agregamos un valor a mi set
}

//agrega 'valor' a 'mi_map' usando la 'llave' como llave
void agregarMap(map<string, int> *mi_map, string llave, int valor)

{
    mi_map->insert(pair <string,int>(llave,valor));// con esta funcion agregamos un valor a mi map
}

//devuelve cuantos elementos de 'mi_multiset' tienen un valor de 'valor'
int contarElementosMultiset(multiset<int> mi_multiset,int valor)
{    http://www.cplusplus.com/reference/set/multiset/count/
    multiset<int>:: size_type i;
    i = mi_multiset.count(valor); //Utilizamos la funcion count para recorra multiset y devuelva cuantos elementos de un determinado valor hay
    return i;
}

//devuelve cuantos elementos de 'mi_multimap' usan 'llave' como llave
int contarElementosMultimap(multimap<string,int> mi_multimap,string llave)
{    http://www.cplusplus.com/reference/map/multimap/count/
     multimap<string,int>:: size_type i;
    i = mi_multimap.count(llave);//Utilizamos la funcion count para recorra multimap y devuelva cuantos elementos de un determinado valor hay

    return i;
}

//devuelve la suma de los elementos de 'mi_multiset' que usan 'llave' como llave
int sumaElementosMultiset(multiset<int> mi_multiset, int valor)
{
   int temp=0; //variable que guarda el elemento a sumar
    multiset<int>:: iterator it; //recorremos el multiset con un iterador
    for( it= mi_multiset.begin(); it!=mi_multiset.end(); it++)
    {
        if(*it==valor) //evaluar si el valor esta dentro de mi_multiset
        {
            temp = temp + *it; //suma los elementos
        }
    }
    return temp; //retorna los elementos sumados



}

//devuelve la suma de los elementos de 'mi_multimap' que usan 'llave' como llave
int sumaElementosMultimap(multimap<string, int> mi_multimap, string llave)
{
    int temp =0; // variable que guarda el elemento a sumar
    multimap<string,int>:: iterator it; // recorremos el multimap con un iterator
    for(it = mi_multimap.begin(); it!= mi_multimap.end(); it++)
    {
        if(it -> first == llave) //posicinar it al principio donde se encuentra la llave (string)
        {
            //si encuentra un valor con esa llave
            temp = temp + it-> second; // suma de los enteros o elementos dentro de la llave
        }
    }

    return temp;// retornamos temp
}

//el promedio de todos los elementos que tiene 'mi_multiset' (incluyendo valores repetidos)
int promedioElementosMultiset(multiset<int>mi_multiset)
{
   int suma=0; // Esta variable guarda el elemento a sumar
    multiset<int>:: iterator it; //Utilizar un Iterator para reccored el multiset
    for( it= mi_multiset.begin(); it!=mi_multiset.end(); it++)
    {
            suma = suma+ *it; //suma de cada elemento
    }
    int i= mi_multiset.size(); //tamaño de todo el multiset

    return suma/i; //retornamos la suma y lo dividimos x el tamañao del multiset
}

int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}
