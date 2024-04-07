#include <iostream>
#include "../Headers/ListaCont.h"

using namespace std;

int main()
{
    ListaCont teste1(10);

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



    return 0;
}