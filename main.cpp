#include <iostream>

#include "List.h"
#include "List.cpp"

using namespace std;

int main()
{
    List<int> list_1 = List<int>();
    int ele;
    
    cout << "Lista al inicio " << endl;
   	cout<<list_1.show()<<endl<<endl;
    bool isEmpty = list_1.isEmpty();
    cout<< "Lista vacia?  =  "; 
    printf(isEmpty==1? "Verdadero \n\n" : "Falso\n\n");
    cout<<list_1.show()<<endl<<endl;

    cout << "Lista : " << endl;

    list_1.insert(1);
    list_1.insert(17);
    list_1.insert(12);
    list_1.insert(2);
    list_1.insert(8);
    list_1.insert(25);
    list_1.insert(30);
    list_1.insert(19);
    list_1.insert(7);
    cout<<list_1.show()<<endl<<endl;

    bool isEmpty2 = list_1.isEmpty();
    cout<< "Lista vacia?  =  "; 
    printf(isEmpty2==1? "Verdadero \n\n" : "Falso\n\n");

	cout << "Agrege un elemento: " << endl;
    cin >> ele;
    list_1.insert(ele);
    cout<<list_1.show()<<endl<<endl;

    cout << "Existe un elemento: " << endl;
    cin >> ele;
    bool exist = list_1.exist(ele);;
    printf(exist==1? "Elemento Existe \n\n" : "No Existe Elemento\n\n");
    
    cout << "Elimina un elemento: " << endl;
    cin >> ele;
    if(list_1.exist(ele)==1){
    	list_1.remove(ele);
	}else{
		cout<<"Elemento que se desea borrar no existe"<<endl;
	}
    
    cout<<list_1.show()<<endl<<endl;


    return 0;
}
