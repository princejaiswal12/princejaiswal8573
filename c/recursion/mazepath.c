#include<stdio.h>
int maze(int currentrow,int currentcoulmn,int endingrow,int endingcoulmn){
    int rightways=0; 
    int downways=0; 
    if(currentrow==endingrow && currentcoulmn==endingcoulmn){//cant move
        return 1;
    }
    if(currentrow==endingrow){//can't move down
        rightways+=maze(currentrow,currentcoulmn+1,endingrow,endingcoulmn);
    }
    if(currentcoulmn==endingcoulmn){//cant move right
        downways+=maze(currentrow+1,currentcoulmn,endingrow,endingcoulmn);
    }
    if(currentcoulmn<endingcoulmn && currentrow<endingrow){ //can move down &right
        rightways+=maze(currentrow,currentcoulmn+1,endingrow,endingcoulmn);
        downways+=maze(currentrow+1,currentcoulmn,endingrow,endingcoulmn);
    }   
    int totalways=rightways+downways;
    return totalways;
}
int main(){
    int n;
    printf("enter number of row of maze");
    scanf("%d",&n);
    int m;
    printf("enter number of row of maze");
    scanf("%d",&m);
    int numberofways=maze(1,1,n,m);
    printf("%d",numberofways);

}