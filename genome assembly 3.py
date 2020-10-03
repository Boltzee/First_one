#uses python3


from collections import defaultdict
import itertools

in_binary= int(input())
pos = in_binary-1

last ='1'*in_binary
bint  = int(last, 2)

lb= "1"+('0'*pos)
first = '0'*in_binary
nodes = defaultdict(list)
for i in range(0,bint +1):
		aa = (bin(i)[2:].zfill(in_binary))
		if (aa!=lb and aa!=first):
			string = aa[0:pos]
			edge = aa[1:in_binary]
			nodes[string].append(edge)
			nodes[edge].append(string)

start = '0'*(in_binary-1)
tour = [start]
current = start
while(len(nodes[current])>0):
	suffix = current[1:]
	next_Char = "1" if suffix+"1" in nodes[current] else "0"
	tour.append(suffix+next_Char)
	nodes[current].remove(suffix+next_Char)
	nodes[suffix+next_Char].remove(current)
	current = suffix+next_Char

res ='0'
for i,d in enumerate(tour):res+=d[0]
print(res)
