# 🚀 Processi, Thread e Scheduling: Come il Sistema Operativo Organizza il Lavoro

## 💻 1. Concetto di Processo

Un **processo** è l'unità fondamentale di esecuzione in un sistema operativo. Non è solo un programma, ma un'entità attiva che comprende il programma in esecuzione, i suoi dati e tutte le risorse necessarie. 

### 🧩 Caratteristiche principali:
- **Immagine in memoria** 🧠: codice, dati, stack e heap
- **Program Counter (PC)** 🔍: punta alla prossima istruzione
- **Registri CPU** ⚙️: contengono dati temporanei
- **Risorse allocate** 📊: memoria, file, dispositivi I/O

Durante il suo ciclo di vita, un processo attraversa diversi stati: **new** (appena creato), **ready** (pronto per l'esecuzione), **running** (in esecuzione), **blocked** (in attesa di un evento) e **terminated** (completato).

Il sistema operativo tiene traccia dei processi tramite il **Process Control Block (PCB)** 📝, una struttura dati che contiene tutte le informazioni necessarie per gestire il processo: PID, stato, valori dei registri e altro ancora. Grazie al PCB, il sistema può sospendere un processo e riprenderlo esattamente dal punto in cui era stato interrotto.

## 🔄 2. Manipolazione dei Processi

La gestione dei processi è fondamentale per il funzionamento di un sistema operativo moderno.

### 🌱 Creazione dei processi
Nei sistemi Unix-like, i processi vengono creati principalmente attraverso due operazioni: 
- **fork()** 🍴: crea un nuovo processo (figlio) come copia del chiamante
- **exec()** 🚀: carica un nuovo programma nel processo

Queste operazioni permettono di costruire una struttura gerarchica ad albero, dove ogni processo (tranne il processo iniziale) ha un padre.

### ⏹️ Terminazione dei processi
Un processo può terminare in vari modi: normalmente al completamento, a causa di un errore o forzatamente da un altro processo. In ogni caso, il sistema operativo si occupa di rilasciare tutte le risorse allocate.

### 💬 Comunicazione tra processi
I processi separati possono comunicare e coordinarsi attraverso vari meccanismi:

- **Memoria condivisa** 🤝: accesso alla stessa area di memoria
- **Scambio di messaggi** 📨: invio di pacchetti di informazioni
- **Pipe e socket** 📡: canali di comunicazione tra processi
- **Semafori** 🚦: meccanismi di sincronizzazione

La sincronizzazione è cruciale quando più processi condividono risorse. Senza di essa, possono verificarsi **race condition** 🏁, situazioni in cui il risultato dipende dall'ordine imprevedibile di esecuzione dei processi.

## 🧵 3. Processi Leggeri (Threads)

I **thread** rappresentano un'evoluzione del concetto di processo, offrendo un modello più leggero e flessibile. Immagina i thread come "mini-processi" all'interno di un processo.

### 🔄 Thread vs Processi
Mentre i processi hanno spazi di memoria completamente separati, i thread di uno stesso processo condividono:
- Lo stesso spazio di indirizzamento 🏠
- I file aperti 📂
- Altre risorse del processo 🔧

Questo rende la creazione e la commutazione tra thread molto più veloce rispetto ai processi, ma introduce nuove sfide legate alla sincronizzazione.

### 🧪 Tipi di thread
- **Thread a livello utente (ULT)** 👤: gestiti da librerie nel livello applicativo
- **Thread a livello kernel (KLT)** ⚙️: gestiti direttamente dal sistema operativo
- **Modello ibrido** 🔄: combina entrambi gli approcci

### ✨ Vantaggi dei thread
L'uso dei thread offre numerosi benefici: condivisione efficiente delle risorse, maggiore reattività delle applicazioni, migliore sfruttamento dei sistemi multiprocessore e comunicazione semplificata. Tuttavia, la programmazione multithreading introduce anche sfide legate alla sincronizzazione e al rischio di **deadlock** 🔒, situazioni di stallo in cui due o più thread si bloccano a vicenda.

## ⏱️ 4. Scheduling dei Processori

Lo **scheduling** è il meccanismo con cui il sistema operativo decide quale processo o thread deve essere eseguito in un determinato momento.

### 🎯 Obiettivi dello scheduling
Un buon algoritmo di scheduling deve bilanciare diversi obiettivi:
- Massimizzare l'utilizzo della CPU 💪
- Minimizzare il tempo di attesa ⏰
- Garantire equità tra i processi ⚖️
- Massimizzare il throughput 📈
- Minimizzare il tempo di risposta ⚡

### 🕰️ Livelli di scheduling
- **A breve termine** ⏱️: decide quale processo mandare in esecuzione
- **A medio termine** 📆: gestisce lo swapping tra memoria e disco
- **A lungo termine** 📅: decide quali processi ammettere nel sistema

### 🧮 Principali algoritmi di scheduling

#### 1. First-Come, First-Served (FCFS) 🏁
Il primo processo che arriva è il primo ad essere servito. Semplice ma può penalizzare processi brevi che arrivano dopo processi lunghi.

#### 2. Shortest Job First (SJF) 🏃‍♂️
Esegue prima i processi con tempo di esecuzione più breve. Ottimo per minimizzare il tempo medio di attesa, ma richiede di conoscere o stimare la durata dei processi.

#### 3. Priority Scheduling 🏆
Assegna priorità ai processi e serve prima quelli a priorità più alta. Rischio: i processi a bassa priorità potrebbero non essere mai eseguiti (starvation).

#### 4. Round Robin (RR) 🔄
Assegna a ciascun processo un quanto di tempo fisso, al termine del quale il processo viene rimesso in coda. Garantisce una buona responsività, ideale per sistemi interattivi.

### 📊 Valutazione degli algoritmi
Per misurare l'efficacia di un algoritmo di scheduling, si considerano:
- Tempo di attesa ⏳
- Tempo di risposta ⚡
- Tempo di completamento 🏁
- Throughput 📈
- Utilizzo della CPU 💻

Lo scheduling è un compromesso tra efficienza e equità, tra la massimizzazione delle prestazioni del sistema e la soddisfazione delle esigenze degli utenti. Un buon algoritmo di scheduling adatta la sua strategia al contesto specifico, che si tratti di un server, un desktop o un dispositivo embedded.