#include <iostream>
#include <stdlib.h> // menggunakan system("cls")
#include <conio.h> // menggunakan getch()
#define MAX 5 // batas stack yang ingin dibuat, boleh lebih
using namespace std; 


// nama nama panggilan mahasiswa :

int top=-1;
string Stack[MAX];

void push(){
    if(top == MAX-1){
        cout << ">> Stack sudah Penuh !" << endl;
    }else{
        top++;
        cout << ">> Masukan Data : ";
        cin >> Stack[top];
        cout << "\nPada Index ke '" << top << "' \n";
        cout << "Data [" << Stack[top] << "] Telah Ditambah ! " << endl;
    }
}

void pop(){
    if(top == -1){
        cout << ">> Stack Kosong !" << endl;
    }else{
        cout << "\nData [" << Stack[top] << "] pada index ke '" << top << "' dalam Stack Diambil !" << endl;
        Stack[top--];
    }
}

int clearr(){
    return top = -1;
}

void Print(){
    if (top == -1) {
 cout << "          Stack : ";
        cout << "\n===========================" << endl;
        cout << "          Empty ! \n===========================" << endl;
    }
    else {
        cout << "          Stack : ";
        cout << "\n===========================" << endl;
 for (int i = top; i >= 0; i--){
  cout << "     XXXXX[ " << Stack[i] << " ]XXXXX" << endl;
 }
 cout << "===========================" << endl;
    }
}

int main()
{
    int choose;
    do {
        Print();
        cout << "\n1. Push"
             << "\n2. Pop"
             << "\n3. Clear"
             << "\n4. Exit"
             << "\nCodeProgram ismynr.xyz"
             << "\nPergerakan ( TOP ) : " << top
             << "\n\n>> Choose : "; cin >> choose;
        switch (choose){
            case 1:
                push();getch();
                break;
            case 2:
                pop();getch();
                break;
            case 3:
                clearr();
                cout << "\nClear Succes" << endl;
                getch();
                break;
            case 4:
                cout << "Terima Kasih telah menggunakan program ini :)" << endl;
                getch();
                break;
            default:
                cout << "Pilihan tidak ada\nMasukan pilihan sesuai dengan daftar" << endl;
                getch();
                break;
        }
        system("cls");
    }while(choose !=4);
}
