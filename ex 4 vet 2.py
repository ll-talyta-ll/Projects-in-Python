import random
a = [0]*4
d = [0]*3
c = []

def entrada(vet):
    for i in range(len(vet)):
        vet[i]= random.randint(1,10)
    print(vet)

def intercalacao():
    for i in range(len(a)):
        x=a[i]
        c.append(x)
        if i<len(d):
            y=d[i]
            c.append(y)
    print('O vetor c é: ', c)

def main():
    print('O vetor a é: ')
    entrada(a)
    print('O vetor d é: ')
    entrada(d)
    intercalacao()

main()
