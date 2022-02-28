#include <iostream>

using namespace std;

void drawMap(int posX,int posY,char gameMap[9][9]){
  for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
      if(posX==j && posY==i)
        {
            cout<<"R";
        }
      else
      {
            cout<<gameMap[i][j];
      }
    }
    cout<<endl;
  }
}
int main(){
  int posX=3;
  int posY=3;
  char map[9][9]={{'1','1','1','1','1','1','1','1',},
        {'1','0','0','0','0','0','0','0','0','1',},
		  {'1','0','0','0','0','0','0','0','0','1',},
		  {'1','0','0','0','0','0','0','0','0','1',},
		  {'1','0','0','0','0','0','0','0','0','1',},
		  {'1','0','0','0','0','0','0','0','0','1',},
		  {'1','0','0','0','0','0','0','0','0','1',},
		  {'1','0','0','0','0','0','0','0','0','1',},
		  {'1','0','0','0','0','0','0','0','0','1',}
		  {'1','1','1','1','1','1','1','1',}};
  char teclado;
  bool gameOver= false;
  drawMap(posX,posY,map);
  while(!gameOver)
  {
    cout << "Bienvenido(a)"  << endl;
    cout << "Controles Teclas --> w(arriba), a(izquierda), d(derecha) y s(abajo)" << endl;
    cout << "Controles Teclas --> p(Salida)" << endl;
    cin >> teclado;
    switch (teclado)
    {
        case 'a':
            if(posX!=0)
            {
             posX-=1;
            }
            break;
        case 'd':
            if(posX!=8)
            {
             posX+=1;
            }
            break;
        case 'w':
            if (posY!=8)
            {
              posY-=1;
            }
            break;
        case 's':
            if (posY!=8)
            {
              posY+=1;
            }
            break;
        case 'p':
            gameOver=true;
        default:
            break;
    }
  drawMap(posX,posY,map);
  }
 return 0;
}
