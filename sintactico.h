#ifndef SINTACTICO_H
#define SINTACTICO_H

/*
 * File:   Sintactico.h
 * Author: userr
 *
 * Created on July 24, 2011, 10:51 PM
 */
#include "lexico.h"
using namespace std;

class Sintactico {
public:
    Lexico *lexico;
    //manejo de iterador acutal
    void resetIterador();
    int getIterador();
    void setIterador(int iterador);
    //manejo de tokens actuales
    Token getToken();
    Token nextToken();
    bool quedanTokens();

    //Analizar
    bool analizar(Lexico *lexico);

    //Select
    bool analizarSelect();
    bool select();
    bool from();
    bool where();
    bool listaDeCampos();
    bool campo();
    bool tabla();
    bool listaDeTablas();
    bool listaDeValidaciones();
    bool validacion();
    bool expIzq();
    bool expDer();
    bool opRel();
    bool opLogico();
    bool valor();

    //Update
    bool analizarUpdate();
    bool listaDeAsignaciones();
    bool asignacion();

    //Delete
    bool analizarDelete();

    //Insert
    bool analizarInsert();
    bool listaDeValores();
};
#endif // SINTACTICO_H