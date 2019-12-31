
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
//attern7();
//calender();
//arr_test2();
//arr_test1();
//nth_fibinocci();
//transpose_of_a_matrix();
//addition_of_array_elements();
//matrix_multiplication2();
//pattern6();
//pattern5();
//pattern4();
 //pattern3();
//fibinocci();
//nth_prime_number();
 //even_number_count();
//pattern2();
//centigrades_to_farenheit();
//inches_to_foot();
//right_most_digit_of_float();
//fibonacci();
//char_int_float();
//vertical();
//rows_columns2();
rows_columns1();
//pattern_of_name();
//pattern();
 //ascii_value_of_character();
//reversing_the_digits_of_integer();
//greatnumber();
//swap();
//rightMostDigit();
//avg();
//result();
    //Right most digit
}
void scaning_i(){
int i;
scanf("%d",&i);

}

int leftmostdigit(int i) {




    int j=i;
    while(i>=10){
    i=i/10;

    }
     printf("left most digit is %d",i);
return i;
}

int avg(){

   int i,j,k,l;
   printf("given integers are \n ");
   scanf("%d %d %d %d",&i,&j,&k,&l);
   printf("%d,%d,%d,%d",i,j,k,l);


    float a=0;
    a=i+j+k+l;
    printf("average of given numbers is :%f\n",a/4);
    int b=a/4;
    printf("deviation of i,j,k,l from avg is %d,%d,%d,%d,",b-i,b-j,b-k,b-l);



   }


int result(){

   int q1,q2,q3,q4,m,e;
   scanf("%d %d %d %d %d %d",&q1,&q2,&q3,&q4,&m,&e);
   printf("sai q1 q2 q3 q4 mid end marks are %d,%d,%d,%d,%d,%d",q1,q2,q3,q4,m,e);

    int T=q1+q2+q3+q4+m+e; // 20/30
    float Q=T*30/100;
    float M=T*40/100; // 30/40
    float E=T*30/100; // 10/30

   printf("sai result is %f",Q+M+E);

}


int swap(){

   int i,j;
   scanf("%d %d",&i,&j);
   printf("given i,j equalto %d,%d\n",i,j);
   int k=i;
i=j;
j=k;
   printf("after swaping i and j %d,%d",i,j);




   }

int greatnumber(){

  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
   printf("given numbers are %d,%d,%d\n",a,b,c);

   if(a>b&&a>c){
   printf("%d is greater",a);

   }
   else if(b>a&&b>c){
   printf("%d is greater",b);
   }
    else if(c>a&&c>b){
    printf("%d is greater",c);
    }

  }

int reversing_the_digits_of_integer(){
int a;

 printf("given number is %d\n",a);

 int i = leftmostdigit(a);


 int j=a%10;
 printf("right most digit is %d\n",j);

 int x=a-(i*100+j);
 int k=x/10;
 printf("middle digit is %d\n",k);

 printf("after reversing the digits %d",(j*100)+(k*10)+(i*1));

}

int  ascii_value_of_character(){

char sai;
scanf("%c",&sai);

printf("the ascii value of sai is %d",sai);



}

int pattern(){

for(int i=9;i<10;i=i-1){
printf("\n");
for(int j=0;j<i;j=j+1){
printf("*");
}
}
}

int pattern_of_name(){

printf("sssss\ns\ns\nsssss\n    s\n    s\nsssss\n");

for(int i=0;i<5;i++){
printf("s");
}
printf("\n");
for(int j=0;j<2;j++){
printf("s\n");
}

for(int k=0;k<5;k++){
printf("s");
}
printf("\n");
for(int a=0;a<2;a++){
printf("    s\n");
}

for(int l=0;l<5;l++){
printf("s");
}

}

int rows_columns1(){
int arr[16];

for(int i=0;i<16;i++){
 scanf("%d",&arr[i]);
}
int l=0;
for(int j=0;j<4;j++){
for(int k=0;k<3;k++){
printf("%d,",arr[l++]);

}
printf("%d",arr[l++]);
printf("\n");
}

}

