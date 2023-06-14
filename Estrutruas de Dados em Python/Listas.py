""" RESUMO SOBRE LISTAS:

Assim como as tuplas, Listas são estruturas de dados com a vantagem de serem mutáveis.
Listas aceitam coleções de tipos diferentes de dados, como inteiros, booleanos, strings outras listas, etc.

Elas acabam por serem bastante úteis quando não se sabe a quantidade nem o tipo de dado que será armazenado, 
porém, quando já se tem o conhecimento prévio, talvez seja interessante optar pelas tuplas para evitar o uso desnecessário de memória.

"""

#Declarando as Listas:
lista1 = [] #lista vazia
lista2 = list() #lista vazia
lista3 = [1, 2, 'Três', True] #lista com mais de um tipo de dado
lista4 = [8, 2, 5, 4, 9, 3, 0]
lista5 = list()
lista6 = [['Pedro', 25], ['Maria', 19] ,['João', 32]]
lista7 = list()

#inserindo elementos:
lista1.append('Hello World') #Comando usado para inserir elementos na lista
lista1.append(1)
lista1.append(2)
lista1.append(3)

lista7.append(lista6[:]) #lista 7 recebe todos os dados da lista 6

lista1.insert(2, 4) #Comando usado para inserir elemenos numa posição especifica
lista1.insert(0, 0)

lista2 = list(range(4, 11))

#removendo elementos:
del lista3[3]
lista1.pop(3) #Remove por padrão o último elemento, mas pode remover elementos específicos
lista1.remove('Hello World') #Remove os elementos através deles mesmos

#ordenando valores:
lista4.sort() #Organiza os elementos em ordem crescente
#lista4.sort(reverse=True) #Organiza os elementos em ordem decrescente

# Imprimindo de forma dinâmica utilizando laços de repetição:
if 4 in lista2:
    lista2.remove(4)
    print(lista2)
else:
    print('Elemento 4 não encontrado.')

if 4 in lista3:
    lista3.remove(4)
    print(lista3)
else:
    print('Elemento 4 não encontrado.')

for c in lista4:
    print(f'{c}', end=' ')

print()

for c, v in enumerate(lista1):
    print(f'Valor: {v}, Posição{c}')

for c in range (0, 3):
    lista5.append(int(input('Digite um valor: ')))
print(lista5)


print(len(lista4)) #Mostra o tamanho da lista
print(lista7)
print(lista7[0][0])
print(lista7[0][1])