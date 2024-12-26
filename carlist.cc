#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Lista de marcas de coches
    vector<string> marcas = {"Toyota", "Ford", "BMW", "Audi", "Mazda", "Mecedes-Benz", "McLaren", "Nissan", "DMC", "Suzuki"};

    cout << "Marcas de carros 'to guapas:\n";
    for (size_t i = 0; i < marcas.size(); ++i) {
        cout << i + 1 << ". " << marcas[i] << endl;
    }

    return 0;
}

