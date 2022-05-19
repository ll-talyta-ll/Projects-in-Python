
#--------------------
def printaColecao(colecao,qtd):
   print("\ncolecao=[",end=' ')
   for i in range(qtd):
      print( colecao[i],end=' ')
   
   print("]\n")
   
#--------------------
def adicionaFinal(colecao, qtd, elem ):
   if qtd < 100:
      colecao[qtd]=elem
      qtd+=1
   return qtd
#--------------------
def main():
   #declara o vetor
   colecao = [0]*100
   qtd = 0 #quantidade de elementos validos
   
   opc = 0
   # laco principal do menu
   while opc != 8:
      print("1-Adicionar no final")
      print("2-Adicionar em uma posicao")
      print("3-....")
      print("8-sair")
      opc = int(input())
      #adiciona no final
      if opc == 1:
         elem = int(input("digite um elemento:"))
         qtd = adicionaFinal(colecao, qtd,elem )
      
      # imprime o vetor colecao
      printaColecao(colecao,qtd)
   print("fim do programa")
      
#----- chama a funcao principal
main()

