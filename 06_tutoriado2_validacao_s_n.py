'''Escreva o trecho de um programa que lê e valida a
resposta da seguinte pergunta: “Deseja continuar
(s/n)? “.'''
print('Teste este programa com diversos caracteres p/ ver a\n'
      'validação da entrada de dados\n')
resp = input ("Deseja continuar(s/n)?")
while resp != 's' and resp!='n':
    resp = input ("Deseja continuar(s/n)?")
if resp == 's':
    print ("Você respondeu sim")
else:
    print ("Você respondeu não")
    
    
