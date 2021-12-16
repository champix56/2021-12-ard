//
//  main.c
//  structure
//
//  Created by orsys on 16/12/2021.
//

#include <stdio.h>

struct S_meteo{
    float temp;
    unsigned long pression;
    unsigned int humidity;
};

int main(int argc, const char * argv[]) {
    struct S_meteo meteo;
    meteo.temp=23.4F;
    meteo.pression=102000ul;
    meteo.humidity=43.0F;
    
    printf("%.2f;%6ul;%2d\n",meteo.temp,meteo.pression,meteo.humidity);
    return 0;
}
