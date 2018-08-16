#include <iostream>
#include <math.h>

using namespace std;

#define alpha 1.24

extern unsigned int var;

void calcParabolico(void);
void print_results(void);
float  vx0, vy0, x, y, vx, vy, v0, t, a0;


int main()
{
    unsigned short int des3 = -5;
  
    int var = 100;

    var += des3;

    //Calculando los parametros en la Tierra con g = 9.8 m/s*s
    calcParabolico();
    print_results();

    //Calculando los parametros en la Luna con g = 1.62 m/s*s
    calcParabolico();
    print_results();


    return 0;
}

void calcParabolico(void)
{
    const float g = 9.8;
    const float ALPHA = 0;
    

    vx0 = v0 * cos(ALPHA);
    vy0 = v0 * sin(ALPHA);

    vx = vx0;
    vy = vy0-g*t;

    x = vx*t;
    y = a0+vy0*t-(g*pow(t,2)/2);
}

void print_results(void)
{
    std::cout<<"Los resultados del calculo parabolico son: "<<std::endl;
    std::cout<<"Velocidad en x: "<<vx<<", ";
    std::cout<<"Velocidad en y: "<<vy<<", ";
    std::cout<<"Posicion en x: "<<x<<", ";
    std::cout<<"Posicion en y: "<<y<<std::endl;
}

void otros_calculos(void)
{
    /* Serie simple (1/[(x^2) + (x+1)]) para x entre 1 y 199*/
    for(int x=1; x<200; x++);
        //Agregue aqui la formula

    /* Volumen de la esfera Vol = 4/3*pi*R^3*/ 
    
    double  R=0;
    double  vol =0;
    const double  pi = 3.141593;
    vol = 4/3 * pi * pow(R, 3);
    
      //Agregue aqui la formula

    /* Raices de la ecuacion 
    (3*x^2) + (5*x) + 8  = 0 */
    
     double  x = 0;
     double Raices = 0;
     Raices = 0;
     Raices = (3*pow(x,2))+(5*x)+8;
          //Agregue aqui la formula

    /* Impedancia tipica de una linea de transmision
     * Z0 = [(J+wL)/(G+wC)]^(1/2)
     * w = frecuencia angular = 2*pi*f, f = 10kHz */
      const float f = 10000;
      float  wL, G, wC, w,  K, J,z0;
      z0 = pow(((J+wL)/(G+wC)),1/2);
      w = 2*pi*f;
        //Agregue aqui la formula

    /* Constante de fase de una fibra optica
     * B = {[((a^2)-(b^2))*c+(b^2)]^(1/2)}*betacero
     * betacero = w0*(mu*epsi)^(1/2)
     * w0 = frecuencia angular = 2*pi*f, f = 5GHz
     * mu = 0.00000125664
     * epsi = 0.00000000000088542  */
     float B, a, b, Betacero, c, w0;
     const float mu = 0.00000125664;
     const float epsi = 0.00000000000088542;
     
     B = (pow(((pow(a,2))-(pow(b,2)))*c+((pow(b,2))),1/2))*Betacero;
     
     Betacero = w0*pow((mu*epsi),1/2);
     
     //Agregue aqui la formula
}
