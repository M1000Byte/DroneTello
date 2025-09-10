#include <iostream>
#include <tchar.h>
#include "IRClientUDP.h"
#include "TelloClientUDP.h"
#include <conio.h>

using namespace std;
int main(){
int c;
TelloClientUDP tello;
tello.ModeComande();
//IRClientUDP client;
//client.OuvrirLaSocketDeCommunication("192.168.10.1",8889);
do{
 c=_getch();
    if (c=='k') {
    tello.Decoller();
    }else if (c=='d') {
              tello.Droite();
              }else if (c=='q') {
                   tello.Gauche();
                   }else if (c=='z') {
                    tello.Avant();
                         }else if (c=='s') {
                              tello.Arriere();
                               }else if (c=='8') {
                                tello.Monter();
                                     }else if (c=='2') {
                                           tello.Descendre();


   }else{
       tello.Aterrir();
        }

}while (c!='w');

cin.get();
return 0;
}

