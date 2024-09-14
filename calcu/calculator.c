#include <stdio.h>
#include <string.h>
#include <math.h>
struct string{
    char calcs[100];
};
struct string q[100];
int main(){
    q[100].calcs[100];
    int olp = 102;
    char num[olp];
    printf ("\nplease enter a sum and also \nthere should be gap between the num and oparetors \n if you want to end calculation enter './end': ");
    fgets (num,102,stdin);
    if (strlen(num) > 100){
        printf ("\nError: Input too long.\n");
        return 0;
    }
 if (strcmp(num,"./end\n") == 0){
    printf ("\nterminated\n");
    return 0;
 }
    int adt;
    for (adt = 0;adt<olp;adt++){
        
        if (num[adt] == '\n'){
            num [adt] = ' ';
            num[adt + 1] = '\0';
            break;
        }
      
    }
    int n = strlen(num);

    int i,g,p;
    for (i=0,g=0,p=0;p<=n;p++,g++){
        q[i].calcs[g] = num [p];
    
         if (q[i].calcs[g] == ' '){
            q[i].calcs[g] = '\0';
            i++;
            g = -1;
        }
    }
    
  
     int x = 100;
     int array [x];
     int dif;
     for (dif = 0;dif<x;dif++){
        array[dif] = 0;
        
     }
     int size[100];
     int power;
     int need;
     int limit = i - 1;
     int loop;
     int loop1;
     for (loop = 0,loop1 = 0;loop1<=limit;loop = loop + 0){
      
        if (q[loop1].calcs[0]>47 && q[loop1].calcs[0]<58){
        size[loop] = strlen(q[loop1].calcs);
        loop1 ++;
        loop ++;
        }
        else {
            loop1++;
        }
     }
     for (loop1 = 0,g = 0,dif = 0;loop1 <= limit; loop = loop + 0){
        if (q[loop1].calcs[0]>47 && q[loop1].calcs[0]<58){
            for (g = 0;g < strlen(q[loop1].calcs);g++){
                
need = q[loop1].calcs[g] - 48;
power = pow(10,size[dif] - 1);
if (power == 99){
    power = 100;
}

power = power * need;

array [loop1] += power;
if (array[loop1]>2147483647 || array[loop1]<-2147483647){
    printf ("\nOverflow\n");
    return 0;
}
size [dif] --;
            }
            
        
           g = 0;
           loop1 ++;
           dif ++;
        }
        else {
            loop1++;
        }
     }
     int blo;
     int helpme;
     for (loop1 = 0;loop1 <= limit;loop1++){
        
        if (strcmp(q[loop1].calcs,"*") == 0){
            
    strcpy(q[loop1].calcs," ");
    
array[loop1 + 1] = array[loop1 - 1] * array[loop1 + 1];
array[loop1 - 1] = 0;
 
        }
        else if (strcmp(q[loop1].calcs,"/") == 0){
            strcpy(q[loop1].calcs," ");
            array[loop1 + 1] = array [loop1 - 1]/array[loop1 + 1];
          array[loop1 - 1] = 0;
        } 
      helpme = array [loop + 1];  
     }
     int helpme2;
  
 for (loop1 = 0;loop1<=limit;loop1++){
if (strcmp(q[loop1].calcs,"+") == 0){
if (array[loop1 + 1]==0 && strcmp(q[loop1 + 2].calcs," ") == 0){
for (helpme2 = loop1;helpme2 == helpme2;helpme2++){
if (array[helpme2] != 0){
    array [loop1 + 1] = array[helpme2];
    array [helpme2] = 0;
    break;
}
}

}
printf ("");
 if (array [loop1 - 1] == 0 && strcmp(q[loop1 - 2].calcs," ") == 0){
    for (helpme2 = loop1;helpme2 == helpme2;helpme2 --){
        if (array[helpme2] != 0){
            array[loop1 - 1] = array[helpme2];
            array[helpme2] = 0;
            break;
        }
    }
}

array [loop1 + 1] = array [loop1 + 1] + array [loop1 - 1];
helpme = array[loop1 + 1];
}
 else if (strcmp(q[loop1].calcs,"-") == 0){
    if (array[loop1 + 1]==0 && strcmp(q[loop1 + 2].calcs," ") == 0){
for (helpme2 = loop1;helpme2 == helpme2;helpme2++){
if (array[helpme2] != 0){
    array [loop1 + 1] = array[helpme2];
    array [helpme2] = 0;
    break;
}
}
}
printf ("");
 if (array [loop1 - 1] == 0 && strcmp(q[loop1 - 2].calcs," ") == 0){
    for (helpme2 = loop1;helpme2 == helpme2;helpme2 --){
        if (array[helpme2] != 0){
            array[loop1 - 1] = array[helpme2];
            array[helpme2] = 0;
            break;
        }
    }
}
array[loop1 + 1] = array[loop1 - 1] - array[loop1 + 1];
helpme = array[loop1 + 1];
 } 
 }
 printf ("sum : %d",helpme);
   
    
    return main();
}