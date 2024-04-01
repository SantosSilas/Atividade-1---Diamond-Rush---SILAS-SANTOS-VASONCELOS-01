#include "diamond_rush.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

// Implementação dos métodos da classe Jogador
Jogador::Jogador(std::string nome) : nome(nome), posicaoX(0), posicaoY(0), diamantesColetados(0) {}

std::string Jogador::obterNome() {
    return nome;
}

void Jogador::definirPosicao(int x, int y) {
    posicaoX = x;
    posicaoY = y;
}

int Jogador::obterPosicaoX() {
    return posicaoX;
}

int Jogador::obterPosicaoY() {
    return posicaoY;
}

void Jogador::coletarDiamante() {
    diamantesColetados++;
}

int Jogador::obterDiamantesColetados() {
    return diamantesColetados;
}

// Implementação dos métodos da classe Mapa
Mapa::Mapa(int diamantes, int obstaculos) : quantidadeDiamantes(diamantes), quantidadeObstaculos(obstaculos) {}

void Mapa::gerar() {
    // Inicializa a grade com espaços vazios
    for (int i = 0; i < MAP_HEIGHT; ++i) {
        for (int j = 0; j < MAP_WIDTH; ++j) {
            grade[i][j] = ' ';
        }
    }

    // Coloca os diamantes aleatoriamente no mapa
    srand(time(nullptr));
    for (int i = 0; i < quantidadeDiamantes; ++i) {
        int x = rand() % MAP_WIDTH;
        int y = rand() % MAP_HEIGHT;
        grade[y][x] = 'D';
    }
}

void Mapa::exibir() {
    // Exibe o mapa na tela
    for (int i = 0; i < MAP_HEIGHT; ++i) {
        for (int j = 0; j < MAP_WIDTH; ++j) {
            std::cout << grade[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

bool Mapa::ehDiamante(int x, int y) {
    return grade[y][x] == 'D';
}

bool Mapa::ehObstaculo(int x, int y) {
    // Implementação dos obstáculos, se necessário
    return false;
}

