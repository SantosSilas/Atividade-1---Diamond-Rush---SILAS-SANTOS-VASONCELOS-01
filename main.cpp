#include "diamond_rush.h"
#include <iostream>

int main() {
    // Cria um jogador
    Jogador jogador("Jogador1");

    // Cria um mapa com 3 diamantes e 0 obstáculos
    Mapa mapa(3, 0);
    mapa.gerar();

    // Exibe o mapa
    mapa.exibir();

    // Simula o jogador coletando um diamante
    jogador.coletarDiamante();

    // Exibe quantos diamantes o jogador coletou
    std::cout << "Diamantes coletados: " << jogador.obterDiamantesColetados() << std::endl;

    return 0;
}
