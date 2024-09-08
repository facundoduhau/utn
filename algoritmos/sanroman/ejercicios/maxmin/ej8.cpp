#include <iostream>

using namespace std;

int main()
{
  string domicilio, nombre, domiciliomax;
  char tipo, genero, estudio, fin;
  int casa = 0, departamento = 0, integrantes, maxintegrantes = 0, sumaedad = 0, edadpromedio;
  int noestudio = 0, primario = 0, secundario = 0, terciario = 0, terciariof = 0, intfemenino = 0;
  int primarioinc = 0, secundarioinc = 0, terciarioinc = 0;
  int edad, encuestados = 0;
  float analfabetismo, pmt;


  while(true)
  {
    integrantes = 0;

    cout << "Ingrese domicilio del encuestado: ";
    cin >> domicilio;
    if(domicilio == "FIN"){break;}

    cout << "Que tipo de propiedad es? ((C)asa, (D)epartamento)): ";
    cin >> tipo;

    switch(tipo)
    {
      case 'C': {casa ++;} break;
      case 'D': {departamento ++;} break;
    }

    while(true)
    {

      cout << "Ingrese nombre y apellido del integrante encuestado: ";
      cin >> nombre;

      if (nombre == "FIN"){break;} // Rompe while loop
      encuestados++;
      integrantes++;
      
      if (integrantes > maxintegrantes)
      {
        maxintegrantes = integrantes;
        domiciliomax = domicilio;
      }

      cout << "¿Qué edad tiene?: ";
      cin >> edad;
      sumaedad += edad;
      edadpromedio = sumaedad/encuestados;

      cout << "¿Cual es su genero? ((F)emenino, (M)asculino): ";
      cin >> genero;
      if(genero == 'F')
      {
        intfemenino++;
      }

      cout << "¿Qué nivel de estudios alcanzó? ((N)o posee, (P)rimario, (S)ecundario, (T)erciario): ";
      cin >> estudio;
      cout << "¿Completó esos estudios? ((I)ncompleto, (C)ompleto): ";
      cin >> fin;

      switch(estudio)
      {
        case 'T':
          {
            if (fin == 'C')
            {
              if (genero == 'F')
              {
                terciariof++;
              }
              terciario++;
              secundario++;
              primario++;
            }
            else if (fin == 'I')
            {
              terciarioinc++;
              secundario++;
              primario++;
            }
          }
          break;

        case 'S':
          {
            if (fin == 'C')
            {
              secundario++;
              primario++;
            }
            else if (fin == 'I')
            {
              secundarioinc++;
              primario++;
            }
          }
          break;

        case 'P':
          {
            if (fin == 'C')
            {
              primario++;
            }
            else if (fin == 'I')
            {
              primarioinc++;
            }
          }
          break;

        case 'N':
          {
            if (edad > 10)
            {
              noestudio++;
            }
          }
          break;
      }
    }
  }

  analfabetismo = ((float)(noestudio * 100)/encuestados);

  pmt = ((float)(terciariof * 100)/intfemenino);

  cout << endl << "Cantidad de encuestados: " << encuestados << endl;
  cout << "Porcentaje de analfabetismo en la ciudad: " << analfabetismo << "%" << endl;
  cout << "Domicilio de la familia con mayor cantidad de integrantes: " << domiciliomax << endl;
  cout << "Edad promedio de todos los habitantes de la ciudad: " << edadpromedio << endl;
  cout << "Cantidad de encuestados con estudios secundarios incompletos: " << secundarioinc << endl;
  cout << "Porcentaje de mujeres con estudios terciarios completos: " << pmt << "%" << endl;
  cout << "Maximos integrantes en un domicilio: " << maxintegrantes << endl;
}
