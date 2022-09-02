   void multiply(ull a[][2], ull b[][2]){
        ull temp[2][2] = {{0,0},{0,0}};
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                for(int k=0; k<2; k++){
                    temp[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                a[i][j] = temp[i][j];
            }
        }
    }
    void matrixExpo(ull a[][2], ull power){
        if(power==0 || power==1) return;
        ull temp[2][2] = {{a[0][1],a[0][1]},{a[1][0],a[1][1]}};
        matrixExpo(a,power/2);
        multiply(a,a);
        if(power&1) multiply(a,temp);
    }
    /*

    */
