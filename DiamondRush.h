#ifndef DIAMOND_RUSH_H
#define DIAMOND_RUSH_H

#include <vector>

// Definição das constantes para o tamanho do mapa
const int MAP_WIDTH = 10;
const int MAP_HEIGHT = 5;

// Definição da classe Jogador
class Jogador {
private:
    std::string nome;
    int posicaoX;
    int posicaoY;
    int diamantesColetados;

public:
    Jogador(std::string nome);
    std::string obterNome();
    void definirPosicao(int x, int y);
    int obterPosicaoX();
    int obterPosicaoY();
    void coletarDiamante();
    int obterDiamantesColetados();
};

// Definição da classe Mapa
class Mapa {
private:
    char grade[MAP_HEIGHT][MAP_WIDTH];
    int quantidadeDiamantes;
    int quantidadeObstaculos;

public:
    Mapa(int diamantes, int obstaculos);
    void gerar();
    void exibir();
    bool ehDiamante(int x, int y);
    bool ehObstaculo(int x, int y);
};

#endif
