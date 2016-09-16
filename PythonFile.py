import math

a = int(input('Введите a '))
x = int(input('Введите x '))

G = (7*(54*a**2-33*a*x+4*x**2))/(-4*a**2+a*x+5*x**2)
F = 3**(-10*a**2+3*a*x+7*x**2)

Y = math.asin(5*a**2-9*a*x+4*x**2)

print('G  = ', G)
print('F  = ', F)
print('Y  = ', Y)

