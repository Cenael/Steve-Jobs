try:
    import numpy as np
except ImportError:
    print("Numpy is not installed. Please install it using 'pip install numpy'.")

def miafunzione():
    print("ciao")
    print ("ciao2")
    un_array_np = np.array([1,2,3])
    print(un_array_np)
    miafunzione2()

def miafunzione2():
    print ("seconda funzione")

def miafunzione3(miavar):
    miavar=miavar+2
    return miavar

### MAIN ###
miafunzione()
variabile = 3
print(miafunzione3(variabile))