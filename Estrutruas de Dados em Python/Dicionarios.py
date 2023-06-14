""" RESUMO SOBRE DICIONÁRIOS:

Os dicionários são outro tipode estrutura de dados disponível no python. Ela permite que armazenar
pares de chave-valor onde cada valor é a associado a uma chave única, o que permite um facil acesso aos valores das chaves.

Dicionários são interessantes pois você armazenar e acessar valores com rótulos descritivos ao invés de indices numéricos.
Vale reassaltar que as chaves devem ser únicas e imutáveis a fim de evitar confusão na hora de acessar os dados.

"""

#Declarando Diconários:

#dados1 = dict() #Dicionário vazio
dados1 = {'Nome': 'Pedro', 'Idade': 25, 'Cor': 'Azul'}
filme = {'Titulo': 'Star Wars', 'Ano': 1977, 'Diretor': 'George Lucas'}

Brasil = list()
estado1 = {'Uf': 'Rio de Janeiro', 'Sigla': 'RJ'}
estado2 = {'Uf': 'Alagoas', 'Sigla': 'AL'}

#Inserindo Elementos:
dados1['Sexo'] = 'M'

Brasil.append(estado1)
Brasil.append(estado2)

#Removendo Elementos:
del dados1['Cor']

#Varrendo Dicionários usando laços:
for k, v in filme.items():
    print(f'O {k} é {v}')

for chave in filme.keys():
    print(chave)

for valor in filme.values():
    print(valor)

print(dados1.values())
print(dados1.keys())
print(dados1.items())
print(f'O {dados1["Nome"]} tem {dados1["Idade"]} Anos')

print(Brasil)