int rows_columns2(){

int arr[10];
for(int i=0;i<10;i++){
scanf("%d",&arr[i]);
}
int l=0;
for(int j=0;j<5;j++){


   printf("%d %d\n",arr[l],arr[9-l]);
   l++;
  }
printf("\n");
}

int vertical(){

 int arr[3];
 for(int i=0;i<3;i++){
 scanf("%d",&arr[i]);
 }

 for(int k=0;k<3;k++){
printf("%d\n",arr[k]);
}

for(int l=2;l>=0;l--){
printf("%d\n",arr[l]);

}
}
int char_int_float(){

int i;
scanf("%d",&i);
printf("given intger is %d\n",i);

printf("corresponding character is %c\n",i);
printf("corresponding float is %f\n",i);
printf("corresponding double is %lf",i);
}




int right_most_digit_of_float(){

float i=0;
scanf("%f",&i);
printf("right most digit is %f",i);
}

int inches_to_foot(){

int i;
scanf("%d",&i);
printf("given inches is %d",i);

int foot=i/12;
printf("inches in foot is %d\n",foot);

 int yard=i/36;
 printf("given inches in yards is %d",yard);
}


int centigrades_to_farenheit(){

float t=0;
scanf("%f",&t);
printf("given temp is %f\n",t);

float far=32+(t*180/100);
printf("given temp in farenheit is %f",far);
}

int pattern2(){
for(int i=9;i>0;i--){

for(int j=0;j<i;j++){
printf("%d",j);
}
printf("\n");
}
}

int even_number_count(){

int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int count=0;
for(int j=0;j<n;j++){
if(arr[j]%2==0){
count=count+1;
}
}
printf(" no of even count %d",count);
}

int nth_prime_number(){
int i;
scanf("%d",&i);
int count=0;
bool flag = true;
int j=2;

while(count <  i){
      flag=true;
      for(int k=2;k<j;k++){
              if(j%k==0){
                    flag=false;
              }
     }
     if(flag){
        count=count+1;
     }
     j++;
}
printf("%d",j-1);

}

int fibinocci(){

int fib1=0;
int fib2=1;

for(int i=0;i<20;i++){
int fib3=fib1+fib2;
    printf("%d\n",fib3);
 fib1=fib2;
fib2=fib3;
}

}



int pattern3(){

int i;
scanf("%d",&i);
int l=1;
for(int j=0;j<i;j++){

      for(int k=0;k<l;k++){
          printf("%c",'*');

      }
printf("\n");
l=l+2;
}
}

int pattern4(){

int i;
scanf("%d",&i);
int l=0;
for(int j=0;j<i;j++){

        for(int k=9;k>l;k--){
           printf("%c",'*');

        }

l=l+2;
printf("\n");
}

}

int pattern5(){

int i;
scanf("%d",&i);

int l=1;
int a=(i+1)/2;
for(int j=0;j<a;j++){

      for(int k=0;k<l;k++){
      printf("%c",'*');
      }

 printf("\n");
 l=l+2;
}
int p=0;
l=l-4;
int b=i-1/2;
for(int x=0;x<b;x++){

     for(int y=l;y>p;y--){
     printf("%c",'*');
     }

printf("\n");
p=p+2;
}

}

int pattern6(){

int n;
scanf("%d",&n);

int a=(n+1)/2;
int b=(n-1)/2;
for (int i=0;i<n;i++){
 printf("%c",'*');
}
printf("\n");
for(int i=1;i<=b;i++){

     for(int j=0;j<(n-(2*i-1))/2;j++){
     printf("%c",'*');

     }

    for(int k=0;k<(2*i-1);k++){

    printf(" ");

    }
for(int l=0;l<(n-(2*i-1))/2;l++){
printf("%c",'*');

}

        printf("\n");

          }
}




