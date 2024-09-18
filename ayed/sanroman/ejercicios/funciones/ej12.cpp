#include <iostream>

using namespace std;
int dia, mes, año, edad, masViejo = 0;
int pri = 0, seg = 0, ter = 0, cua = 0, qui = 0, sex = 0, sep = 0;
int mesOct = 0, antesJulio1990 = 0, mujeresPrimavera82 = 0;
char sexo;
string sexoViejo;


void edadAGrupoEtario(int x);

void habitantes();

void octubre();

void julio1990();

void primavera82();

string personaMasVieja(int edad);

int main()
{
  habitantes();

  cout << endl << "Personas por grupo etario: " << endl << "1er grupo: " << pri << endl << "2do grupo: " << seg << endl << "3er grupo: " << ter << endl << "4to grupo: " << cua << endl << "5to grupo: " << qui << endl << "6to grupo: " << sex << endl << "7mo grupo: " << sep << endl << endl;

  cout << "Hubieron " << mesOct << " nacimientos en octubre de todos los años" << endl;
  cout << "Hubieron " << antesJulio1990 << " nacimientos antes del 9 de julio de 1990" << endl;
  cout << "Hubieron " << mujeresPrimavera82 << " nacimientos de mujeres durante la primavera del 1982" << endl;
  cout << "El genero de la persona más vieja es: " << personaMasVieja(edad) << endl << endl;
}

string personaMasVieja(int edad)
{
  if  (edad > masViejo)
  {
    masViejo = edad;
    if (sexo == 'M')
    {
      sexoViejo = "Hombre";
    }
    else if (sexo == 'F')
    {
      sexoViejo = "Mujer";
    }
  }
  return sexoViejo;
}

void primavera82()
{
  if (sexo == 'F' && año == 1982)
  {
    if (dia >= 21 && mes == 9 || mes > 9 && mes < 12 || dia <= 21 && mes == 12)
    mujeresPrimavera82++;
  }
}

void julio1990()
{
  if (año == 1990 && mes == 7 && dia < 9)
  {
    antesJulio1990++;
  }
  else if (año < 1990)
  {
    antesJulio1990++;
  }
  else if (año == 1990 && mes < 7)
  {
    antesJulio1990++;
  }
}

void octubre()
{
  if (mes == 10)
  {
    mesOct++;
  }
}

void edadAGrupoEtario(int x)
{
  if (x <= 14)
  {
    pri++;
  }
  else if (x >= 15 && x <= 21)
  {
    seg++;
  }
  else if (x >= 22 && x <= 28)
  {
    ter++;
  }
  else if (x >= 29 && x <= 35)
  {
    cua++;
  }
  else if (x >= 36 && x <= 42)
  {
    qui++;
  }
  else if (x >= 43 && x <= 49)
  {
    sex++;
  }
  else if (x >= 50 && x <= 63)
  {
    sep++;
  }
}

void habitantes()
{
  while (true)
  {
    cout << "Ingrese día de nacimiento: ";
    cin >> dia;

    if (dia == 0){break;}

    cout << "Ingrese mes de nacimiento: ";
    cin >> mes;

    cout << "Ingrese año de nacimiento: ";
    cin >> año;
    
    edad = 2024 - año;

    cout << "Ingrese sexo ((M)asculino, (F)emenino): ";
    cin >> sexo;

    edadAGrupoEtario(edad);
    octubre();
    julio1990();
    primavera82();
    personaMasVieja(edad);
  }
}
