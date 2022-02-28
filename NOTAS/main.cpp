#include <iostream>

using namespace std;

int main()
{
    int Materia1, Materia2, Materia3, Materia4, Materia5, nota;
    int p;
        printf("-----[1]Materia1---\n");
        printf("-----[2]Materia2---\n");
        printf("-----[3]Materia3---\n");
        printf("-----[4]Materia4---\n");
        printf("-----[5]Materia5---\n");

    cout << "Nota de Materia1" << endl;
    cin >> Materia1;
    cout << "Nota de Matteria2" << endl;
    cin >> Materia2;
    cout << "Nota de Materia3" << endl;
    cin >> Materia3;
    cout << "Nota de Materia4" << endl;
    cin >> Materia4;
    cout << "Nota de Materia5" << endl;
    cin >> Materia5;
    cout << "Evaluacion de Notas finales" << endl;
    cout << "Primera Materia: " << endl;
    if (Materia1>=61)
        cout << "Usted Logro pasar el curso" << endl;
    else cout << "Usted No Logro Paso el curso" << endl;
    cout << "Segunda Materia: " << endl;
    if (Materia2>=61)
        cout << "Usted logro Pasar el curso" << endl;
    else cout << "Usted No Logor Pasar el curso" << endl;
    cout << "Tercera Materia: " << endl;
    if (Materia3>=61)
        cout << "Usted Logro Pasar curso" << endl;
    else cout << "Usted No Logro Pasar el curso" << endl;
    cout << "Cuarta Materia: " << endl;
    if (Materia4>=61)
        cout << "Usted Logro Pasar el curso" << endl;
    else cout << "Usted No Logro Pasar el curso" << endl;
    cout << "Quinta Materia: " << endl;
    if (Materia5>=61)
        cout << "Usted Logro Pasar el curso" << endl;
    else cout << "Usted No Logro Pasar el curso" << endl;
    return 0;
}
