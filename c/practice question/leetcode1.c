#include <stdio.h>
int main(int argc,char *argv[]) {
    int nums[4] = {2,7,11,15};
    int target=9;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(nums[i]+nums[j]==9){
                printf("%d %d",i,j);
            }
        }
    }
    return 0;
}