#include<stdio.h>
#include<conio.h>
#include<math.h>

float x,y,raiz;
float e_prueba, errorusuario;
float f_xl, f_xu, f_xr, xr;
float iteracion1, iteracion2;

float f_x(float x)
{
  return(pow(x,3)+4*pow(x,2)-10);
}

float operaciones(float x_l, float x_u, float e)
{
 do
  {
   f_xu=f_x(x_u);
   f_xl=f_x(x_l);
   xr=x_l-f_xl*((x_u-x_l)/(f_xu-f_xl));
   f_xr=f_x(xr);
   e_prueba=((xr-x_l)/xr);

iteracion1=(f_xl*f_xr);
iteracion2=(f_xu*f_xr);


   if(iteracion1>0&&iteracion2<0)
      {
       x_l=xr;
      }
    if(iteracion1<0&&iteracion2>0)
      {
       x_u=xr;
      }
  }
while(e_prueba>e);

raiz=xr;
return raiz;
}

int main()
{
printf("\nMetodo de posicion falsa");


printf("\nIntervalo 1: ");
scanf("%f", & x);
printf("\nIntervalo 2: ");
scanf("%f", & y);
printf("\nIngrese el valor del error minimo: ");
scanf("%f", & errorusuario);

operaciones(x,y,errorusuario);
printf("\nLa raiz obtenida con el error indicado %.2f es: %f",errorusuario,raiz);
getch();
return 0;
}
