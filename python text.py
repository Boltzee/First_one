"""a=[]

for x in range(10):
	a.append(x)
print(a)"""

import numpy as np
import matplotlib.pyplot as plt
from pylab import * 
x=np.linspace(0,10,100)
y=x**2
fig=plt.figure()
plot(x,y)
show()
