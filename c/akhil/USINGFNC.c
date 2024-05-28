//WAP to display following using function-
// (1)Credit amount
// (2)Debit amount
// (3)Display bank balance
// (4)Display customer name and account
#include <stdio.h>
//void bankdetail(struct arr){
    
//}
int main(int argc, char const *argv[])
{
    typedef struct bank
    {
        char customername[20];
        float amount;
        int bankbalance;
        int Debitamount;
        int Creditamount;

        
    } bank ;
    bank arr[3];
    
    for(int i=0;i<3;i++){
      bankdetail(arr[i].customername,arr[i].amount,arr[i].bankbalance,arr[i].Creditamount,arr[i].Debitamount);
    }
    
    
 return 0;
}