#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

int main(){
	sorting_of_0_and_1();
	//Highest_frequency_element_in_array();
	//Number_of_elements_in_sorted_array();
	//problem5();
	//problem4();
	//problem3();
	//problem2();
	//problem1();
	//array1();
	//prime_number2();
	//nthprime_number();
	//swapping();
	//floyds_triangle();
	//addition_without_operator();
	//strongnumber1();
	//amstrongnumber1();
    //left_most_digit();

     }


int left_most_digit(){


	int n;
	scanf("%d",&n);
	printf("given number is %d\n",n);


	while(n>=10){

		n=n/10;

	}
printf("left most digit is %d",n);

}

int amstrongnumber1(){

 int n;
 scanf("%d",&n);


}

int strongnumber1(){

	int n;
	scanf("%d",&n);

}

int addition_without_operator(){

	int x;
	 scanf("%d",&x);
	 int y;
	  scanf("%d",&y);
	  int j=y;

	 for(int i=0;i<j;i++){

		x=x+1;
		y=y-1;

	 }

	printf("addition of x and y is %d",x);

}

int floyds_triangle(){

 int n;
 scanf("%d",&n);

 int a=2;
 int b=1;

	for(int i=0;i<n;i++){

		for(int j=1;j<a;j++){


		printf("%d",b);
          b++;
		}

	printf("\n");

	a=a+1;

	}

}


int swapping(){

int x,y;
scanf("%d %d",&x,&y);
printf("given number a=%d\n given number b=%d\n",x,y);

x=x+y;
y=x-y;
x=x-y;
printf("%d\n",x);
printf("%d\n",y);

}


int nthprime_number(){

 int n;
 scanf("%d",&n);
 int count=1;
 int i;

  for(i=3;i<1000;i++){

   bool flag=true;

	  for(int j=2;j<i;j++){

		    if(i%j==0){
			 flag=false;
		    }

	  }
	           if(flag){
		         count=count+1;
	           }
                      if(count==n){
                      printf("%dth prime number is %d",n,i);
                         break;
                      }

 }

}

int prime_number2(){

 int n;
 scanf("%d",&n);
 int count=1;

  for(int i=3;i<1000;i++){
   bool flag=true;
	  for(int j=2;j<i;j++){

		  if(i%j==0){
			  flag=false;
		  }
	  }
		       if(flag){
			     count=count+1;
		       }


		if(i==n){
			if(flag){
				printf("%d is %dth prime number",n,count);
			}

			else{
			printf("it is not prime number");
			}

		}
	  }

  }

int array1(){

int arr[3][3]={ {1,2,3},{4,5,6},{7,8,9} };


printf("%d",arr[1][1]);


}


//finding the missing number

int problem1(){

	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
	 scanf("%d",&arr[i]);
	}


for(int j=0;j<n;j++){
	 for(int i=0;i<(n-1);i++){

       if(arr[i]>arr[i+1]){

           arr[i]=arr[i]+arr[(i+1)];
           arr[(i+1)]=arr[i]-arr[(i+1)];
           arr[i]=arr[i]-arr[(i+1)];

       }

	 }
}
bool flag=true;


for(int i=0;i<n;i++){

	if(arr[i]!=i+1){

		printf("missing number is %d",(i+1));
		flag=false;
		break;

	}


}

if(flag){

	printf("no missing");
}
}

//finding the peak element

int problem2(){


	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){

		scanf("%d",&arr[i]);

	}

	if(arr[0]>arr[1]){

		printf("%d",arr[0]);

	}


	   for(int i=1;i<(n-1);i++){


		 if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
			printf("%d\n",arr[i]);
		 }

	  }

}


//max in array

int problem3(){

	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){

		scanf("%d",&arr[i]);

	}

	int max=arr[0];

	for(int i=1;i<n;i++){

       if(max<arr[i]){

    	   max=arr[i];
       }


      }

printf("%d",max);

}

//min in array;

int problem4(){

	int n;
    scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){

	  scanf("%d",&arr[i]);

	}


	int min=arr[0];

	for(int i=1;i<n;i++){

		if(arr[i]<min){
			min=arr[i];
		}

	}

printf("%d",min);


}





int binarysearch(int arr[],int l,int r,int x){


	while(l<=r)
	{
		int m=(l+r)/2;

		if(x==arr[m])
			return m;
		if(arr[m]<x)
			l=m+1;
		else
		    r=m-1;
	}


return 0;


}

int problem5(){
	int n;
    scanf("%d",&n);
    int arr[n];
	for(int i=0;i<n;i++){
	    scanf("%d",&arr[i]);
	}
  int a;
  printf("give the number a\n");
  scanf("%d",&a);


	for(int j=0;j<n;j++){
		 for(int i=0;i<(n-1);i++){

	       if(arr[i]>arr[i+1]){

	           arr[i]=arr[i]+arr[(i+1)];
	           arr[(i+1)]=arr[i]-arr[(i+1)];
	           arr[i]=arr[i]-arr[(i+1)];

	       }

		 }
	}
  int Return=binarysearch(arr,0,n-1,a);


	if(Return==0){

		printf("it is not there");

	}
	else{

		printf("%d is present at index %d",a,Return);
	}
}

int sorting(int n,int arr[]){


	for(int j=0;j<n;j++){

		 for(int i=0;i<(n-1);i++){

	       if(arr[i]>arr[i+1]){

	           arr[i]=arr[i]+arr[(i+1)];
	           arr[(i+1)]=arr[i]-arr[(i+1)];
	           arr[i]=arr[i]-arr[(i+1)];

	       }

		 }
	}






}
int Number_of_elements_in_sorted_array(){

	int n;
	printf("give the number of elements in array\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		    scanf("%d",&arr[i]);
		}
	int count;
	int a;
	printf("give the testing number");
	scanf("%d",&a);


	for(int i=0;i<n;i++){


		if(arr[i]==a){
			count=count+1;
		}

	}

 printf("%d is repeated %d times",a,count);






}


int Highest_frequency_element_in_array(){


 int n;
 scanf("%d",&n);
 int arr[n];
	for(int i=0;i<n;i++){
	  scanf("%d",&arr[i]);
	}
int sai[n];

for(int j=0;j<n;j++){
	 for(int i=0;i<(n-1);i++){

       if(arr[i]>arr[i+1]){

           arr[i]=arr[i]+arr[(i+1)];
           arr[(i+1)]=arr[i]-arr[(i+1)];
           arr[i]=arr[i]-arr[(i+1)];

       }

	 }
}
  int count;
  for(int i=0;i<n;i++){
	 count=0;
	  for(int j=0;j<n;j++){
		  if(arr[i]==arr[j]){
			  count=count+1;
		  }
	  }
	  sai[i]=count;
  }
  int max=sai[0];
   for(int i=1;i<n;i++){

	   if(max<sai[i]){

		   max=sai[i];
	   }
   }
  int i;
  for( i=0;i<n;i++){
	  if(max==sai[i]){
		  break;
	  }
  }
	printf("highest frequency element is %d",arr[i]);
}

int sorting_of_0_and_1(){

	int n;
	int count;
		int Count;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	  for(int i=0;i<n;i++){

		  if(arr[i]==0){
			  count=count+1;
		  }
			if(arr[i]==1) {
				Count=Count+1;
			}

	  }
	  printf("%d %d\n",count,Count);

	    for(int i=0;i<count;i++){
	    	arr[i]=0;

	    }
	  for(int i=count;i<(count+Count);i++){
		  arr[i]=1;

	  }

	  for(int i=0;i<n;i++){

		  printf("%d\n",arr[i]);
	  }

}

















