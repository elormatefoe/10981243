#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i,j=2,n,counter=0,sum=0,flag=1;
    //the program ask to input maximum limit
    cout<<"Enter the value to n:";
    cin>>n;
    //store the maximum in the max variable
    while(counter<n){
        for(i=2; i<=j-1; i++){
            if(j%i==0){
                flag=0;
                break;
            
            }
        }

        //when the 'i' is prime then add to sum
        if(flag){
            sum+=j;
            counter++;
        }
        j++;
        flag=1;
    }
    cout<<"sum of first "<<n<<" prime numbers:"<<sum;
    getch();
    return 0;
}
