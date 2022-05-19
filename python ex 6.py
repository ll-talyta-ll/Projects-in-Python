import math
CESP = float(input ('custo de um espetáculo teatral'))
PCESP = float(input('preço do convite desse espetáculo'))
Qtde = CESP/PCESP
print('Qtde de convites:' , math.ceil(Qtde))
Qtdelucro = 1.23*Qtde
print('Qtde de convites 23%:', math.ceil(Qtdelucro))


      
      
