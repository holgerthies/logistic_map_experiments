import matplotlib.pyplot as plt
from os import walk
data_path = "data/"
colors = ['blue', 'red', 'green', 'orange', 'cyan', 'yellow']

(_, _, filenames) = walk(data_path).next()

for i,fn in enumerate(filenames):
	with open(data_path+fn) as f:
		data = f.readlines()
		plt.xlabel("Number of iterations")
		plt.ylabel("value")
		X,Y = zip(*map(lambda x : map(float, x.split()), data[1:]))
		plt.plot(X,Y, color=colors[i], label=data[0])
	plt.legend(loc=0)
plt.show()


