class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        counter = 0

        num = n
        while True:
            num /= 10
            counter += 1
            if num < 1:
                break

        a = n
        y = n

        arr = []
        arr.append(a)

        for x in range(counter):
            y %= 10
            arr.append(y)
            a /= 10
            y = int(a)

        sum = 0
        prod = 1

        for x in range(counter + 1):
            if x == 0:
                continue
            else:
                sum += int(arr[x])
                prod *= int(arr[x])

        res = prod - sum
        return res