import numpy as np
import matplotlib as mpl
import matplotlib.pylab as plt

X = np.array([[0, 0], [0, 1], [1, 0], [1, 1]])

def AND(x1 ,x2):
    w1, w2, theta = 0.5, 0.5, 0.8
    tmp = w1 * x1 + w2 * x2
    if tmp <= theta:
        return 0
    else:
        return 1

def NAND(x1 ,x2):
    w1, w2, theta = -0.5, -0.5, -0.7
    tmp = w1 * x1 + w2 * x2
    if tmp <= theta:
        return 0
    else:
        return 1

def OR(x1 ,x2):
    w1, w2, theta = 0.5, 0.5, 0.2
    tmp = w1 * x1 + w2 * x2
    if tmp <= theta:
        return 0
    else:
        return 1

def XOR(x1 ,x2):
    a = NAND(x1, x2)
    b = OR(x1, x2)
    c = AND(a, b)
    if c <= 0:
        return 0
    else:
        return 1

and_r=[]
nand_r=[]
or_r=[]

for x in X:
    nand_r.append(NAND(x[0], x[1]))
    and_r.append(NAND(x[0], x[1]))
    or_r.append(NAND(x[0], x[1]))
    
print(nand_r)
print(and_r)
print(or_r)

for x, func in zip(X, and_r):
    xs = x[0]
    ys = x[1]
    if func == 1:
        plt.plot(xs, ys,'ro',label='1')
    else:
        plt.plot(xs, ys,'bx',label='0')
        
plt.title('And Gate')
plt.grid()
plt.xlim(-1.2)
plt.ylim(-1.2)
plt.show()