#include <iostream>
#include <string>
#include <utility>
#include <sstream>
using namespace std;
bool vvod(double *array,unsigned int size)
{
    string stroka;
    getline(cin,stroka);
    istringstream stream(stroka);
    for(unsigned int i=0;i<size;i++)
    {
        if(!(stream>>array[i])){
            cout<<"nepolnuy massiv";
            return false;
        }   
    }
    return true;
}
void selection_sort(double *array, unsigned int size){
    for(unsigned int i=0; i<size-1; ++i){
        double min=array[i+1];
        unsigned int k=i+1;
        for(unsigned int j=i+1; j<size; ++j){
            if(array[j]<min){
                min=array[j];
                k=j;
            }
            if(min<array[i]){
                swap(array[i], array[k]);
            }
        }
    }
}
void vyvod(unsigned int size,double *array)
{
    for(unsigned int i=0;i<size;i++)
    {
        cout<<array[i]<<' ';
    }
}
unsigned int size;

int main()
{
    cin>>size;
    cin.get();
    double *array=new double[size];
    if(vvod(array,size))
    {
        selection_sort(array,size);
        vyvod(size,array);
    }
    delete[]array;
}
