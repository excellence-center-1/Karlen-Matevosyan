class Selector:
    def __init__(self,values):
        self.values = values
    def get_odds(self):
        odd = []
        for i in values:
            if i % 2 == 0:
                odd.append(i)
        return odd
    def get_evens(self):
        even = []
        for i in values:
            if i % 2 == 1:
                even.append(i)
        return even

values = [11, 12, 13, 14, 15, 16, 22, 44, 66]
selector = Selector(values)
odds = selector.get_odds()
evens = selector.get_evens()
print(' '.join(map(str, odds)))
print(' '.join(map(str, evens)))
