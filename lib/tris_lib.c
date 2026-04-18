#include "../head/tris_lib.h"

void title(int p)
{
    const wchar_t *tris_box[] = {
        L"╔══════════════════════════════════════════════════════════╗",
        L"║                                                          ║",
        L"║  ███████████████╗ ████████████╗  ████╗ ██████████████╗   ║",
        L"║  ███████████████║ ████████████║  ████║ ██████████████║   ║",
        L"║  ╚════█████╔════╝ ████╔════████╗ ████║ ████╔═════════╝   ║",
        L"║       █████║      ████║    ████║ ████║ ████║             ║",
        L"║       █████║      ████████████╔╝ ████║ ██████████████╗   ║",
        L"║       █████║      ████████████║  ████║ ██████████████║   ║",
        L"║       █████║      ████╔════████╗ ████║ ╚════════╗████║   ║",
        L"║       █████║      ████║    ████║ ████║          ║████║   ║",
        L"║       █████║      ████║    ████║ ████║ ██████████████║   ║",
        L"║       █████║      ████║    ████║ ████║ ██████████████║   ║",
        L"║       ╚════╝      ╚═══╝    ╚═══╝ ╚═══╝ ╚═════════════╝   ║",
        L"║                                                          ║",
        L"╚══════════════════════════════════════════════════════════╝"
    };
    
    int righe_tris = sizeof(tris_box) / sizeof(tris_box[0]);
    if(p==0)
    {
        for (int i = 0; i < righe_tris; i++)
        mvaddwstr(i + 3, 5, tris_box[i]);
    }
    else
    {
        for (int i = 0; i < righe_tris; i++)
        {
            mvaddwstr(i + 3, 5, tris_box[i]);
            refresh();
            napms(10);
        }
    }
}

void disegna_griglia(int p)
{
    const wchar_t *grid[] = {
        L"┌───────────────────────┬───────────────────────┬───────────────────────┐",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"├───────────────────────┼───────────────────────┼───────────────────────┤",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"├───────────────────────┼───────────────────────┼───────────────────────┤",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"│                       │                       │                       │",
        L"└───────────────────────┴───────────────────────┴───────────────────────┘"
    };
    
    int righe = sizeof(grid) / sizeof(grid[0]);
    
    if(p==0)
    {
        for (int i = 0; i < righe; i++)
        mvaddwstr(i+3, 3, grid[i]);
    }
    else
    {
        for (int i = 0; i < righe; i++)
        {
            mvaddwstr(i + 3, 3, grid[i]);
            refresh();
            napms(10);
        }
    }
    
}

void disegna_sign1(int riga, int colonna, int tipo)
{
    if(tipo==0)
    {
        const wchar_t *cerchio[] = {
            L"                ",
            L"                ",
            L"       ▄        ",
            L"      ███       ",
            L"       ▀        ",
            L"                ",
            L"                "
        };
        int righe_sign = sizeof(cerchio) / sizeof(cerchio[0]);
        
        for (int i = 0; i < righe_sign; i++)
        {
            mvaddwstr(i+6+riga*12 ,7+colonna*24, cerchio[i]);
        }
    }
    else
    {
        const wchar_t *croce[] = {
            L"              ",
            L"              ",
            L"     █  █     ",
            L"      ██      ",
            L"     █  █     ",
            L"              ",
            L"              "
        };
        int righe_sign = sizeof(croce) / sizeof(croce[0]);
        
        for (int i = 0; i < righe_sign; i++)
        {
            mvaddwstr(i+6+riga*12 ,8+colonna*24, croce[i]);
        }
    }
}

void disegna_sign2(int riga, int colonna, int tipo)
{
    if(tipo==0)
    {
        const wchar_t *cerchio[] = {
            L"                ",
            L"      ▄▄▄       ",
            L"     █████      ",
            L"     ██ ██      ",
            L"     █████      ",
            L"      ▀▀▀       ",
            L"                "
        };
        int righe_sign = sizeof(cerchio) / sizeof(cerchio[0]);
        
        for (int i = 0; i < righe_sign; i++)
        {
            mvaddwstr(i+6+riga*12 ,7+colonna*24, cerchio[i]);
        }
    }
    else
    {
        const wchar_t *croce[] = {
            L"              ",
            L"    ▄    ▄    ",
            L"    ██  ██    ",
            L"     █  █     ",
            L"    ██  ██    ",
            L"    ▀    ▀    ",
            L"              "
        };
        int righe_sign = sizeof(croce) / sizeof(croce[0]);
        
        for (int i = 0; i < righe_sign; i++)
        {
            mvaddwstr(i+6+riga*12 ,8+colonna*24, croce[i]);
        }
    }
}

