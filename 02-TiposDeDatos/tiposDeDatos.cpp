/*
* 02-TiposDeDatos
* Santiago Oliveira 168 606 9
* 28/05/2019
*/
#include <string>
#include <assert.h>
using namespace std;

void testValue(bool booleano)
{
  assert(booleano);
}
void testValue(string mail)
{
  assert(mail == "pruebaqwerty@gmail.com");
}
void testValue(unsigned edad)
{
  assert(edad == 21);
}
void testValue(int calificacion)
{
  assert(calificacion == 10);
}
void testValue(double promedio)
{
  assert(promedio == 10.00);
}

int main() {
    bool aprobado = true;
    string mail = "pruebaqwertygmail.com";
    mail.insert(11, 1, arroba);
    testValue(mail);
    unsigned edad = 21;
    testValue(edad);
    int calificacion = 10;
    testValue(calificacion);
    double promedio = 10.00;
    testValue(promedio);
    testValue(aprobado);

}
