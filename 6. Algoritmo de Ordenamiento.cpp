#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string nombresArray[] = {"Juan", "Maria", "Pedro", "Ana", "Luis"};
    vector<string> nombres(nombresArray, nombresArray + sizeof(nombresArray) / sizeof(nombresArray[0]));

    // Ordenar los nombres usando el algoritmo de sort
    sort(nombres.begin(), nombres.end());

    // Mostrar los nombres ordenados
    cout << "Nombres ordenados:" << endl;
    for (vector<string>::iterator it = nombres.begin(); it != nombres.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}


