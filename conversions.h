#include<stdio.h>

void time(){

int from,to;
double t1,t2;

printf("\n\t\tseconds(1)\t\tminutes(2)\t\thours(3)\t\tdays(4)\n\n\n\t\tweeks(5)\t\tmonths(6)\t\tyears(7)\t\tDecades(8)\n\n\n\t\tcenturies(9)\t\tmilleniums(10)\t\tlight years(11)\t\tGenerations(12):");
printf("\n\n\n\t\tConvert from(number):");
scanf("%d",&from);
printf("\n\n\n\t\tConvert to(number):");
scanf("%d",&to);
if(from==to){
    printf("Enter time:");
    scanf("%lf",&t1);
    printf("The resultant value is %f",t1);
}
else {
        printf("\n\n\n\t\tEnter the time:");
        scanf("%lf",&t1);
        if(from==1){
                if(to==2){
                t2= t1/60;
                if(t2<=1&&t2>=0){
                    printf("\n\n\n\t\t%f seconds = %f minute",t1,t2);
                }
                else if(t1==1){
                    printf("\n\n\n\t\t1 second = %f minute",t2);
                }
                else{
                printf("\n\n\n\t\t%f seconds = %f minutes",t1,t2);
                }
                }
                if(to==3){
                    t2=t1/3600;
                      if(t2<=1&&t2>=0){
                    printf("\n\n\n\t\t%f seconds = %f hour",t1,t2);
                }
                else if(t1==1){
                    printf("\n\n\n\t\t1 second = %f hour",t2);
                }
                else{
                    printf("\n\n\n\t\t%f seconds = %f hours",t1,t2);
                }

        }
        if(to==4){
            t2=t1/(3600*24);
            if(t2<=1&&t2>=0){
                printf("\n\n\n\t\t%f seconds = %f day",t1,t2);
            }
            else if(t1==1){
                printf("\n\n\n\t\t1 second = %f ",t2);
            }
            else {
                printf("\n\n\n\t\t%f seconds = %f days",t1,t2);
            }
        }
         if(to==5){
            t2=t1/(3600*24*7);
            if(t2<=1&&t2>=0){
                printf("\n\n\n\t\t%f seconds = %f week",t1,t2);
            }
            else if(t1==1){
                printf("\n\n\n\t\t1 second = %f week",t2);
            }
            else {
                printf("\n\n\n\t\t%f seconds = %f weeks",t1,t2);
            }
        }
         if(to==6){
            t2=t1/(3600*24*30);
            if(t2<=1&&t2>=0){
                printf("\n\n\n\t\t%f seconds = %f month",t1,t2);
            }
            else if(t1==1){
                printf("\n\n\n\t\t1 second = %f month",t2);
            }
            else {
                printf("\n\n\n\t\t%f seconds = %f months",t1,t2);
            }
        }
         if(to==7){
            t2=t1/(3600*24*365.25);
            if(t2<=1&&t2>=0){
                printf("\n\n\n\t\t%f seconds = %f year ",t1,t2);
            }
            else if(t1==1){
                printf("\n\n\n\t\t1 second = %f year",t2);
            }
            else {
                printf("\n\n\n\t\t%f seconds = %f years",t1,t2);
            }
      }
       if(to==8){
            t2=t1/(3600*24*365.25*10);
            if(t2<=1&&t2>=0){
                printf("\n\n\n\t\t%f seconds = %f decade",t1,t2);
            }
            else if(t1==1){
                printf("\n\n\n\t\t1 second = %f decade",t2);
            }
            else {
                printf("\n\n\n\t\t%f seconds = %f decades",t1,t2);
            }
        }
         if(to==9){
            t2=t1/(3600*24*365.25*100);
            if(t2<=1&&t2>=0){
                printf("\n\n\n\t\t%f seconds = %f century",t1,t2);
            }
            else if(t1==1){
                printf("\n\n\n\t\t1 second = %f century",t2);
            }
            else {
                printf("\n\n\n\t\t%f seconds = %f centuries",t1,t2);
            }
        }
         if(to==10){
            t2=t1/(3600*24*365.25*1000);
            if(t2<=1&&t2>=0){
                printf("\n\n\n\t\t%f seconds = %f millenium",t1,t2);
            }
            else if(t1==1){
                printf("\n\n\n\t\t1 second = %f millenium",t2);
            }
            else {
                printf("\n\n\n\t\t%f seconds = %f milleniums",t1,t2);
            }
        }
         if(to==12){
            t2=t1/(3600*24*365.25*30);
            if(t2<=1&&t2>=0){
                printf("%f seconds = %f Generation",t1,t2);
            }
            else if(t1==1){
                printf("1 second = %f Generation",t2);
            }
            else {
                printf("%f seconds = %f Generations",t1,t2);
            }
        }

        }}
}

void temp(){
int from,to;
double t1,t2,t3;

printf("\n\n\n\t\t\tCelsius(1)\t\t\tFahrenheit(2)\t\t\tKelvin(3)");
printf("\n\n\n\t\t\tConvert from(number):");
scanf("%d",&from);
printf("\n\n\n\t\t\tConvert to(number):");
scanf("%d",&to);
printf("\n\n\n\t\t\tEnter temperature:");
scanf("%lf",&t1);

if(from==to){
    printf("\n\n\n\t\t\t The resulting temperature remains the same; %f",t1);
}
else{
switch(from){
case 1:
    switch(to){
         case 2:
             t2=t1*9/5+32.0;
             printf("\n\n\n\t\t\t%fC=%fF",t1,t2);
             break;
         case 3:
             t2=t1+273.15;
             printf("\n\n\n\t\t\t%fC=%fK",t1,t2);
             break;
    }
break;
case 2:
    switch(to){
        case 1:
            t2=(t1-32.0)*5/9;
            printf("\n\n\n\t\t\t%fF=%fC",t1,t2);
            break;
        case 3:
            t1=(t1-32.0)*5/9;
            t2=t1+273.15;
            printf("\n\n\n\t\t\t%fF=%fK",t1,t2);
            break;

    }
case 3:
    switch(to){
        case 1:
            t2=t1-273.15;
            printf("\n\n\n\t\t\t%fK=%fC",t1,t2);
            break;
        case 2:
            t2=(t1-273.15)*9/5+32;
            printf("\n\n\n\t\t\t%fK=%fF",t1,t2);
            break;
    }


}
}
}
