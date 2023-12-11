#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void main (){
        int num = 1,fd,files;
        char nom[100],buf[3],c;
        printf("Nom del fitxer: ");
        scanf("%s",nom);
        printf("Nombre de Files: ");
        scanf("%d",&files);
        if ((fd=open(nom,O_RDONLY))<0)
                perror("Error en el open");
        if (files < 1)
                perror("Error en nombre de files");
        else{
                while (files >= num & read(fd,&c,1) != 0){
                        if (c==10) num++;
                        write(1,&c,1);
                        }



        }
}






