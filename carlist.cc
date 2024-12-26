#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    cout << "Bienvenido a mi aplicación CarList" << endl;
    
    // Lista de marcas de coches
    vector<string> marcas = {"Toyota", "Ford", "BMW", "Audi", "Mazda", "Mecedes-Benz", "McLaren", "Nissan", "DMC", "Suzuki", "Maserati", "Ferrari"};

    cout << "Marcas de carros 'to guapas:\n";
    for (size_t i = 0; i < marcas.size(); ++i) {
        cout << i + 1 << ". " << marcas[i] << endl;
    }

    cout << "Gracias por usar mi aplicación" << endl

    return 0;
}

