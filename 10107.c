#include<stdio.h>

int main()
{
    long long n;
    long long median[10005];
    int allnum = 0;

    while( scanf( "%lld", &n ) != EOF )
    {
        int i, j;

        for( i = 0 ; i < allnum ; i++ )
            if( n > median[i] )
            {
                for( j = allnum ; j > i ; j-- )
                    median[j] = median[j-1];
                break;
            }  

        median[i] = n;
        allnum++;

        if( allnum % 2 )
            printf( "%lld\n", median[allnum/2] );
        else
            printf( "%lld\n", (median[allnum/2-1]+median[allnum/2]) / 2);
        
    }
    return 0;
}