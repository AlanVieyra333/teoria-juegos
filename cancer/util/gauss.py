import math
import numpy as np
import matplotlib.pyplot as plt
import scipy.stats as stats

max = 10

def gauss(x):
    a = 100
    b = max * (2./5.)
    c = 2.7 #2

    result = a * math.e ** (-(x-b)**2 / (2*c**2))

    return result

# print(gauss(0))

x = np.linspace(0, max, 1000)

plt.plot(x, gauss(x), linewidth=2, color='r')
plt.grid(b=True, color='grey', alpha=0.3, linestyle='-.', linewidth=2)
# plt.axis('equal')
plt.show()