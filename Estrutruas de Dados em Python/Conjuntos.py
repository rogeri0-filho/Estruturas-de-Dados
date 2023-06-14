""" RESUMO SOBRE CONJUNTOS:

Conjuntos ou sets são uma coleção não ordenada de valores únicos armazenados em um único objeto.
Assim como os dicionários, tmabém são escritos com chaves, porém sem um 'rótulo', para identificar os elementos dentro dele.

Suas caracteristicas são:
- Armazenar apenas itens não-duplicados;
- Supora operações matemáticas sobre conjuntos (união, intersecção, etc);
- Não permite a modificação de itens existentes, mas é possível adicionar novos elementos (São mutáveis);
- Aceitam elementos de qualquer tipo, sem estarem em ordem e sem precisarem de index. 

"""

PlanetaAnao = {'Plutão', 'Ceres', 'Eris', 'Haumea', 'Makemake'}
astros = ['Lua', 'Vênus', 'Marte', 'Sirius', 'Lua']
SetAstros = set(astros)
planetas1 = {'Mercúrio', 'Vênus', 'Terra', 'Marte', 'Netuno'}
planetas2 = {'Urano', 'Júpiter', 'Terra', 'Marte', 'Saturno'}
planetas3 = {'Júpiter', 'Urano', 'Saturno'}
planetas4 = planetas1.copy() #Cria uma cópia do conjunto planetas1

planetas3.add('Plutão') #Adiciona Plutão ao conjunto planetas3. Porém, caso ele ja estivesse no conjunto, essa adição seria ignorada
planetas4.remove('Terra') #Remove o elemento Terra do conjunto e retorna uma mensagem de erro caso o elemento não exista na conjunto.
planetas4.discard('Mercúrio') #Faz a mesma coisa do comando acima sem retornar mensagem de erro 
planetas2.pop() #Pop remove um elemento aleatório diferente das listas que remove o último.
planetas2.clear() #remove todos os elementos do conjunto

print(PlanetaAnao)
print(len(PlanetaAnao))
print('Ceres' in PlanetaAnao)
print('Lua' in PlanetaAnao)
print('Plutão' not in PlanetaAnao)

for astro in PlanetaAnao:
    print(astro.upper())

print('Lista: ', astros)
print('Conjunto: ', SetAstros) #note que os elementos duplicados são removidos automaticamente

print('União:', planetas1 | planetas2) #Operador de união responsável por unir dois conjuntos eleminando elementos repetidos
#print(planetas1.union(planetas2)) #Comando interno que possui a mesma funcionalidade citada acima

print('Intersecção:', planetas1 & planetas2) #Mostra a Intersecção entre os dois conjuntos
#print(planetas1.intersection(planetas2)) #Comando interno que possui a mesma funcionalidade citada acima

print('Diferença:', planetas1 - planetas2) #Mostra a diferença entre os dois conjuntos
#print('Diferença:', planetas1.difference(planetas2)) #Comando interno que possui a mesma funcionalidade citada acima

print('Diferença Simétrica:', planetas1 ^ planetas2) #A grosso modo, seria a união de planetas1 - planetas2 com planetas2 - planetas1
#print('Diferença Simétrica:', planetas1.symmetric_difference(planetas2)) #Comando interno que possui a mesma funcionalidade citada acima

print('Diferença Disjunta:', planetas1.isdisjoint(planetas3)) #A grosso modo, verifica se ambos os conjuntos são totalmente diferentes um do outro

print('Planetas 1:', planetas1)
print('Planetas 4:', planetas4)
