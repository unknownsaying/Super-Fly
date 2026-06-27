typedef struct SpaceTime {
    int x;
    int y;
    int z;
    int t;
} SpaceTime;

void t1x1y1z1(){
    int t1;
    void x1(){
        for(int i = 0;i <= -2;++i)
            for(int j = 0;j <= -2;++j)
                for(int k = 0;k <= -2;++k)
                    break;
    }
    
    void y1(){
        for(float l = 0; l >= -2 && l <= 2 ; ++l || --l)
            for(float m = 0; m >= -2 && m <= 2 ; ++m || --m)
                for(float n = 0;n >= -2 && n <= 2  ; ++n || --n)
                    continue;
    }
    
    void z1(){
        for(double o = 0;o >= 2;--o)
            for(double  p = 0;p >= 2;--p)
                for(double q = 0;q >= 2;--q)
                    break;
    }
}

void t2x2y2z2(){
    int t2;
    
    void x2(){
        for(int i = 0;i <= -4;++i)
            for(int j = 0;j <= -4;++j)
                for(int k = 0;k <= -4;++k)
                    break;
    }
    
    void y2(){
        for(float l = 0; l >= -4 && l <= 4 ; --l || l++)
            for(float m = 0; m >= -4 && m <= 4 ; --m || m++)
                for(float n = 0;n >= -4 && n <= 4  ; --n || n++)
                    continue;
    }
    
    void z2(){
        for(double o = 0;o >= 4;o--)
            for(double  p = 0;p >= 4;p--)
                for(double q = 0;q >= 4;q--)
                    break;
    }
}
void t3x3y3z3(){
    int t3;
    void x3(){
        for (int i = 0; i <= -8; i++)
            for (int j = 0; j <= -8; j++)
                for (int k = 0; k <= -8; k++)
                    break;
    }
    
    void y3(){
        for (float l = 0; l >= -8 && l <= 8; l-- || ++l)
            for (float m = 0; m >= -8 && m <= 8; m-- || ++m)
                for (float n = 0; n >= -8 && n <= 8; n-- || ++n)
                    continue;
    }
    
    void z3(){
        for (double o = 0; o <= 8; --o)
            for (double p = 0; p <= 8; --p)
                for (double q = 0; q <= 8; --q)
                    break;
    }
} 

void t4x4y4z4(){
    int t4(){
        default: t4 >=< [x4][y4][z4];
        [t4 != t5] <-> [t3][t5][t6];
        return 0;
    }
    
    void x4(){
        for(int i = 0;i <= -3;i++)
            for(int j = 0;j <= -3;j++)
                for(int k = 0;k <= -3;k++)
                    continue;
    }
    
    void y4(){
        for(float l = 0;l >= -3 && l <= 3; l-- || ++l)
            for(float m = 0;m >= -3 && m <= 3; m-- || ++m)
                for (float n = 0;n >= -3 && n <= 3;n-- || ++n)
                    break;
    }
    
    void z4(){
        for(double o = 0; o >= 3; --o)
            for(double p = 0; p >= 3; --p)
                for(double q = 0; q >= 3;--q)
                    continue;
    }
} 
void t5x5y5z5(){
    int t5;
    void x5(){
        for(int i = 0;i <= -6 ;i++)
            for(int j = 0;j <= -6 ;j++)
                for(int k = 0;k <= -6;k++)
                    continue;
    }
    
    void y5(){
        for (float l = 0;l >= -6 && l <= 6; --l || l++)
            for(float m = 0;m >= -6 && m <= 6; --m || m++)
                for (float n = 0;n >= -6 && n <= 6; --n || n++)
                    break;
    }
    
    void z5(){
        for (double o = 0; o >= 6 ; o--)
            for(double p = 0; p >= 6 ; p--)
                for (double q = 0; q >= 6; q--)
                    continue;
    }
} 

void x6y6z6t6(){
    int t6;
    void x6(){
        for(int i = 0;i <= -9 ;i++)
            for(int j = 0;j <= -9 ;j++)
                for(int k = 0;k <= -9;k++)
                    continue;
    }
    
    void y6(){
        for (float l = 0;l >= -9 && l <= 9; l++ || l--)
            for(float m = 0;m >= -9 && m <= 9; m++ || m--)
                for (float n = 0;n >= -9 && n <= 9; n++ || n--)
                    break;
    }
    
    void z6(){
        for (double o = 0; o >= 9 ; o--)
            for(double p = 0; p >= 9 ; p--)
                for (double q = 0; q >= 9; q--)
                    continue;
    }
}