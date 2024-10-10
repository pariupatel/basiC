#include <stdio.h>
#include <stdlib.h>
int main() {
    char bd[9];
    int date,month;
    
    printf("Enter your birthdate in dd/mm/yy format: ");
    scanf("%8s", bd);
    printf("\n");
    //getting the date and month and converting the datatype to integer
    char datep[3]={bd[0],bd[1],'\0'};
    date=atoi(datep);
    char monthp[3]={bd[3],bd[4],'\0'};
    month=atoi(monthp);
    
    if(month>=1 && month<=12){
        if(date>=1 && date<=31){
    if(month==1){
        //20 jan to 31 jan - Aquarius
        if(date>=20 && date<=31){
            printf("Your Birth-sign is Aquarius.\n");
        }//nested if block
        else if(date>=1 && date<=19){
            printf("Your Birth-sign is Capricorn.\n");
        }//nested else if block
    }//main if block

    else if(month==2){
        if(date>=1 && date<=29){
        //1 feb to 18 feb - Aquarius
        if(date>=1 && date<=18){
            printf("Your Birth-sign is Aquarius.\n");
        }//nested if block
        //19 to 29 feb - Pisces
        else if(date>=19 && date<=29){
            printf("Your Birth-sign is Pisces.\n");
        }//nested else if block
        }//if block
        else{
            printf("Enter a valid choice.\n");
        }//date else block
    }//else if block

    else if(month==3){
        //1 to 20 mar - Pisces
        if(date>=1 && date<=20){
            printf("Your Birth-sign is Pisces.\n");
        }//nested if block
        //21 to 31 mar - Aries
        else if(date>=21 && date<=31){
            printf("Your Birth-sign is Aries.\n");
        }//nested else if block
    }//main else if block

    else if(month==4){
        //1 to 19 apr - Aries
        if(date>=1 && date<=19){
            printf("Your Birth-sign is Aries.\n");
        }//nested if block
        //20 to 30 apr
        else if(date>=20 && date<=30){
            printf("Your Birth-sign is Taurus.\n");
        }//nested else if block
        else if(date==31){
            printf("Enter a valid choice.\n");
        }//error handling else if block
    }//main else if block;

    else if(month==5){
        //1 to 20 may
        if(date>=1 && date<=20){
            printf("Your Birth-sign is Taurus.\n");
        }//nested if block
        //21 to 31 may - Gemini
        else if(date>=21 && date<=31){
            printf("Your Birth-sign is Gemini.\n");
        }//nested else if block
    }//main else if block

    else if(month==6){
        //1 to 21 jun - Gemini
        if(date>=1 && date<=21){
            printf("Your Birth-sign is Gemini.\n");
        }//nested if block
        //22 to 30 jun - Cancer
        else if(date>=22 && date<=30){
            printf("Your Birth-sign is Cancer.\n");
        }//nested else if block
    }//main else if block

    else if(month==7){
        //1 to 22 jul - Cancer
        if(date>=1 && date<=22){
            printf("Your Birth-sign is Cancer.\n");
        }//nested if block
        //23 to 31 jul - Leo
        else if(date>=23 && date<=31){
            printf("Your Birth-sign is Leo.\n");
        }//nested else if block
    }//main else if block

    else if(month==8){
        //1 to 22 aug - Leo
        if(date>=1 && date<=22){
            printf("Your Birth-sign is Leo.\n");
        }//nested if block
        //22 to 30 aug - Virgo
        else if(date>=22 && date<=30){
            printf("Your Birth-sign is Virgo.\n");
        }//nested else if block
    }//main else if block

    else if(month==9){
        //1 to 22 sep - Virgo
        if(date>=1 && date<=22){
            printf("Your Birth-sign is Virgo.\n");
        }//nested if block
        //23 to 30 sep - Libra
        else if(date>=23 && date<=30){
            printf("Your Birth-sign is Libra.\n");
        }//nested else if block
    }//main else if block

    else if(month==10){
        //1 to 23 oct - Libra
        if(date>=1 && date<=23){
            printf("Your Birth-sign is Libra.\n");
        }//nested if block
        //24 to 31 oct - Scorpio
        else if(date>=24 && date<=31){
            printf("Your Birth-sign is Scorpio.\n");
        }//nested else if block
    }//main else if block

    else if(month==11){
        //1 to 21 nov - Scorpio
        if(date>=1 && date<=21){
            printf("Your Birth-sign is Scorpio.\n");
        }//nested if block
        //22 to 30 nov - Saggitarius
        else if(date>=22 && date<=30){
            printf("Your Birth-sign is Sagittarius.\n");
        }//nested else if block
    }//main else if block

    else if(month==12){
        //1 to 21 dec - Saggitarius
        if(date>=1 && date<=21){
            printf("Your Birth-sign is Sagittarius.\n");
        }//nested if block
        //22 to 31 dec - Capricorn
        if(date>=22 && date<=31){
            printf("Your Birth-sign is Capricorn.\n");
        }//nested if block
    }//main else if block
    }//date if block
    else{
        return 1;
    }
    }//month if block
    else{
        return 1;
    }
    return 0;
}