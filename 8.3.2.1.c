#include <stdio.h>
#define N 5
#define M 3

int a[N];

void perm(int); /*求数组的全排列 */
void print();
void swap(int, int);

int main()
{
    int i;
    for(i = 0; i < N; ++i){
            a[i] = i + 1;
        }
    perm(0);
}

void perm(int offset)
{
    int i, temp;
    if(offset == M) {  // BaseCase
        print();
        return;
    } else {
        for(i = offset;i < N; ++i){
            swap(i, offset);//交换前缀
            perm(offset + 1);//递归
            swap(i, offset);//将前缀换回来，继续做前一次排列
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

