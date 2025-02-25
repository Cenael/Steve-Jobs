### Costrutti IF 

Consente di eseguire una(o +) istruzioni se una condizione è vera.

### Costrutto FOR

Il ciclo for ripete n volte le istruzini interne alle graffe; 

for(inizializzazione; condizione; incremento){
istruzioni: fai queste cose finché la condizione è reale
}

for (i=val_iniziale; i < val_finale; i++){
    istruzioni
}
La variabile "i", è un contatore (i, j, k), ha una valenza locale (nasce e muore per fare il for). 
Se dichiari "int i" la i è interna al ciclo for.

### Costrutto WHILE

Si usa se non sai quante volte lo devi fare
Il ciclo si ripete finché la condizione è vera.
while(condizione){ 
    istruzioni;
}
se la condizione è inizialmente falsa le istruzioni non saranno mai eseguite.

### Costrutto DO - WHILE

Si usa se lo devi usare almeno una volta
Crea un ciclo che prevede il controllo finale di una condizione. 
Anche se la condizione è falsa, l'istruzione viene eseguita almeno una volta.
