
#include<stdio.h>
//递归算法
int recurbinary(int *a, int key, int low, int high)
{
    int mid;
    if(low > high)
        return -1;
    mid = (low + high)/2;
    if(a[mid] == key) return mid;
    else if(a[mid] > key)
        return recurbinary(a,key,low,mid -1);
    else
        return recurbinary(a,key,mid + 1,high);
}

//非递归算法
int binary( int *a, int key, int n )
{
    int left = 0, right = n - 1, mid = 0;
    mid = ( left + right ) / 2;
    while( left < right && a[mid] != key )
    {
        if( a[mid] < key ) {
            left = mid + 1;
        } else if( a[mid] > key ) {
            right = mid - 1;
        }
        mid = ( left + right ) / 2;
    }
    if( a[mid] == key )
        return mid;
    return -1;
}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,12,13,45,67,89,99,101,111,123,134,565,677};
    int b[] = {677,1,7,11,67};
    int i;
    for( i=0; i<sizeof(b)/sizeof(b[0]); i++ )
    {
        //printf( "%d\n", recurbinary(a, b[i],0,sizeof(a)/sizeof(a[0])-1) );
        printf( "%d\n", binary( a, b[i], sizeof(a)/sizeof(a[0])));
    }
    return 0;
}
