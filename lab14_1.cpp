#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double A[],int N,double B[])
{
    double sum,sum2,sum3,multi=1,max=A[0],min=A[0];
    int i=0;
    for(i=0;i<N;i++) sum+=A[i];
    B[0]=sum/N;
    for(i=0;i<N;i++) sum2+=pow(A[i]-B[0],2);
    B[1]=pow((sum2/(N)),0.5);
    for(i=0;i<N;i++) multi*=A[i];
    B[2]=pow(multi,1.0/N);
    for(i=0;i<N;i++) sum3+=pow(A[i],-1);
    B[3]=N/sum3;
    for(i=0;i<N;i++) if(A[i]>max) max=A[i];
    B[4]=max;
    for(i=0;i<N;i++) if(A[i]<min) min=A[i];
    B[5]=min;
}