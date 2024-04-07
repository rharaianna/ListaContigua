#ifndef LISTACONT_H
#define LISTACONT_H

#pragma once

class ListaCont
{
public:
    //Construtor e Destrutor
    ListaCont(int tam);
    ~ListaCont();

    //Básicos (fáceis)
    int get(int k);
    void set(int k, int val);
    void imprime();

    //Insere
    void insereInicio(int val);
    void insereK(int k, int val);
    void insereFinal(int val);
    void insereInicio2(int val);

    //Remove
    void removeInicio(int val);
    void removeK(int k, int val);
    void removeFinal(int val);
    void removeInicio2();

    //Ex slide (tranquilos)
    int numNos();
    void limpar();
    int buscaMaior(int val);
    void insereValores(int t, int v[]);

    //Outros
    ListaCont* copia();
    ListaCont* concatena(ListaCont *l2);





private:
    int max; //Capacidade máxixa
    int n;   //Número de nós
    int *vet; //ponteiro que será direcionado para o vetor que armazena a lista
    void aumentaCapacidade();
};

#endif