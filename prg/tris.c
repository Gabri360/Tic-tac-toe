#include "../head/tris_lib.h"


#define WIDTH 80
#define HEIGHT 24
int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL)); 
    initscr();
    noecho();
    curs_set(FALSE);
    nodelay(stdscr, TRUE);
    keypad(stdscr, TRUE);
    int input,indp_rig=0,indp_col=0,ind_list=0,cpm=1,move_c=0;
    int state_upd[4];
    unsigned long t=0;
    int win[3],win_dat[2]={0,0};
    int sign=1,sign_r=1;
    int state[3][3];
    init_state(state);
    title(1);
    
    while(1)
    {
        clear();
        title(0);
        mvaddstr(20,22,"Premi INVIO per giocare");
        input=getch();
        if(input=='q'){endwin();exit(1);}
        if(input == '\n') break;
        refresh();
        napms(50);
    }
    while(1)
    {
        if(win_dat[0]!=0||win_dat[1]!=0)
        stp_tab(win_dat);
        disegna_griglia(1);
        
        while (1) 
        {
            clear();
            disegna_griglia(0);
            if(win_dat[0]!=0||win_dat[1]!=0)
            stp_tab(win_dat);
            input=getch();
            if(input=='q'){endwin();exit(1);}
            if(input=='r')
            {
                init_state(state);
                for(int i=0;i<4;i++)
                state_upd[i]=0;
                sign=1;
                sign_r=1;
            }
            if((input=='w'||input==KEY_UP)&&indp_rig!=0) {indp_rig--;}
            if((input=='s'||input==KEY_DOWN)&&indp_rig!=2) {indp_rig++;}
            if((input=='a'||input==KEY_LEFT)&&indp_col!=0) {indp_col--;}
            if((input=='d'||input==KEY_RIGHT)&&indp_col!=2) {indp_col++;}
            if((input == '\n'||input=='e'||input==' ')&&state[indp_rig][indp_col]==-1) 
            {
                state_upd[0]=sign;
                state_upd[1]=indp_rig;
                state_upd[2]=indp_col;
                state_upd[3]=t;
                if(cpm==0)
                sign_r=(sign_r+1)%2;
                move_c=1;
            }
            disegna_punt(indp_rig,indp_col);
            disegna_sign_upd(state_upd,t,state,&sign,cpm,&move_c);
            
            disegna_state(state);
            
            if(sign_r==0)
            mvaddstr(43,43,"è il turno di: O");
            else
            mvaddstr(43,43,"è il turno di: X");
            
            if(verify_end(state,win)==1)
            break;
            refresh();
            t+=5;
            napms(50);
        }

        if(win[0]==0)
        win_dat[0]++;
        if(win[0]==1)
        win_dat[1]++;

        while (1) 
        {
            clear();
            disegna_griglia(0);
            disegna_state(state);
            disegna_win(win);
            stp_win(win[0]);
            input=getch();
            if(input=='\n')
            {
                init_state(state);
                sign=1;
                sign_r=1;
                break;
            }
            if(input=='q'){endwin();exit(1);}
            
            stp_tab(win_dat);
            
            mvaddstr(45,43,"Premi INVIO per rigiocare");
            mvaddstr(46,43,"Premi Q per uscire");
            refresh();
            napms(50);
        }

        
    }
    endwin();
    return 0;  
}
