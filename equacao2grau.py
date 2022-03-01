# Resolução de equação do 2º grau

a = float(input("Digite o valor de a:\n"));

while a == 0:
    a = float(input("\nDigite um valor válido para a:\n"));

b = float(input("\nDigite o valor de b:\n"));
c = float(input("\nDigite o valor de c:\n"));

delta = float(pow(b,2) - 4*a*c);
x1 = float((0 - b + (pow(delta, 1/2)))/2*a);
x2 = float((0 - b - (pow(delta, 1/2)))/2*a);

if delta < 0:
    x1 = 0;
    x2 = 0;
    print("\n");
    print("Esta equação poderá ser resolvida por números complexos");
if delta > 0:
    print("\n");
    print("As raízes desta equação são", x1, "e", x2);
if delta == 0:
    print("As raízes desta equação são", x1, "e", x2);
    print("Note que as raízes são idênticas em módulo e sinal.");