#include<stdio.h>
main()
{
    int i,j,mx,mn,tt;
    float avg;
    int a[100][100]={{},
                     {123,123,345,43,24,23,45},
                     {123,567,565,434,5654,345,432},
                     {23,34,55,66,77,345,678},
                     {322,344,566,776,434,566,3455},
                     {23,55,664,6667,342,455,334},
                     {344,667,533,566,455,125,458},
                     {122,223,445,332,455,555,6534},
                     {324,534,345,678,987,545,567},
                     {653,555,3235,7675,677,4567,456}

                     };
       for(i=0;i<10;i++)
       {
           printf("\nLabour %d",i+1);
          mx=a[i][0];
          mn=a[i][0];
          tt=0;
            for(j=0;j<7;j++)
           {
               if(mx<a[i][j])
                 mx=a[i][j];
                if(mn>a[i][j])
                 mn=a[i][j];

                 tt=tt+a[i][j];
                 avg=(float)tt/7;

               printf("\n Day %d Encome=%d",j+1,a[i][j]);

           }
           printf("\nMaximum Encome=%d",mx);
           printf("\nMinimum Encome=%d",mn);
           printf("\n Total Encome=%d",tt);
           printf("\nAvarage Encome=%.2f",avg);
       }

}