void disegna_sign3(int riga, int colonna, int tipo)
{
    if(tipo==0)
    {
        const wchar_t *cerchio[] = {
            L"                ",
            L"    ▄▄███▄▄     ",
            L"   ███   ███    ",
            L"   ██     ██    ",
            L"   ███   ███    ",
            L"    ▀▀███▀▀     ",
            L"                "
        };
        int righe_sign = sizeof(cerchio) / sizeof(cerchio[0]);
        
        for (int i = 0; i < righe_sign; i++)
        {
            mvaddwstr(i+6+riga*12 ,7+colonna*24, cerchio[i]);
        }
    }
    else
    {
        const wchar_t *croce[] = {
            L"  ▄        ▄  ",
            L"   █      █   ",
            L"   ██    ██   ",
            L"     ████     ",
            L"   ██    ██   ",
            L"   █      █   ",
            L"  ▀        ▀  "
        };
        int righe_sign = sizeof(croce) / sizeof(croce[0]);
        
        for (int i = 0; i < righe_sign; i++)
        {
            mvaddwstr(i+6+riga*12 ,8+colonna*24, croce[i]);
        }
    }
}

void disegna_sign(int riga, int colonna, int tipo)
{
    if(tipo==0)
    {
        const wchar_t *cerchio[] = {
            L"    ▄██████▄    ",
            L"  ▄█        █▄  ",
            L" █            █ ",
            L" █            █ ",
            L" █            █ ",
            L"  ▀█        █▀  ",
            L"    ▀██████▀    "
        };
        int righe_sign = sizeof(cerchio) / sizeof(cerchio[0]);
        
        for (int i = 0; i < righe_sign; i++)
        {
            mvaddwstr(i+6+riga*12 ,7+colonna*24, cerchio[i]);
        }
    }
    else
    {
        const wchar_t *croce[] = {
            L" ██        ██ ",
            L"  ██      ██  ",
            L"   ██    ██   ",
            L"     ████     ",
            L"   ██    ██   ",
            L"  ██      ██  ",
            L" ██        ██ "
        };
        int righe_sign = sizeof(croce) / sizeof(croce[0]);
        
        for (int i = 0; i < righe_sign; i++)
        {
            mvaddwstr(i+6+riga*12 ,8+colonna*24, croce[i]);
        }
    }
}

void disegna_punt_upd(int riga, int colonna)
{
    const wchar_t *cornice[] = {
        L" ┌──────    ──────┐ ",
        L" │                │ ",
        L" │                │ ",
        L"                    ",
        L"                    ",
        L"                    ",
        L" │                │ ",
        L" │                │ ",
        L" └──────    ──────┘ "
    };
    int righe_sign = sizeof(cornice) / sizeof(cornice[0]);
    
    for (int i = 0; i < righe_sign; i++)
    {
        mvaddwstr(i+4+riga*12 ,4+colonna*24, cornice[i]);
    }
}

void disegna_punt(int riga, int colonna)
{
    const wchar_t *cornice[] = {
        L" ┌──────      ──────┐ ",
        L" │                  │ ",
        L" │                  │ ",
        L"                      ",
        L"                      ",
        L"                      ",
        L"                      ",
        L"                      ",
        L" │                  │ ",
        L" │                  │ ",
        L" └──────      ──────┘ "
    };
    int righe_sign = sizeof(cornice) / sizeof(cornice[0]);
    
    for (int i = 0; i < righe_sign; i++)
    {
        mvaddwstr(i+4+riga*12 ,4+colonna*24, cornice[i]);
    }
}

void disegna_sign_upd(int state_upd[4],unsigned long t, int state[3][3],int *sign, int cpm,int *move_c)
{
    int mi_serve[3];
    if((t-state_upd[3])<5&&state_upd[3]!=0)
    disegna_sign1(state_upd[1],state_upd[2],state_upd[0]);
    if((t-state_upd[3])>=5&&(t-state_upd[3])<10&&state_upd[3]!=0)
    disegna_sign2(state_upd[1],state_upd[2],state_upd[0]);
    if((t-state_upd[3])>=10&&(t-state_upd[3])<15&&state_upd[3]!=0)
    disegna_sign3(state_upd[1],state_upd[2],state_upd[0]);
    if((t-state_upd[3])>=15&&state_upd[3]!=0)
    {
        state_upd[3]=0;
        state[state_upd[1]][state_upd[2]]=state_upd[0];
        *sign=(*sign+1)%2;
        if(verify_end(state,mi_serve)!=1&&cpm==1&&*move_c==1)
        {
            comp_move(state,*sign,state_upd);
            state_upd[3]=t;
            *move_c=0;
        }
    }
}

