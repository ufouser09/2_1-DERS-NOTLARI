import numpy as np
import matplotlib.pyplot as plt
t=np.linspace(-0.02,0.05,30)
plt.plot(t, 325*np.sin(2*np.pi*40*t));
plt.xlabel('t');
plt.ylabel('Amplitude');
plt.title("Discrete Signal plotting using Python, Numpy and Matplotlib");
plt.xlim([-0.02,0.05]);
plt.show()

