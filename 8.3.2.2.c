#include <stdio.h>
#define N 5
#define M 3

int a[N];
int b[M];

void comb(int, int);
void print();
void swap(int, int);

int main()
{
    int i;
    for(i = 0; i < N; ++i){
        a[i] = i + 1;
    }
    comb(N, M);
}

void comb(int n, int m)
{
    int i;
    if(m == 0) {  // BaseCase
        print();
        return;
    } else {
        for(i = n - 1; i >= 0; --i){
          b[m-1] = a[i];
          comb(i, m - 1);
        }
    }
}

void print()
{
    int i;
    for(i = 0; i < M; ++i)
        printf(" %d ",a[i]);
    printf("\n");
}

void swap(int i, int offset){
    int temp;
    temp = a[offset];
    a[offset] = a[i];
    a[i] = temp;
}