void comp_move(int state[3][3],int sign,int state_upd[4])
{
    int i=0,n1=rand()%3,n2=rand()%3; 
    while(i==0)
    {
        if(state[n1][n2]==-1)
        {
            state_upd[0]=sign;
            state_upd[1]=n1;
            state_upd[2]=n2;
            i=1;    
        }
        else
        {
            n1=rand()%3;
            n2=rand()%3; 
        }
    }
}

void init_state(int state[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            state[i][j]=-1;
        }
    }
}

void disegna_state(int state[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(state[i][j]!=-1)
            disegna_sign(i,j,state[i][j]);
        }
    }
}

int verify_end(int state[3][3],int win[3])
{
    for(int i=0;i<3;i++){for(int j=0;j<3;j++)
        {
            if((state[(i+1)%3][j]==state[i][j])&&(state[(i+2)%3][j]==state[i][j])&&state[i][j]!=-1)
            {
                win[0]=state[i][j];
                win[1]=j;
                win[2]=2;
                return 1;
            }
            if((state[i][(j+1)%3]==state[i][j])&&(state[i][(j+2)%3]==state[i][j])&&state[i][j]!=-1)
            {
                win[0]=state[i][j];
                win[1]=i;
                win[2]=1;
                return 1;
            }
            if((i==1&&j==1)&&(state[2][2]==state[i][j])&&(state[0][0]==state[i][j])&&state[i][j]!=-1)
            {
                win[0]=state[i][j];
                win[1]=0;
                win[2]=3;
                return 1;
            }
            if((i==1&&j==1)&&(state[0][2]==state[i][j])&&(state[2][0]==state[i][j])&&state[i][j]!=-1)
            {
                win[0]=state[i][j];
                win[1]=1;
                win[2]=3;
                return 1;
            }
        }
    }
    for(int i=0;i<3;i++){for(int j=0;j<3;j++)
        {
            if(state[i][j]==-1)    
            return 0;
        }
    }
    win[0]=-1;
    win[1]=-1;
    win[2]=-1;
    return 1;
}

void disegna_win(int win[3])
{
    if(win[2]==1)
    {
        for(int i=0;i<68;i++)
        mvaddwstr(9+win[1]*12, 5+i,L"▒");
    }
    if(win[2]==2)
    {        
        for (int i = 0; i < 33; i++)
        mvaddwstr(5+i, win[1]*24+14,L"▒▒");
    }
    if(win[2]==3)
    {
        if(win[1]==0)
        {
            for (int i = 0; i < 35; i++)
            mvaddwstr(4 + i, 5 + (i*2), L"▒▒");
        }
        else
        {
            for (int i = 0; i < 35; i++)
            mvaddwstr(38- i, 5 + (i*2), L"▒▒");
        }
    }
}

