'''Escreva o trecho de um programa que lê e valida a
nota de um aluno (0.0 ≤ nota ≤ 10.0).
'''
print('Para teste digite notas inválidas, tal como, 70, 56, -8. \n'
      'Quando vc digitar uma nota válida o programa irá aceitar')
nota = float(input("Nota (0-10):"))
while nota <0 or nota >10:
    nota = float(input("Nota (0-10):"))
print('Nota válida: %.1f' %nota)
    
    
