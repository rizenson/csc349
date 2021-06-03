#include <string.h> 
#include <stdlib.h> 
#include <stdio.h> 
 
void matMult(float (matc[][250]), float (matb[][250]), float (mata[][250]), unsigned int n) { 
     int i, j, k; 
     for (i = 0; i < n; i++){ 
          for(j = 0; j < n; j++){ 
               matc[i][j] = 0; 
               for(k = 0; k < n; k++){ 
                    matc[i][j] += (mata[i][k] * matb[k][j]); 
               } 
          } 
     } 
} 
 
int main(void){ 
    int i, j; 
    int n = 250; 
    float mata[n][n]; 
    float matb[n][n]; 
    float matc[n][n]; 
/*    float rowa[n]; 
    float rowb[n]; 
    float rowc[n]; 
    float *mata[n]; 
    float *matb[n]; 
    float *matc[n];*/ 
/*    int row1[2] = {1, 2}, row2[2] = {3, 4}, *mata[2], 
        row3[2] = {4, 3}, row4[2] = {2, 1}, *matb[2], 
        row5[2], row6[2], *matc[2]; 
 
    mata[0] = row1; 
    mata[1] = row2; 
    matb[0] = row3; 
    matb[1] = row4; 
    matc[0] = row5; 
    matc[1] = row6;*/ 
    for(i = 0; i < n; i++){ 
        for(j = 0; j < n; j++){ 
            mata[i][j] = rand()/(float)RAND_MAX; 
            matb[i][j] = rand()/(float)RAND_MAX; 
            matc[i][j] = 0; 
/*            rowa[j] = (rand()/ (float)RAND_MAX); 
            rowb[i] = (rand()/(float)RAND_MAX); 
            rowc[i] = 0; 
        } 
        memcpy(mata[i], rowa, sizeof(rowa)); 
        memcpy(matb[i], rowb, sizeof(rowb)); 
        memcpy(matc[i], rowc, sizeof(rowc));*/ 
        } 
    } 
    matMult(matc, matb, mata, n); 
}
