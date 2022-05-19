n = int(input('digite o valor: '))
def fib(n):
    if n==0:
        return 0
    elif n==1:
        return 1
    else:
        return fib(n-1)+fib(n-2)
def main():
    z = fib(n)
    print(z)

main()
 
