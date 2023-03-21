#include <stdio.h>
#define MAXN 101

int max(int a[ ], int m, int n); 
int min(int a[ ], int m, int n);

int main(void)
{
    int i, n; 
    int a[MAXN]; 
    
    scanf ("%d", &n); 
    if(n >= 2 && n <= MAXN-1 ){
        for(i = 0; i < n; i++){ 
            scanf ("%d", &a[i]); 
        }
        printf("max = %d\n", max(a, 0, n-1));
        printf("min = %d\n", min(a, 0, n-1));
    }else{
        printf("Invalid Value.\n");    
    }

    return 0;
}


/* 请在这里填写答案 */
int max(int a[ ], int m, int n){
    int i,k;
    k=m;
    for(i=m;i<=n;i++){
        if(a[i]>a[k]){
            k=i
        }
    }
    return a[k];
}
int min(int a[ ], int m, int n){
    int i,k;
    k=m;
    for(i=m;i<=n;i++){
        if(a[i]<a[k]){
            k=i
        }
    }
    return a[k];
}
