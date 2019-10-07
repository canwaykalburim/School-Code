import numpy as np

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

print(str([0, 0]), "==>", AND(0, 0))
print(str([0, 1]), "==>", AND(0, 1))
print(str([1, 0]), "==>", AND(1, 0))
print(str([1, 1]), "==>", AND(1, 1))

print('\n=============\n')

print(str([0, 0]), "==>", NAND(0, 0))
print(str([0, 1]), "==>", NAND(0, 1))
print(str([1, 0]), "==>", NAND(1, 0))
print(str([1, 1]), "==>", NAND(1, 1))

print('\n=============\n')

print(str([0, 0]), "==>", OR(0, 0))
print(str([0, 1]), "==>", OR(0, 1))
print(str([1, 0]), "==>", OR(1, 0))
print(str([1, 1]), "==>", OR(1, 1))

print('\n=============\n')

print(str([0, 0]), "==>", XOR(0, 0))
print(str([0, 1]), "==>", XOR(0, 1))
print(str([1, 0]), "==>", XOR(1, 0))
print(str([1, 1]), "==>", XOR(1, 1))
