# python3


import sys
import itertools

class BD:
    def dfs(self, path, start, current, depth):
        if current != start and self.multiple_incoming(current):
            self.paths.setdefault((start, current), list()).append(path[:])

        if depth == self.limitation:
            return

        for n_ext in self.vec[current][0]:
            if n_ext not in path:
                path.append(n_ext)
                self.dfs(path, start, n_ext, depth + 1)
                path.remove(n_ext)


    

    def __init__(self, k, t, genome_reads):

        self.bubbles = 0
        self.vec = {}
        self.paths = {}
        self.k = k
        self.limitation = t

        self.multiple_incoming = lambda vertex: self.vec[vertex][1] > 1
        self.multiple_outgoing = lambda vertex: len(self.vec[vertex][0]) > 1

        self.makethevec(self.BRIK(genome_reads))

    def path_djoint(self, pair):
        return len(set(pair[0]) & set(pair[1])) == 2 



    def makethevec(self, kmers):

        def add_edge(vec, LL, on_right):
            vec.setdefault(LL, [set(), 0])
            vec.setdefault(on_right, [set(), 0])
            
            if on_right not in vec[LL][0]:
                vec[LL][0].add(on_right)
                vec[on_right][1] += 1

        for kmer in kmers:
            LL, on_right = kmer[:-1], kmer[1:]
            if LL != on_right:
                add_edge(self.vec, LL, on_right)

    def b_count(self):
        for k, v in self.vec.items():
            if self.multiple_outgoing(k):
                self.dfs(path=[k], start=k, current=k, depth=0)

        for _, candidates_list in self.paths.items():
            for pair in itertools.combinations(candidates_list, r=2):
                if self.path_djoint(pair):
                    self.bubbles += 1

        return self.bubbles

    def BRIK(self, genome_reads):
        break_read = lambda read: [ read[j:j + self.k] for j in range(len(read) - self.k + 1) ]
        return [ kmer for read in genome_reads for kmer in break_read(read) ]

    




if __name__ == "__main__":
    data = sys.stdin.read().split()
    k, t, genome_reads = data[0], data[1], data[2:]
    print(BD(int(k), int(t), genome_reads).b_count())
