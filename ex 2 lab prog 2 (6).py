gabarito = ['b','a','e','d','c','d','a','e']

def correcao():
    for i in range(10):
        print('digite o tia do aluno: ')
        tia = input()
        print(f'digite as respostas do aluno {tia}')
        nota = 0
        respaluno = []
        for i in range(8):
            print(f'questão {i+1}:')
            respaluno.append(input())
            if gabarito[i]==respaluno[i]:
                nota=nota+1
        print(f' O aluno {tia} teve nota {nota}')
        
            
def main():
    correcao()

main()
