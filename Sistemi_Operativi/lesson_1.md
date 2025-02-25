(sistema operativo utilizza i driver per comunicare con la "macchina")

Accesi, spenti e controllati (quanta memoria consuma)

Il sistema operativo controlla i processi E GESTISCE LE RISORSE hardware e software. Consente all'utente di interagire con la macchina.
La memoria viene gestita in priorità e utilizzo (tipo biblioteca), se un programma non viene utilizzato in quel determinato momento, viene messo "da parte" e libera la memoria => ne occupa un decimo
Gestisce anche le periferiche (dispositivi di input/output)
Organizza i dati e i file assicurando accesso sicuro e ordinato ai dati
Gestisce la sicurezza e il controllo degli accessi (esegui come amministratore);



Tipologie di sistemi operativi:

- multipiattaforma
- nativi con la macchina
- specifici per un funzionamento


**Multipiattaforma**

I processi sono dei programmi, vengono creati, eseguiti e terminati.
Quando lanci un programma crei un *processo*, viene allocata una memoria e assegnata una **priorità**, per scegliere se farlo partire prima o dopo di altri processi (es. prima windows, antivirus non possono essere bloccati, word si)
Durante l'esecuzione vengono schedulati i consumi del programma (quanta memoria utilizzata, processore, scheda video)

Windows utilizza dll (file condivisi), tutti i programmi utilizzano un file "base" sul quale scrive nuove regole, motivo per cui è anche soggetto a virus 
Mac è "isolato", ogni programma scrive un nuovo file 

Stessa cosa android iOS

Periferiche

Quando un programma fa richiesta ad una periferica, il sistema operativo gestisce la richiesta: 
buffering, memorizza temporaneamente i dati (avvia il comando e funziona solo quando la periferica risponde), il sistema operativo libera la memoria e lascia continuare il processo alla periferica 
spooling, riceve il segnale 



"Man in the middle": qualsiasi cosa si mette in mezzo a ciò che manda il segnale, può bloccarlo 


Permessi dei file: 
quali file può modificare, chi e come può modificarli
lettura 
scrittura 
esegui


Giulio Cesare ha inventato la crittografia 
Rende possibile crittografare (capire) i messaggi solo a chi possiede la chiave di decrittazione

Tutte le operazioni che fa il sistema operativo vengono registrate: file di log: registra operazioni critiche come accessi

Più sono i dati più memoria e processore servono per controllarli e gestirli 

>dir per leggere 