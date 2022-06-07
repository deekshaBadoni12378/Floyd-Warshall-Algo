INF = 1000000000
def fW(v, AM):
	
	for k in range(0, v):
		for i in range(0, v):
			for j in range(0, v):
				
				AM[i][j] = min(AM[i][j], AM[i][k] +AM[k][j])
	
	print("START", end='')
	for i in range(0, v):
		print("\t{:d}".format(i+1), end='')
	print();
	for i in range(0, v):
		print("{:d}".format(i+1), end='')
		for j in range(0,v):
			print("\t{:d}".format(AM[i][j]), end='')
		print();

AM = [
					[  1,   2, 3, INF],
					[  2,   0, 3, INF],
					[  4,   2, 0,   1],
					[INF, INF, 2,   0]
	
				]
print("result")
fW(3,AM);
