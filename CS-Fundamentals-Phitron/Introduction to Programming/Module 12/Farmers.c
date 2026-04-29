#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        int One_fer_wrk = ( M1 * D );
        int New_Add_Far = (M1 + M2);
        int New_Add_Far_wrk = (One_fer_wrk / New_Add_Far);

        int fewer_days = D - New_Add_Far_wrk;

        printf("%d\n", fewer_days);
    }
    
    return 0;
}