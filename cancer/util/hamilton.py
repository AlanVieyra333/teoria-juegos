import numpy as np

N = 8

nTumor = 1
nTan2 = 1
nTam2 = 1

nNeutrophil = 10
nTan1 = 1
nMacrophage = 10
nTam1 = 1
nNaturalkiller = 1000

n = np.array([nTumor, nNeutrophil, nTan1, nTan2, nMacrophage, nTam1, nTam2, nNaturalkiller])
c = np.array([-1, 1, 1, -1, 1, 1, -1, 1])
h = np.array([1, 1, 1, 1, 1, 1, 1, 1])

Q = np.array([[0, 1, 1, 1, 1, 1, 1, 1],
              [1, 0, 1, 1, 0, 0, 0, 0],
              [1, 1, 0, 1, 0, 0, 0, 0],
              [1, 1, 1, 0, 0, 0, 0, 0],
              [1, 0, 0, 0, 0, 1, 1, 0],
              [1, 0, 0, 0, 1, 0, 1, 0],
              [1, 0, 0, 0, 1, 1, 0, 0],
              [1, 0, 0, 0, 0, 0, 0, 0]])

P = np.array([[0, 1, 1, 1, 1, 1, 1, 1],
              [1, 0, 1, 1, 0, 0, 0, 0],
              [1, 1, 0, 1, 0, 0, 0, 0],
              [1, 1, 1, 0, 0, 0, 0, 0],
              [1, 0, 0, 0, 0, 1, 1, 0],
              [1, 0, 0, 0, 1, 0, 1, 0],
              [1, 0, 0, 0, 1, 1, 0, 0],
              [1, 0, 0, 0, 0, 0, 0, 0]])

x = n * c
w = Q * P


sum1 = 0
sum2 = 0

for i in range(N):
  for j in range(N):
    sum1 += w[i,j] * x[i] * x[j]

for i in range(N):
  sum2 += h[i] * x[i]

H = (-1/2) * sum1 - sum2


if H > 0:
  print('Cancer vence.')
elif H < 0:
  print('Sist. inmune vence')
else:
  print('Empate')


print('H:', H)
print('    sum1: ', sum1, 'sum2', sum2)