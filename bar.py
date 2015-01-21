import matplotlib.pyplot as plt
import numpy as np
from os import walk
data_path = "data_prec/"
colors = ['blue', 'green', 'yellow', 'cyan', 'red']

(_, _, filenames) = walk(data_path).next()

for i,fn in enumerate(filenames):
	with open(data_path+fn) as f:
		data = f.readlines()
		width = 0.5
		fig, ax = plt.subplots()
		plt.xlabel("Number of iterations")
		plt.ylabel("max. precision ($2^{-n}$)")
		X,Y = zip(*map(lambda x : map(int, x.split()), data))
		ind = np.arange(len(X))
		ax.bar(ind, Y, width, color=colors[i])
		ax.set_xticks(ind+width/2)
		ax.set_xticklabels( X )
plt.show()


