
berm = [1,1]

for i in range(20):
    berm.append(berm[i] + berm[i+1])
    print(berm[i],end=" ")