# Uses python3
import sys



def optimum(n, r):
	clone = set()
	for re_ad in r:
		for i in range(0, len(re_ad)-n+1):
			clone.add(re_ad[i:i+n])
	pref = set()
	suff = set()
	for kmer in clone:
		pref.add(kmer[:-1])
		suff.add(kmer[1:])
	return pref == suff

r = []
for i in range(1618):
	re_ad = sys.stdin.readline().strip()
	r.append(re_ad)

for n in range(len(r[2]), 1, -1):
	if optimum(n, r):
		print(n)
		break
