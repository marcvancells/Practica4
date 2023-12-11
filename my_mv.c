#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void main (){
	int fd,fd1,num;
        char nom[100],lloc[100],buf[3];
        printf("Nom del fitxer/lloc: ");
        scanf("%s",nom);
        printf("Nou Lloc/Arxiu: ");
        scanf("%s",lloc);
	if ((fd=open(nom,O_RDONLY))< 0)
		perror("Error en el open");
	if ((fd1 = open(lloc, O_CREAT | O_WRONLY | O_TRUNC, S_IRWXU)) < 0)
        	perror("Error en el creat");
	while((num=read(fd,buf,3))> 0) {
		if(write(fd1,buf,num)<0)
			perror("Error en el write");
		}
	int unlink(const char *nom);
}
