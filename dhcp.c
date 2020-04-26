#include <stdio.h>
#include <unistd.h>

//Affiche La simulation d'unne attribution IP à une machine
void simulateDHCP();

//Affiche le menu et ses options
int showMenu();

//Indicateur de chargement
void loader();

//Fonction principale: Ici on appelle toutes les mini fonctions
void main(){
    //todo stock le numéro saisi par l'utilisateur et le programme agit en conséquence
    int todo = showMenu();

    int id;
    //Suivant le numéro saisi, le programme fait une action (configuration DHCP ...)
    switch(todo){
        case 1:
            printf("Liste des machines\n");
            //>>>>>>>>>>>>Il faudra Afficher la liste des machines<<<<<<<<<<<<<
            
            printf("Entrez l'identifiant de la machine: ");
            scanf("%d",&id);
            //>>>>>>>>>>>>Il faudra verifier si la machine est dans la liste des machines et si oui, faire la simulation<<<<<<<<<<<<<
            simulateDHCP();
        break;
        default:
            break;
    }
}


//Ici c'est la définition des differentes fonctions déclarées en haut
void loader(){
    sleep(1);

    for(int i=0; i<10;i++) {
        printf("#####");
        fflush(stdout);
        sleep(1);
    }
    printf("\n");
    sleep(2);
}

void simulateDHCP(){
    printf("Machine: Envoi d'un DHCP discover !\n");
    loader();
    printf("Serveur: Envoi d'un DHCP offer !\n");
    loader();
    printf("Machine: Envoi d'un DHCP Request !\n");
    loader();
    printf("Serveur: Envoi d'un DHCP ACK !\n");
    loader();
    printf("Adresse IP attribuée !\n");
}

int showMenu(){
    int choisi;
    printf("==========================================\n");
    printf("Bienvenue sur le panneau de contrôle\n");
    printf("Choisissez une option pour continuer\n");
    printf("==========================================\n");
    printf("(1) Attribution d'une adresse IP\n");
    printf("(2) Quitter\n");
    scanf("%d",&choisi);

    return choisi;
}