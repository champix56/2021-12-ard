//
//  main.c
//  structure
//
//  Created by orsys on 16/12/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float t1=37.1000F;
    float t2=23.43F;
    float t3=37.500003F;
    float moyenne=0.0F;
    int countTemp=3;
    
    float allTemp[3]={t1,t2};
    allTemp[2]=t3;
    printf("Demat, Breizh!\n");
    for (int i=0; i<countTemp;i++) {
        moyenne=moyenne+allTemp[i];
    }
    moyenne=moyenne/(float)countTemp;
    printf("Moyenne : %.2f\n",moyenne);
    return 0;
}
