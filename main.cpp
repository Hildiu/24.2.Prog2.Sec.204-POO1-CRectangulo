/*---------------------------------------------
 * Dato de Entrada:  largo, ancho (double)
 * Dato de Salida:  perimetro , area (double)
 --------------------------------------------*/


#include "CRectangulo.h"

int main()
{  CRectangulo     R1;

   R1.setLargo(34);
   R1.setAncho(12.45);
   cout << "El perimetro es: " << R1.perimetro() << "\n";
   cout << "El area es     : " << R1.area() << "\n";
   //--- creamos un segundo objeto
   cout << "Segundo objeto\n";
   double l, a;
   cout << "Largo: ";
   cin >> l;
   cout << "Ancho: ";
   cin >> a;
   CRectangulo R2(l,a);
   cout << "El perimetro es: " << R2.perimetro() << "\n";
   cout << "El area     es: " << R2.area() << "\n";
   //--- ahora vamos a cambiar el estado del objeto R2.
   //--- se vamos a sumar 20 al valor del largo y 20 al valo ancho
   R2.setLargo(R2.getLargo() + 20);
   R2.setAncho(R2.getAncho() + 20);
   cout << "El perimetro es: " << R2.perimetro() << "\n";
   cout << "El area     es: " << R2.area() << "\n";

    return 0;
}
