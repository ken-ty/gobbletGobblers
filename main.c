#include <stdio.h>
#include <stdbool.h>
#include "GobbletGobblers.h"

bool isBoardFull(bitboard_t black_l, bitboard_t black_m, bitboard_t black_s,
    bitboard_t white_l, bitboard_t white_m, bitboard_t white_s);

int main (void) {
    bitboard_t black_l = 0x0000;
    bitboard_t black_m = 0x0000;
    bitboard_t black_s = 0x0000;
    bitboard_t white_l = 0x0000;
    bitboard_t white_m = 0x0000;
    bitboard_t white_s = 0x0000;

    // white_l = A1;

    bool isFull = isBoardFull(black_l, black_m, black_s, white_l, white_m, white_s); 

    printf("%d\n", isFull);

    return 0;
}

bool isBoardFull(bitboard_t black_l, bitboard_t black_m, bitboard_t black_s,
    bitboard_t white_l, bitboard_t white_m, bitboard_t white_s) {
    return ~(black_l|black_m|black_s|white_l|white_m|white_s) == 0;
}
