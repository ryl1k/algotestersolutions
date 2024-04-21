# Input data in n, m, 
n, m = [int(i) for i in input().split()]
kraina = []
for i in range(n):
	kraina.append([int(j) for j in input().split()])

# Counter for oblast.
nepryamo = 0

# Dictionary with oblast and coord start and coord end and amount.
obl_coord_size = {}

# Filling obl_coord_size.
for i in range(n):
    for j in range(m):
        if kraina[i][j] in obl_coord_size:
            obl_coord_size[kraina[i][j]][1] = [i, j]
            obl_coord_size[kraina[i][j]][2] += 1
        else:
            obl_coord_size[kraina[i][j]] = [[i, j], [i, j], 1]

# Perevirka na rozmir.
for obl in obl_coord_size:
    actual_height = (obl_coord_size[obl][1][0] - obl_coord_size[obl][0][0] + 1) 
    actual_width = (obl_coord_size[obl][1][1] - obl_coord_size[obl][0][1] + 1)
    if obl_coord_size[obl][2] != (actual_height * actual_width):
        nepryamo += 1
print(nepryamo)