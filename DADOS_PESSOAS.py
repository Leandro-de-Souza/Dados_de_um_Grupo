
N = int(input("Quantas pessoas serao digitadas? "))

generos = [0 for x in range(N)]
alturas = [0 for x in range(N)]

for i in range(0, N):
    alturas[i] = float(input(f"Altura da {i +1}a pessoa: "))
    generos[i] = input(f"Genero da {i +1}a pessoa: ")

menora = alturas[0]
maiora = alturas[0]

for i in range(0, N):
    if alturas[i] > maiora:
        maiora = alturas[i]

    if alturas[i] < menora:
        menora = alturas[i]

quanth = 0
quantm = 0
soma = 0

for i in range(0, N):
    if generos[i] == 'M':
        quanth = quanth + 1
    else:
        quantm = quantm + 1
        soma = soma + alturas[i]

media = soma / quantm

print(f"Menor altura = {menora}")
print(f"Maior altura = {maiora}")
print(f"Media das alturas das mulheres = {media:.2f}")
print(f"Numero de homens = {quanth}")


