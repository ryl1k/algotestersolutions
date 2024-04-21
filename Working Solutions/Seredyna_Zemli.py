from math import sqrt

def vidstan(p1, p2):
    return sqrt((p1[0] - p2[0])**2 + (p1[1] - p2[1])**2)

e = 0.0000001
n = int(input())
x = []
for i in range(n):
    x.append([float(i) for i in input().split()])

yy = [1001, 1001]
yi = [0, 0]
while True:
    sum11 = 0
    sum12 = 0
    sum13 = 0
    for i in range(n):
        distance = vidstan(x[i], yy)
        sum11 += x[i][0]/distance
        sum12 += x[i][1]/distance
        sum13 += 1.0/distance
    yi = [sum11/sum13, sum12/sum13]
    if vidstan(yy, yi) <= e:
        break
    yy = yi[:]
print(sum([vidstan(x[i], yi) for i in range(n)]))