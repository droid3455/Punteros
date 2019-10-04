#include <iostream>

using namespace std;

void imprimirArreglo(int arr[], int tam)
{
    while(tam--)
    {
        cout<< *arr << " ";
        arr++;
    }
    cout << endl;
}

void sumarArreglo(int *arr, int tam)
{
    int suma=0;
    while(tam--)
    {
        suma+=*arr;
        arr++;
    }
    cout << suma << endl;
}

int sumarRecursivo(int *arr, int tam)
{
    if(tam==0)
    {
        return 0;
    }
    else
    {
        return *arr + sumarRecursivo(++arr, --tam);
    }
    /*Segunda forma
    if(tam==1)
            return *arr;
    return *arr + sumarRecursivo(arr+1,tam-1);
    */
}
void swap(int *ptr1, int *ptr2)
{
    int tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;

}
void invertir(int *arr, int tam)
{
    int *ptr;
    ptr = arr+ tam-1;
    for(int i=0;i< tam/2;i++)
    {
    swap(*arr, *ptr);
    arr++;
    ptr--;
    }
    cout<< *ptr << endl;
}

void invertirRecursivo(int *arr, int tam, int *ptr)
{
    ptr = arr+tam-1;
    while(tam--)
    {
        swap(*arr,*ptr);
        arr++;
        ptr--;
        return;
    }
    invertirRecursivo(arr++,tam, ptr--);

}
int main()
{

    int x[5]={2,3,4,5,6};
    int tam=5;
    /*
    imprimirArreglo(x, tam);
    sumarArreglo(x, tam)
    cout << sumarRecursivo(x,tam);
    int a=5;
    int b=10;
    int *ptr1 = &a;
    int *ptr2 = &b;
    swap(ptr1,ptr2);
    cout << a << " " << b << endl;

    invertir(x,tam);
    imprimirArreglo(x, tam);
    */
    invertirRecursivo(x,tam,0);
    imprimirArreglo(x,tam);
}
