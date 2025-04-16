/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int idade;
    bool vacina;
    
    cout << "Digite sua idade: " << endl;
    cin >> idade;
    
    cout << "Você está vacinado? (1 para SIM ou 0 para NÃO): " << endl;
    cin >> vacina;
    
    if(idade <= 12 || vacina == 0){
        cout << "É obrigatório o uso de mascara" << endl;
    }
    else{
        cout << "Não é obrigatório o uso de mascara" <<endl;
    }
    
    return 0;
    
}