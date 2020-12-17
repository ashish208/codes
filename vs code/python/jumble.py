import random
d = input("INPUT YOUR WORD  :")
l = list(d)
random.shuffle(l)
j = "".join(l)
print(j)