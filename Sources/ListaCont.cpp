#include <iostream>
#include "../Headers/ListaCont.h"

using namespace std;

// Construtor e destrutor
ListaCont::ListaCont(int tam)
{
    max = tam;
    n = 0;
    vet = new int[max]; 
}
ListaCont::~ListaCont()
{
    delete [] vet;
}

//Básicos
int ListaCont::get(int k)
{
    if(k>=0 && k<=n) //garante que o no k pedido existe um nó preenchido
    {
        return vet[k];
    }
    cout<<"Posição inválida"<< endl;
    exit(1);
}
void ListaCont::set(int k, int val)
{
     if(k>=0 && k<=n) //garante que o no k pedido existe um nó preenchido
    {
        vet[k]= val;
    }
    else
    {
         cout<<"Posição inválida"<< endl;
    }
}
void ListaCont::imprime()
{
    cout<<"Lista: ";
    for(int i =0; i<n ;i++)
    {
        cout<<  vet[i] << " ";
    }
    cout<<endl;
}
void ListaCont::aumentaCapacidade()
{
    cout << "Aumentando a capacidade do vetor" << endl;
    int *temp = new int[max*2];
    for(int i = 0; i < max; i++)
        temp[i] = vet[i];
    delete [] vet;
    vet = temp;
    max *= 2;
}

//Insere
void ListaCont::insereK(int k, int val){
    if(k>=0 && k<max){
        if (n==max){
        aumentaCapacidade();
        }
        for(int i = n; i>k;i--){
            vet[i]=vet[i-1];
        }
        vet[k]=val;
        n++;
    }
    else{
        cout<<"Posição inválida"<<endl;
    }
}
void ListaCont::insereInicio(int val){
    if(n==0){
        cout<<"Primeiro elemento adicionado na lista";
        vet[n]=val;
        n++;
    }
    else{
        insereK(0,val);
    }
}
void ListaCont::insereFinal(int val){
    if (n==max){
        aumentaCapacidade();
    }
    vet[n]=val;
    n++;
}
void ListaCont::insereInicio2(int val){
    if (n==max){
        cout<<"Dobrando a capacidade da lista";
        int * temp = new int[max*2];
        temp[0]= val;
        for(int i = 0; i<max;i++){
            temp[i+1]=vet[i];
        }
        delete[] vet;
        vet= temp;
        max*=2;
        n++;
    }
    else{
        for(int i=n;i>0;i--){
            vet[i]= vet[i-1];
        }
        vet[0]=val;
        n++;
    }
}

//Remove
void ListaCont::removeK(int k, int val){
    if(k>=0 && k<n){
        for(int i= k ; i<n-1;i++){
            vet[i]=vet[i+1];
        }
        n--;
    }
    else{
        cout << "Posicao invalida" << endl;
    }
}
void ListaCont::removeFinal(int val){
    if(n>0){
        n--;
    }
    else{
        cout<<"Lista vazia"<<endl;
    }
    
}
void ListaCont::removeInicio(int val){
    if(n>0){
        removeK(0,val);
    }
    else{
        cout<<"Lista vazia"<<endl;
    }
}  
void ListaCont::removeInicio2(){
    if(n > 0)
    {
        for(int i = 0; i < n-1; i++)
            vet[i] = vet[i+1];
        n--;
    }
    else
        cout << "Lista vazia" << endl;
}

//Ex slide
int ListaCont::numNos(){
    return n;
}
void ListaCont::limpar(){
    n = 0;
}
int ListaCont::buscaMaior(int val){
    for(int i =0;i<n;i++){
        if(vet[i]>val)
            return i;
    }
    return -1;
}  
void ListaCont::insereValores(int t, int v[]){
    if(t+n<max){
        for(int i = 0; i<t; i++){
            vet[n]=v[i];
            n++;
        }
    }
    else{
        cout<<"O vetor não cabe na lista"<< endl;
    }
}

//Outros
ListaCont* ListaCont::copia(){
    ListaCont *nova = new ListaCont(max);
    for(int i =0;i<max;i++){
        nova->vet[i]= vet[i];
    }
    return nova;
}
ListaCont* ListaCont::concatena(ListaCont *l2){
    ListaCont *nova = new ListaCont(max+l2->max);
    for(int i = 0;i<n;i++){
        nova->vet[i]= vet[i];
    }
    for(int i = 0;i<l2->n;i++){
        nova->vet[i+n]=l2->vet[i];
    }
    nova->n = n + l2->n;

    return nova;
}