#ifndef TelloClientUDPH
#define TelloClientUDPH
#include <string>
#include "IRClientUDP.h"
#include <sstream>
#include <string>

using namespace std;
class TelloClientUDP
{private :
    IRClientUDP client;

public:
TelloClientUDP();
    string EnvoyerCommande(string commande);
    string ModeComande();
    string Decoller();
    string Aterrir();
    string Monter();
    string Descendre();
    string Gauche();
    string Droite();
    string Avant();
    string Arriere();
    string TournerHoraire(int deg);
    string TournerTrigo(int deg);
 };
#endif

