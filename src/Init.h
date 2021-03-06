/* 
 * File:   Init.h
 * Author: pedro
 */
#ifndef INIT_H
#define INIT_H
#include "MatrizDispersa.h"
#include "Transaccion.h"
#include "ListaDoble.h"
#include "Lista.h"
#include "Menu.h"

class Init
{
private:
    MatrizDispersa *matriz;
    ListaDoble<Transaccion*> *historialT;
    Lista<Usuario*>* catalogo;
    Menu *menu;
public:
    Init(/* args */);
    void start();
    void test();
    ~Init();
};

#endif