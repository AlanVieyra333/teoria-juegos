import math
import numpy as np
import matplotlib.pyplot as plt
import scipy.stats as stats

max = 20

def exp_logistic(t):
    # a = 0.35 * 20 / max    # tasa de crecimiento (cada mes)
    # b = 0.150 * 20 / max   # Coef de densidad
    a = 0.35 * 20 / max
    k = 20
    # b = 0.03
    # k = a / b

    result = k / (1. + (k - 1) * math.e ** (-a * t))

    return result / 20

# print(gauss(0))

x = np.linspace(0, max, max)

plt.plot(x, exp_logistic(x), linewidth=2, color='r')
plt.grid(b=True, color='grey', alpha=0.3, linestyle='-.', linewidth=2)
# plt.axis('equal')
plt.show()
