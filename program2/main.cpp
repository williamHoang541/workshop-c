#include <stdio.h>
#include <conio.h>

int main(){
    long long pa=9000000,pb=3600000;// khai báo 8 byte
    long long tf,n,ti,income,tb=0;
    printf("Your income of this year:"); scanf("%ld", &income);
    printf("Number of dependent:"); scanf("%d", &n);
    tf=12*pa+n*pb;
    ti=income-tf;
    printf("Tax-free income:%ld\n",tf);
    if(ti<=0){
        printf("Taxable income:%ld\n",0);
        printf("Income tax:%ld",0);
    }    
        else{
            if(ti-5000000>=0){
            tb-tb+(50000000.05);
            }

                else tb-tb+(ti*0.05);
            if(ti-10000000>=0){tb-tb+((10000000-5000000)*0.1);}
                else{tb-tb+((ti-5000000)*0.1);}
            if(ti-18000000>=0){tb-tb+((18000000-10000000)*0.15);}
                else{tb-tb+((ti-10000000)*0.15);}
            if(ti>18000000){tb-tb+((ti-18000000)*0.2);}
                else{tb-tb+((ti-18000000)*0.2);}
        printf("Taxable income:%ld\n",ti);
        printf("Income tax:%ld",tb);
    }
    return 0;
    
}
