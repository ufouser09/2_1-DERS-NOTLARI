#https://www.alphacodingskills.com/compile-python-online.php
import numpy as np
import matplotlib.pyplot as plt
t=np.linspace(-0.02,0.05,100);
plt.subplot(2,1,1);
plt.stem(t, np.exp(2j*np.pi*50*t).real);
plt.xlabel('t');
plt.ylabel('Real X(t)');
plt.title(r'Real part of $x(t)=e^{j 100 \pi t}$');
plt.xlim([-0.02,0.05]);
plt.subplot(2,1,2);
plt.stem(t, np.exp(2j*np.pi*50*t).imag);
plt.xlabel('t');
plt.ylabel('Imag X(t)');
plt.title(r'Imaginary part of $x(t)=e^{j 100 \pi t}$');
plt.xlim([-0.02,0.05]);
plt.subplots_adjust(left=0.1,
                    bottom=0.1, 
                    right=0.9, 
                    top=1.2, 
                    wspace=0.4, 
                    hspace=0.4)
plt.show()
