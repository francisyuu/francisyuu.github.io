#include <stdio.h>
#include <string.h>

char f[655350];
char man[655350];
int depth;
int argc;
/*char endstr[32];*/
void findman(char* mstr,char* argv[],char* endstr)
{
    char startstr[32]="# ";
    strcat(startstr,argv[depth]);
    char* start=strstr(mstr,startstr);
    if(start==NULL)
    {
      printf("no such cmd exists\n");
      return;
    }
    char* end=strstr(start,"\n#");
    while(end!=NULL)
    {
      int i=0;
      while(end[i+1]=='#')i++;
      if(i<=depth+1)break;
      else end=strstr(end+i,"\n#");
    }
    if(end==NULL)
    {
      
      printf("file format wrong,cant find the end of man\n");
      return;
    } 
    unsigned manlen=strlen(start)-strlen(end);
    /*printf("len=%d\n",manlen);*/
    /*printf("len=%s\n",start);*/
    /*printf("len=%s\n",end);*/
    memset(man,0,sizeof(man));
    strncpy(man,start,manlen+1);
    if(depth==argc-1)
    {
      printf("%s",man);
    }
    else
    {
      endstr=strcat(endstr,"#");
      depth+=1;
      findman(start,argv,endstr);
    }
}
int main(int argci,char *argv[])
{
  argc=argci;
  FILE *fp=fopen("/home/francisyuu/Documents/francisyuu_github_page/francisyuu.github.io/qman.md","r");
  if(fp==NULL)printf("wrong path of qman.md\n");
  else while(1)
  {
    char fline[1024];
    fgets(fline,1024,fp);
    if(feof(fp))break;
    strcat(f,fline);
  }
  if(argc>1)
  {
    depth=1;
    char endstr[32]="\n##";
    findman(f,argv,endstr);
  }
  else printf("%s",f);
  return 0;
}
