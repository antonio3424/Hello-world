import  math
a = int(input("введите a = "))
x = int(input("введите x = "))
k = int(input("введите k == 1 для G, k==2 для F, k == 3 для Y"))

if k == 1:
    G = (7 * (54 * pow(a, 2) - 33 * a * x + 4 * pow(x, 2))) / (-4 * pow(a, 2) + a * x + 5 * pow(x, 2))
    print("G = ", G)

elif k == 2:
    F = (3 * (-10 * pow(a, 2) + 3 * a * x + 7 * pow(x, 2)))
    print("F =", F)

elif k == 3:
    Y = math.asin(5 * pow(a, 2) - 9 * a * x + 4 * pow(x, 2))
    print("Y =", Y)

else: print("значение неизвестно,введите другую переменную.")
