#include <iostream>

using namespace std;

int main()
{
    string Nombre;
    int index;
    char decision = true;
    char input = ' ';

    cout << "Para iniciar ingresa tu nombre: " << endl;
    cin >> Nombre;
    cout << "Hola " << Nombre << " ahora escribe que animalito te gustaria ser (escribe tu respuesta, puedes elegir el que gustes)" << endl;
    cout << "Elige 1 para Gatito" << endl;
    cout << "Elige 2 para Pandita" << endl;
    cin >> index;
    string Animalito[3] = { "x", "Gatito", "Pandita" };
    string currentAnimalito = Animalito[index];
    cout << "Okay " << currentAnimalito << " por ultimo elige que instrumento quieres tocar:" << endl;
    cout << "a) Guitarra" << endl;
    cout << "b) Bateria" << endl;
    cout << "c) Piano" << endl;

    do
    {
        cin >> input;

        if (input == 'a')
        {
            cout << "Eras un " << currentAnimalito << " universitario, excelente al momento de tocar guitarra, con ganas de romperla y proximo a entrar a Pink Floyd para ser una leyenda en la guitarra." << endl;
            cout << " ** Vuelve a intentar con una opcion diferente o presiona 'x' para terminar ** " << endl;
        } else if (input == 'b')
        {
            cout << "En los titulares resaltas como el mejor " << currentAnimalito << " en la historia en dominar las baquetas, el baterista mas joven de la decada." << endl;
            cout << " ** Vuelve a intentar con una opcion diferente o presiona 'x' para terminar ** " << endl;
        } else if (input == 'c')
        {
            cout << "En las grandes ligas, te eligen como el " << currentAnimalito << " con mejor destreza en el piano para crear el soundtrack de The Conjuring." << endl;
            cout << " ** Vuelve a intentar con una opcion diferente o presiona 'x' para terminar ** " << endl;
        } else if (input == 'x')
        {
            decision = false;
        }
        else
        {
            cout << "Solo puedes elegir las opciones a, b o c. Vuelve a intentar o presiona 'x' para terminar" << endl;
        }
    } while (decision == true);


    return 0;
}
