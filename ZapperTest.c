#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef unsigned int word;
typedef unsigned char byte;

word width, height;
char *str;


void displayMatrix(char *s,word w, word h){

word x,y;
char c;
int len=strlen(s)*8;

 for (y=0;y<h;y++){
  for (x=0;x<w;x++){
    c=s[((y*w)+x)/8];
    if ((y*w)+x>len-1) c=0;
    //printf ("%c%d",c,((y*w)+x)%8);
    printf ("%d",(c>>((y*w)+x)%8)&0x01);	  
  }
  printf ("\n");
 }
}

int main (int argc, char *argv[]){
	if (argc<3){
		printf ("Usage: binary <width> <height> <string>\n\n");
		return(-1);
	}
 width=atoi(argv[1]);
 height=atoi(argv[2]);
 str=argv[3];
 printf ("Displaying '%s' in binary matrix %ux%u\n\n",str,width,height);

 displayMatrix(str,width,height);

 return(0);
}
