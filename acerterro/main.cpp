#include <iostream>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <dos.h>

using namespace std;

int main(){
    int nivel_dificuldade, numero_portas;

    //Tela de in�cio
    for(int logo=1; logo<=25; logo++){
        cout<<"Hunting Madness"<<flush;
        system ("CLS");
    }

    cout<<"Hunting Madness\n\n";
    cout<<"Pressione qualquer tecla para continuar"<<flush;

    cin.get();

    system("CLS");

    //Sele��o de dificuldade
    seleciona_dificuldade:
    cout<<"Selecione uma das dificuldades a seguir:\n\n"<<flush;


    for(int dificuldade=1; dificuldade<=3; dificuldade++){
        cout<<dificuldade<<flush;
        cout<<"   "<<flush;
        if(dificuldade==1){
            cout<<"F�cil"<<flush;
        }else if(dificuldade==2){
            cout<<"M�dio"<<flush;
        }else if(dificuldade==3){
            cout<<"Dif�cil\n\n"<<flush;
        }
    }

    cout<<"Dificuldade escolhida: "<<flush;
    cin>>nivel_dificuldade;

    if(nivel_dificuldade <=0){
        system("CLS");
        goto seleciona_dificuldade;
    }else if(nivel_dificuldade > 3){
        system("CLS");
        goto seleciona_dificuldade;
    }

    //Jogo funcionando em cada dificuldade

    return 0;
}
