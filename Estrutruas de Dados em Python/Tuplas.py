""" RESUMO SOBRE TUPLAS:

Tuplas são um dos tipos de estruturas de dados disponiveis em python. 
Seu comportamento é semelhande a o de uma Lista, porém com uma diferença importante, as tuplas são imutáveis.
 
Isso significa que ao criar uma tupla e declarar seus valores dentro dela, mesmo que ela esteja vazia, 
em momento algum ela poderá ser alterada durante a execução do programa, caso surga essa necessidade, 
você terá que para a compilação, editar a tupla manualmente e rodar o programa

A priori esse tipo de recurso pode parecer algo limitante, porém em situações onde voce tem um conjunto de dados
que você não quer que sejam acidentalmente alterados é interessante armazena-los numa tupla. Uma outra vantagem do uso
das tupla é a vantagem de não ter a necessidades de reservar espaços de memóriam que podem acabar não sendo usados.

"""

#Declarando uma tupla:
tupla1 = ('Hamburguer', 'Suco', 'Pizza', 'Pudim') #Método Padrão

tupla2 = tuple() #Note que dessa forma não será possível adicionar elementos e ao pinta-la não será retornado nada

lista1 = [0, 1, 2, 3, 4, 5 , 6, 7, 7, 2, 2, 2, 2]
tupla3 = tuple(lista1) #Criando uma tupla através de uma lista

tupla4 = tupla1 + tupla3
#Imprimindo valores de uma tupla

# Imprimindo de forma simples e manual usando print com fatiamento:
print(tupla1)
print(tupla1[0])
print(tupla1[1:])
print(len(tupla1)) #Usando esse método ou apenas escrevendo o nome da tupla, apenas o seu tamanho é mostrado
print(sorted(tupla1)) #Organiza a tupla em ordem alfabetica
print(tupla4) #Imprime ambas as tuplas de forma concatenada
print(tupla3.count(2)) #Conta quantas vezes o 2 apareceu
print(tupla1.index('Pizza')) #Mostra em que posição está o elemento Pizza a partir de sua primeira aparição

#del(tupla4) #Deleta a tupla por completo

print('-' * 20)
# Imprimindo de forma dinâmica utilizando laços de repetição:
for c in tupla1:
    print(c)

print('-' * 20)

for c in range(0, len(tupla3)):
    print(f'Elemento: {tupla3[c]}, Posição: {c}')

print('-' * 20)

for j, k, in enumerate(tupla1):
    print(f'Elemento: {k}, Posição: {j}')

print('-' * 20)

cont = 0
while cont < len(tupla3):
    print(tupla3)
    break
