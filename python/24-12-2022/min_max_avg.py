class Solution:
    def __init__(self,values):
        self.values = values

    def MinStat(self):
        values.sort()
        return values[0]

    def MaxStat(self):
        values.sort()
        return values[-1]

    def Average(self):
      sum = 0
      for i in values:
        sum += i
      return sum / len(values)

values = [1, 2, 4, 5]
solution = Solution(values)
mins = solution.MinStat()
maxs = solution.MaxStat()
avg = solution.Average()
print(mins)
print(maxs)
print(avg)
