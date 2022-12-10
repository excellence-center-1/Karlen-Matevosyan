sum = 0
sale = 0
for price in range(5):
  price = float(input("Enter prices: "))
  if price > 1000:
    sale = price - price / 20
  elif price < 1000:
    sum += price
print(sum + sale) 
