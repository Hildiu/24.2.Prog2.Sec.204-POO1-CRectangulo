//
// Created by Hilda Bermejo on 11/10/24.
//

#ifndef INC_08_SEMANA_POO_SEC204_CRECTANGULO_H
#define INC_08_SEMANA_POO_SEC204_CRECTANGULO_H

#include <iostream>
using namespace std;

class CRectangulo
{
    private:
      double largo;
      double ancho;
    public:
      CRectangulo() {}    //--- constructor por defecto, solo crea el objeto
      CRectangulo(double _largo, double _ancho): largo (_largo), ancho(_ancho) {}
      virtual ~CRectangulo() { cout << "Me estoy destruyendo...";}
      double area();
      double perimetro();
      //---  metodos de acceso
      void setLargo( double  _largo){ largo = _largo;}
      double getLargo(){ return largo; }

      void setAncho(double _ancho) {  ancho = _ancho;}
      double getAncho(){ return ancho;}
};


#endif //INC_08_SEMANA_POO_SEC204_CRECTANGULO_H