void stp_win(int i)
{
    if(i==1)
    {
        const wchar_t *win_box[] = {
            L"╔════════════════════════════════════════════════════════════════╗",
            L"║                                                                ║",
            L"║  ██╗  ██╗ █████╗     ██╗   ██╗██╗███╗   ██╗████████╗ ██████╗   ║",
            L"║  ██║  ██║██╔══██╗    ██║   ██║██║████╗  ██║╚══██╔══╝██╔═══██╗  ║",
            L"║  ███████║███████║    ██║   ██║██║██╔██╗ ██║   ██║   ██║   ██║  ║",
            L"║  ██╔══██║██╔══██║    ╚██╗ ██╔╝██║██║╚██╗██║   ██║   ██║   ██║  ║",
            L"║  ██║  ██║██║  ██║     ╚████╔╝ ██║██║ ╚████║   ██║   ╚██████╔╝  ║",
            L"║  ╚═╝  ╚═╝╚═╝  ╚═╝      ╚═══╝  ╚═╝╚═╝  ╚═══╝   ╚═╝    ╚═════╝   ║",
            L"║                                                                ║",
            L"║                           ██╗  ██╗                             ║",
            L"║                           ╚██╗██╔╝                             ║",
            L"║          GAY               ╚███╔╝                              ║",
            L"║                            ██╔██╗                              ║",
            L"║                           ██╔╝ ██╗                             ║",
            L"║                           ╚═╝  ╚═╝                             ║",
            L"║                                                                ║",
            L"╚════════════════════════════════════════════════════════════════╝"
        };
        int righe = sizeof(win_box) / sizeof(win_box[0]);
        
        for (int i = 0; i < righe; i++)
        {
            mvaddwstr(i+3 ,90, win_box[i]);
        }
    }
    if(i==0)
    {
        const wchar_t *win_box[] = {
            L"╔════════════════════════════════════════════════════════════════╗",
            L"║                                                                ║",
            L"║  ██╗  ██╗ █████╗     ██╗   ██╗██╗███╗   ██╗████████╗ ██████╗   ║",
            L"║  ██║  ██║██╔══██╗    ██║   ██║██║████╗  ██║╚══██╔══╝██╔═══██╗  ║",
            L"║  ███████║███████║    ██║   ██║██║██╔██╗ ██║   ██║   ██║   ██║  ║",
            L"║  ██╔══██║██╔══██║    ╚██╗ ██╔╝██║██║╚██╗██║   ██║   ██║   ██║  ║",
            L"║  ██║  ██║██║  ██║     ╚████╔╝ ██║██║ ╚████║   ██║   ╚██████╔╝  ║",
            L"║  ╚═╝  ╚═╝╚═╝  ╚═╝      ╚═══╝  ╚═╝╚═╝  ╚═══╝   ╚═╝    ╚═════╝   ║",
            L"║                                                                ║",
            L"║                          ██████╗                               ║",
            L"║                         ██╔═══██╗                              ║",
            L"║          GAY            ██║   ██║                              ║",
            L"║                         ██║   ██║                              ║",
            L"║                         ╚██████╔╝                              ║",
            L"║                          ╚═════╝                               ║",
            L"║                                                                ║",
            L"╚════════════════════════════════════════════════════════════════╝"
        };
        int righe = sizeof(win_box) / sizeof(win_box[0]);
        
        for (int i = 0; i < righe; i++)
        {
            mvaddwstr(i+3 ,90, win_box[i]);
        }
    }
    if(i==-1)
    {
        const wchar_t *draw_box[] = {
            L"╔═══════════════════════════════════════════════════════════════════╗",
            L"║                                                                   ║",
            L"║   ██████╗  █████╗ ██████╗ ███████╗ ██████╗  ██████╗ ██╗ ██████╗   ║",
            L"║   ██╔══██╗██╔══██╗██╔══██╗██╔════╝██╔════╝ ██╔════╝ ██║██╔═══██╗  ║",
            L"║   ██████╔╝███████║██████╔╝█████╗  ██║  ███╗██║  ███╗██║██║   ██║  ║",
            L"║   ██╔═══╝ ██╔══██║██╔══██╗██╔══╝  ██║   ██║██║   ██║██║██║   ██║  ║",
            L"║   ██║     ██║  ██║██║  ██║███████╗╚██████╔╝╚██████╔╝██║╚██████╔╝  ║",
            L"║   ╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝╚══════╝ ╚═════╝  ╚═════╝ ╚═╝ ╚═════╝   ║",
            L"║                                                                   ║",
            L"║                             GAY                                   ║",
            L"║                                                                   ║",
            L"╚═══════════════════════════════════════════════════════════════════╝"
        };
        int righe = sizeof(draw_box) / sizeof(draw_box[0]);
        
        for (int i = 0; i < righe; i++)
        {
            mvaddwstr(i+3 ,90, draw_box[i]);
        }
    }
}

void stp_tab(int dat[2])
{
    const wchar_t *win_box[] = {
        L"╔════════════════════════════════╦═══════════════════════════════╗",
        L"║            ██   ██             ║              █████╗           ║",
        L"║             ╚███╔╝             ║             ██╔══██╗          ║",
        L"║            ██╔══██             ║             ╚█████╔╝          ║",
        L"╚════════════════════════════════╩═══════════════════════════════╝"
    };
    int righe = sizeof(win_box) / sizeof(win_box[0]);
    
    for (int i = 0; i < righe; i++)
    mvaddwstr(i+21 ,90, win_box[i]);
    for(int j=0;j<dat[0];j++)
    mvaddwstr(2*j+27,136, L"▒▒▒▒▒▒▒▒▒");
    for(int q=0;q<dat[1];q++)
    mvaddwstr(2*q+27,102, L"▒▒▒▒▒▒▒▒▒");
    
}

