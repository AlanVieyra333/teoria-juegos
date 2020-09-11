import math
import numpy as np
import matplotlib.pyplot as plt
import scipy.stats as stats

max = 20

def exp_logistic(t):
    a = 0.24 * 20 / max    # tasa de crecimiento (cada mes)
    b = 0.047 * 20 / max   # Coef de densidad
    k = a / b

    result = k / (1. + (k - 1) * math.e ** (-a * t))

    return result

# print(gauss(0))

x = np.linspace(0, max, max)

plt.plot(x, exp_logistic(x), linewidth=2, color='r')
plt.grid(b=True, color='grey', alpha=0.3, linestyle='-.', linewidth=2)
# plt.axis('equal')
plt.show()
