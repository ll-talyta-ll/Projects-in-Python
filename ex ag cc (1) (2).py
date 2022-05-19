agenda= []
def menu():
    print ('(1) inserir o nome na lista \n'
          '(2) buscar o nome na lista \n'
          '(3) remover nome na lista \n'
          '(4) listar nomes da lista em ordem crescente \n'
          '(5) listar nomes da lista em ordem descrescente \n'
          '(6) sair')
def escolhacomando():
    c= int(input('opção escolhida: '))
    while c<1 or c>6:
        c = int(input('opção inválida, digite outra opção que seja válida: '))
    return c
def inserir():
     n = input('digite o nome a ser inserido: ')
     agenda.append(n)
     print(agenda)
     return agenda
def buscar():
    n = input('digite o nome a ser buscado: ')
    for i in range(len(agenda)):
        if agenda[i]==n:
            print(f'{n} nome na lista na posição{i+1}')
        if n not in agenda:
            print(f'{n} nome não está na lista')
        return agenda
def remover():
     n = input('nome a ser removido: ')
     agenda.remove(n)
     print(agenda)
     return agenda
def crescente():
    agenda.sort()
    print(agenda)
    return agenda
def decrescente():
    agenda.sort()
    agenda.reverse()
    print(agenda)
    return agenda
def main():
    menu()
    c=escolhacomando()
    while c!=6:
        if c==1:
            inserir()
        if c==2:
            buscar()
        if c==3:
            remover()
        if c==4:
            crescente()
        if c==5:
            decrescente()
        if c==6:
            break
        print('')
        menu()
        c = escolhacomando()
main()
        
