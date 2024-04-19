#include <iostream>
#include "../Headers/ListaCont.h"

using namespace std;

int main()
{
    ListaCont teste1(10);
    ListaCont teste2(5);

    cout<<"Teste dos inserir: "<< endl;
    teste1.insereInicio(3);
    teste1.imprime();

    teste1.insereInicio2(1);
    teste1.imprime();

    teste1.insereK(1,2);
    teste1.imprime();

    cout<<"Teste dos Remover"<< endl;

    cout<<"Teste dos Básicos"<< endl;
    
    cout<<"Teste dos Exs"<< endl;

    cout<<"Teste dos Outros"<< endl;
    teste2.insereFinal(3);
    teste2.insereFinal(4);
    cout<<"Lista Principal:"<< endl;
    teste2.imprime();
    
    
    ListaCont la(0);
    // la.insereFinal(6);
    // la.insereFinal(7);
    // la.insereFinal(8);
    // la.insereFinal(9);
    // la.insereFinal(10);
    
    cout<<"Lista A:"<< endl;
    la.imprime();


    ListaCont lb(3);
    lb.insereFinal(0);
    lb.insereFinal(1);
    lb.insereFinal(2);
    cout<<"Lista B:"<< endl;
    lb.imprime();

    cout<<"Final:"<< endl;
    teste2.intercala(&la,&lb);
    cout<<"Lista A:"<< endl;
    la.imprime();
    cout<<"Lista B:"<< endl;
    lb.imprime();
    cout<<"Lista Principal:"<< endl;
    teste2.imprime();




    return 0;
}