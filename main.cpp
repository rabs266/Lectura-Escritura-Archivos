#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    ofstream out ("test.txt"); //Crear el archivo de texto
    out << 12345 << ' '; //Escribir en el acrhivo
    out << 3.5 << ' ';
    out << 5.2f << ' ';
    out << true << ' ';
    out << 'f' << ' ';
    out << "qwerty" << ' ';

//    out.put('t'); //Se escribe un char en el archivo
//    out.put(65); //Se escribe un char Ascci en el archivo
    out.close();//Cerrar el archivo

    //Leer los archivos
    ifstream in ("test.txt");
    int a;
    double b;
    float c;
    bool d;
    char e;
    string f;

    in >> a;
    in >> b;
    in >> c;
    in >> d;
    in >> e;
    in >> f;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;

    return 0;
}
