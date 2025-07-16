// @Date: 25-7-14
// @Author: CarryLee
// @File: function.py
// @Info:

#ifndef NUAZA_S_FANORONA_FUNCTION_H
#define NUAZA_S_FANORONA_FUNCTION_H

#include <vector>
#include <string>

const int SIZE_WIDTH = 9;
const int SIZE_HEIGHT = 5;
const char PLAYER1 = 'player1';
const char PLAYER2 = 'player2';
const char EMPTY = '.';

void printBoard(const std::vector<std::vector<char>>& board);
void makeMove(std::vector<std::vector<char>>& board, int startX, int startY, int endX, int endY, char player);
bool isValidMove(const std::vector<std::vector<char>>& board, int startX, int startY, int endX, int endY, char player);
bool checkWin(const std::vector<std::vector<char>>& board);

#endif //NUAZA_S_FANORONA_FUNCTION_H
