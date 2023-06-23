#include<stdio.h>
#include<string.h>

struct book{
    char title[50];
    char author[50];
    int pbyear;
    enum genre{
        FICTION, NON_FICTION, SCIENCE_FICTION, MYSTERY, THRILLER
    }gnr;
    
}bk;
void displaybookinfo(struct book bk){
    printf("Title: %s",bk.title);
    printf("Author: %s",bk.author);
    printf("Publication Year: %d\n",bk.pbyear);
    if(bk.gnr==0){
        printf("Genre: Fiction");
    }
    else if(bk.gnr==1){
        printf("Genre: Non-Fiction");
    }
    else if(bk.gnr==2){
        printf("Genre: Science-Fiction");
    }
    else if(bk.gnr==3){
        printf("Genre: Mystery");
    }
    else if(bk.gnr==4){
        printf("Genre: Thriller");
    }
}


int main(){
    char g[50];
    fgets(bk.title,sizeof(bk.title),stdin);
    fgets(bk.author,sizeof(bk.author),stdin);
    scanf("%d",&bk.pbyear);
    scanf("%s",g);
    if(strcmp(g,"FICTION")==0){
        bk.gnr=0;
    }
    else if(strcmp(g,"NON_FICTION")==0){
        bk.gnr=1;
    }
    else if(strcmp(g,"SCIENCE_FICTION")==0){
        bk.gnr=2;
    }
    else if(strcmp(g,"MYSTERY")==0){
        bk.gnr=3;
    
    }
    else if(strcmp(g,"THRILLER")==0){
        bk.gnr=4;
    }
    else{
        printf("invalid genre");
    }
    
   displaybookinfo(bk); 
    return 0;
}