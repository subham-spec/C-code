#include<stdio.h>
int main(){

    int basicSalary=50000;
    int DA=basicSalary *1445/10000;
    int HRA=7500;
    int TA=6200;
    int others=5000;

    printf("Tax which are cut from the salary are");
   
    int PF;
    PF = basicSalary*1699/10000;
    printf("\n\nPF cut from your salary is\n %i  " , PF);
    
    int IT;
    IT= basicSalary*12/100;
    printf("\n\nIT cut from your salary is\n%i  " , IT);

    int netSalary;
    netSalary=12*(basicSalary+DA+HRA+TA+others-(PF+IT));

    printf("\n\nYou net salary in yours hand is\n%i  ", netSalary);

}


