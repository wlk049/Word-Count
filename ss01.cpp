#include<stdio.h>
#include<string.h>
main(int argc,char** argv)
{
    int sum=0;
    char tmp;
	char x[]={'-','w'};
    char str[20];


    FILE *fp=fopen(argv[2],"r");
    if(strcmp(argv[1],x)==0)
    {
    if(fp==NULL)
    {
        return 0;
    }
    while(!feof(fp))
    {
        fgetc(fp);
        sum++;
    }
    fclose(fp);
    sum--;
    printf("���ֵ��ַ��� :  %d\n",sum);
    }
    else
    {        
    if(fp==NULL)
    {
        return 0;
    }
    while(!feof(fp))
    {
        tmp = fgetc(fp);
        if(tmp == ' '||tmp==',')
		sum++;
    }
    fclose(fp);
    sum++; 
    printf("�����ֵĵ����� :  %d\n",sum);
    }
    return 0;
}
