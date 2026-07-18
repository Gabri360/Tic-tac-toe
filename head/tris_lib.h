#ifndef TRIS_LIB
#define TRIS_LIB
#define _XOPEN_SOURCE_EXTENDED 1
#include <stdio.h>
#include <unistd.h>
#include <locale.h>
#include <ncurses.h>
#include <stddef.h>
#include <stdlib.h>
#include <wchar.h>
#include <time.h>

typedef struct{
    int rig,col,t,sign,occup;
}agg;

void title(int p);

void frame(int p);

void disegna_griglia(int p);

void disegna_sign1(int riga, int colonna, int tipo);

void disegna_sign2(int riga, int colonna, int tipo);

void disegna_sign3(int riga, int colonna, int tipo);

void disegna_sign(int riga, int colonna, int tipo);

void disegna_punt_upd(int riga, int colonna);

void disegna_punt(int riga, int colonna);

void disegna_state(int state[3][3]);

void disegna_sign_upd(int state_upd[4],int t, int state[3][3],int *sign, int cpm,int *move_c,int diff);

void init_state(int state[3][3]);

int verify_end(int state[3][3],int win[3]);

void disegna_win(int win[3]);

void stp_win(int i);

void stp_tab(int dat[2]);

void comp_move_hard(int state[3][3],int sign,int state_upd[4]);

void comp_move_medium(int state[3][3],int sign,int state_upd[4]);

void comp_move_easy(int state[3][3],int state_upd[4]);

#endif