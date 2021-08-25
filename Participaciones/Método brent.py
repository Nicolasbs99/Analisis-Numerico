from scipy.optimize import root_scalar
import matplotlib.pyplot as plt
import numpy as np


def f(x):
    return (np.cos(x)**2)-(x**2)
    ##return np.exp(x / 3) * np.cos(x) + 10 * np.sin(3 * x)
    #return (x**2)+(15*(np.cos(x)))-40


x=np.linspace(start=-10, stop=10, num=100)
plt.plot(x, f(x))
plt.grid()
plt.axhline(y=0, linewidth=2, c='k')
plt.axvline(x=0, linewidth=2, c='k')
plt.show()



sol = root_scalar(f, method='brentq', bracket=[0, 1], xtol=1e-16) ##brackets[5,6] para otras f(x)


print("Algoritmo de Brent: ", sol.root)
print("iteraciones: ", sol.iterations)




#sol = root_scalar(f, method='newton', bracket=[5, 6], x0=0.2, fprime=fprime)