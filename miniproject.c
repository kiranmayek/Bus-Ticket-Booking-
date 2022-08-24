#include<stdio.h>
#include<math.h>
int main(){
   printf("Enter the password:");
   int password;//password=4022
   scanf("%d",&password);
   if(password==4022){
   int t=60,n;
   //n=no of passengers that board on bus
   printf("\n");
    while (t--)
        printf("*");
    printf("BUS TICKET booking MACHINE");
    t=60;
    while(t--)
    printf("*"); 
    printf("\nThe destination of bus should be between 1 to 15\n\n");
    //let bus capacity be 4.
    int bc=4;
     printf("\nEnter the price of ticket between two stops:");
    float cost;
    scanf("%f",&cost);
    printf("\nenter the total passengers that board on bus :");
    scanf("%d",&n);
    int arr[16]={0};
    //arr is for no of passengers at that time.
    for(int i=0;i<n;i++){
     int x,y;
     int limitexceed=0;
     printf("Enter the stop where %d st/nd/rd/th passenger starts and leaves :",i+1);
     scanf("%d %d",&x,&y);
     if(x>0 && y<=15 ){
          for(int j=x;j<=y;j++){
            if(arr[j]>=bc){
               printf("passenger limit exceeded :(\n\n");
               limitexceed=1;
               break;
            }
          }
         if(limitexceed==1) {continue;}
            for(int j=x;j<=y;j++){
            arr[j]++;
            }
         
          float price=cost*(y-x);
        printf("The cost of whole journey by passenger is:%f\n",price); 
        printf("Enter the amount given by passenger:");
        float pamount;
        scanf("%f",&pamount);
        if(pamount<price)
        printf("Money given by passenger is insufficient and he has to pay %f more\n\n",price-pamount);
        else
        printf("The remaining amount to be given to passenger :%f\n\n",pamount-price);
     }
     else{
         printf("Sorry :( but there were only 15 stops\n\n");
     }
    }
   }
   else
   printf("Your password is incorrect");
}