// 1
#include <stdio.h>
main()
{
  int z;
  int w;
  int x=1;
  int y=2;
  z=x+y;
  w=y-x;
  printf("%d",z);
  printf("%d",w);
}

//2
#define PI 3.14159
#include <stdio.h>
main()
{
    int a=5;
    float b=23.5;
    int c=31000;
    printf("%d матеріалів тканини коштувало %f гривень.\n",a,b);
    printf("Значення числа PI рівне %f.\n", PI);
    printf("ІВМ сумісні комп'ютери набули широкого розповсюдження. \n");
    printf("%c%d\n",'$', c);
}
  
//3
#include <stdio.h>
main()
{
    printf("/%d/\n",557);
    printf("/%10d/\n",557);
    printf("/%-10d/\n",557);
    
}
main()
{
    printf("/%8d/\n",21949);
    printf("/%8d/\n",-1611);
    printf("/%8d/\n",-8380);
    printf("/%8d/\n",2143);
}

main()
{
    printf("/%f\n", 6543.21);
    printf("/%e/\n", 6543.21); 
    printf("/%4.2f\n", 6543.21);
    printf("/%3.1f\n", 6543.21);
    printf("/%10.3f/\n", 6543.21);
    printf("/%10.3e//n", 6543.21);
}

//4
#define riadok "Чудова погода"
main()
{
    printf("/%2s/\n", riadok);
    printf("/%15.s/\n", riadok); 
}
main()
{
    printf("%d\n",557);
    printf("%o\n",557);
    printf("%x\n",557);
    printf("%d\n",-557);
}

// 5
#include<stdio.h>
main()
{
    int vik;
    char name[30];
    printf("Vash vik?\n");
    scanf("%d",&vik);
    printf("Vvedit vashe imya\n");
    scanf("%s",name);
    printf("Ptyvit %s Jakomy(iy) %d rokiv",name,vik);
}

//6
#include<stdio.h>
#include<conio.h>
#define STOP '*'
main()
{
    char ch;
    ch=getchar();
    ml : if(ch != STOP);
    {
        putchar(ch);
        ch=getchar(); goto ml;} }  