int matrix_multiplication1(){

int m;
scanf("%d",&m);

int a[m][m];
int b[m][m];
int c[m][m];
int o;
for(int p=0;p<m;p++){

   for(int q=0;q<m;q++){
    a[p][q]=(m*p)+q+1;
    b[p][q]=(m*p)+q+1;
   }
}
for(int i=0;i<m;i++){

    for(int j=0;j<m;j++){

    c[i][j]=0;

             for(int n=0;n<m;n++){
                c[i][j]=c[i][j]+a[i][n]*b[n][j];
             }
    }
}
printArr(c);
}

void printArr(int c[5][5]){



          for(int g=0;g<5;g++){
          for(int h=0;h<5;h++){
             printf("%d  ",c[g][h]);}
    printf("\n");
          }

}


int addition_of_array_elements(){

int arr[6] ={1,2,3,4,5,6};
int j;
for(int i=0;i<6;i++){
j=j+arr[i];

}
printf("%d",j);
}

int transpose_of_a_matrix(){
int m;
scanf("%d",&m);
int a[m][m];
int b[m][m];

for(int i=0;i<m;i++){

     for(int j=0;j<m;j++){
      a[i][j]=m*i+j+1;
      b[j][i]=a[i][j];

     }
}
for(int g=0;g<m;g++){

    for(int h=0;h<m;h++){
    printf("%d  ",a[g][h]);
    }
    printf("\n");
}
 printf("\n\n\n\n");

 for(int g=0;g<m;g++){

    for(int h=0;h<m;h++){
    printf("%d  ",b[g][h]);
    }
    printf("\n");
}


}


int matrix_multiplication2(){

int m;
scanf("%d",&m);
int n;
scanf("%d",&n);
int o;
scanf("%d",&o);
int a[m][n];
int b[n][o];
int c[m][o];

for(int i=0;i<m;i++){

     for(int j=0;j<n;j++){
     a[i][j]=n*i+j+1;
     }

}

for(int i=0;i<n;i++){

     for(int j=0;j<o;j++){
     b[i][j]=o*i+j+1;

     }
}

for(int i=0;i<m;i++){


   for(int j=0;j<o;j++){

   c[i][j]=0;
       for(int k=0;k<n;k++){
       c[i][j]=c[i][j]+a[i][k]*b[k][j];

       }


   }


}


printArr(c);
}

int nth_fibinocci(){

int n;
scanf("%d",&n);

int fib1=0;
int fib2=1;
int m=1;
int fib3;
for(int i=0;i<(n-2);i++){

   fib3=fib1+fib2;
   fib1=fib2;
   fib2=fib3;


}

      printf("%d fibinocci is %d",n,fib3);
}

int arr_test1(){

int i=0;
scanf("%d",&i);
int arr[10]={1,2,3,4,5,6,7,8,9,10};
bool flag=true;
int j;
for( j=0;j<10;j++){

if(arr[j]==i){
printf("it is there");
flag=false;
break;
}

}
printf("%d",j);
if(flag){

printf("it is not there");

}

}

int arr_test2(){

int i;
scanf("%d",&i);

int arr[6]={0,2,4,6,9,10};
int j;
bool flag=true;
for(j=0;j<6;j++){

   if(arr[j]==i){
     printf("it is there");
      flag=false;
        break;
   }

}
     if(flag){
       printf("it is not there\n\n");


                 for(int k=0;k<6;k++){

                     if(arr[k]>i){

                     printf("%d",arr[k]);
                     break;
                     }


                 }



}

}

int pattern7(){

printf("@@@@@@@@@@@\n@@@@@ @@@@@\n@@@@   @@@@\n@@@     @@@\n@@       @@\n@         @\n@@       @@\n@@@     @@@\n@@@@   @@@@\n@@@@@ @@@@@\n@@@@@@@@@@@");

}








