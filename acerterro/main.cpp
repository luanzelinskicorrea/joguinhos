#include <iostream>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <dos.h>

using namespace std;

int main(){
    int nivel_dificuldade, numero_portas, qtd_municoes, qtd_vidas;

    //Tela de início
    for(int logo=1; logo<=25; logo++){

        cout<<"Hunting Madness"<<flush;
        system ("CLS");

    }

    cout<<"Hunting Madness\n\n";
    cout<<"Pressione qualquer tecla para continuar"<<flush;

    cin.get();

    system("CLS");

    //Seleção de dificuldade
    seleciona_dificuldade:
    cout<<"Selecione uma das dificuldades a seguir:\n\n"<<flush;


    for(int dificuldade=1; dificuldade<=3; dificuldade++){

        cout<<dificuldade<<flush;
        cout<<"   "<<flush;

        if(dificuldade==1){

            cout<<"Fácil"<<flush;

        }else if(dificuldade==2){

            cout<<"Médio"<<flush;

        }else if(dificuldade==3){

            cout<<"Difícil\n\n"<<flush;

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
    if(nivel_dificuldade == 1){

        numero_portas = 3;
        qtd_municoes = 5;
        qtd_vidas = 3;

    }else if(nivel_dificuldade == 2){

        numero_portas = 5;
        qtd_municoes = 8;
        qtd_vidas = 3;

    }else if(nivel_dificuldade ==3){

        numero_portas = 7;
        qtd_municoes = 5;
        qtd_vidas = 3;

    }
    return 0;
}
