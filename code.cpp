#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main ()
{
char asi[9],zor[9];
int a ; 	 
FILE *dosya1,*dosya2,*dosya3;

 //File names may vary.
 
dosya1=fopen("zorunlu.txt","r");
dosya2=fopen("asilar.txt","r");
dosya3=fopen("dozlar.txt","w");

//File check.

if(dosya1==NULL || dosya2==NULL||dosya3==NULL){
	
printf("Dosyalardan birisi ya da birkaci bulunamadi.");
}

system("COLOR 2 ");

fscanf(dosya1,"%s %d",asi,&a);

int i =0;	

//Read and process content.

while(!feof(dosya1)){
	
    rewind(dosya2);
    
    fscanf(dosya2,"%s",zor);
    
while(!feof(dosya2)){	

if(strcmp(asi, zor) == 0 ){
	
i++;}	

fscanf(dosya2,"%s",zor);

}

//Write to last result.

if(a>i){
	
fprintf(dosya3,"%s %d - \n",asi,a);}

else{fprintf(dosya3,"%s %d + \n",asi,a);}

fscanf(dosya1,"%s %d",asi,&a);
i=0;	

}

//Close files.

fclose(dosya2);		fclose(dosya1);		fclose(dosya3);	
return 0;
}	
