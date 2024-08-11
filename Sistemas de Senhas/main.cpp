#include <iostream>
#include <iomanip>
#include <chrono>
#include <ctime>
using namespace std;

int main() {
    int contador = 1;
    bool reiniciar = false;

    do {
        if (reiniciar) {
            contador = 0;
            cout << "Senha se reiniciara as 23:30" << endl;
            reiniciar = false;
        }

        cout << "Pressione [ENTER] para emitir uma senha ou pressione [s] para sair: ";
        char resposta = cin.get();

        if (resposta == 's' || resposta == 'S') {
            cout << "Saindo..." << endl;
            break;
        }

        auto now = chrono::system_clock::now();
        time_t currentTime = chrono::system_clock::to_time_t(now);
        tm* timeinfo = localtime(&currentTime);

        //Aqui se alteram as horas!
        if (timeinfo->tm_hour >= 23 && (timeinfo->tm_hour == 23 && timeinfo->tm_min == 30)) {
            reiniciar = true;
            continue;
        }

        cout << "Senha gerada: " << setfill('0') << setw(4) << contador << endl;
        contador++;
    } while (true);

    return 0;
}
