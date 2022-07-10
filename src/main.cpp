/*********************************************************************
// Canvas2D
// Autor: Cesar Tadeu Pozzer
//        04/2021
// *********************************************************************/

#include <GL/glut.h>
#include <GL/freeglut_ext.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "gl_canvas2d.h"


int mx, my; //coordenadas do mouse


//funcao chamada continuamente. Deve-se controlar o que desenhar por meio de variaveis
//globais que podem ser setadas pelo metodo keyboard()
void render()
{

}

//funcao para tratamento de mouse: cliques, movimentos e arrastos
void mouse(int button, int state, int wheel, int direction, int x, int y)
{
   printf("\nmouse %d %d %d %d %d %d", button, state, wheel, direction,  x, y);

   mx = x; //guarda as coordenadas do mouse para exibir dentro da render()
   my = y;
}

//funcao chamada toda vez que uma tecla for pressionada
void keyboard(int key)
{
}


//funcao chamada toda vez que uma tecla for liberada
void keyboardUp(int key)
{
}


int main(void)
{
   int screenWidth = 1024, screenHeight = 768; //largura e altura inicial da tela. Alteram com o redimensionamento de tela.
   init(&screenWidth, &screenHeight, "Trabalho 3 - Jeferson Rodrigues Silva");
   run();
}
