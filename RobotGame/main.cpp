#include <iostream>
#include "player.h"
#include "mapcell.h"
#include "gamemap.h"

using namespace std;
gamemap map1;
int main()
{



    player hero;
    map1.drawPortada();
    //map.draw();
    while(map1.isGameOver==false)
    {
      cout << "Introduce comando de movimiento <w>, <a>, <s>, <d> : <x> --> Salir " << endl;
      hero.callInput();

      //Actualizar información del jugador en el mapa
      if(map1.setPlayerCell(hero.getValueX(), hero.getValueY()))
      {
     //   system("cls");
        map1.draw();
      } else
      {
       // system("cls");
        hero.resetToSafePosition();
        //Dibujamos el mapa
        map1.draw();
      }
      //map.draw();

    }

    return 0;
}
