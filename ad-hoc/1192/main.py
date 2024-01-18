n = int(input())

for i in range(n):
    linha = input()

    dig1 = int(linha[0])
    dig2 = int(linha[2])

    if( dig1 == dig2):
        print(dig1*dig2)
    elif(linha[1].isupper()):
        print(dig2 - dig1)
    else:
        print(dig1 + dig2)

