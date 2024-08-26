# Calcular todos los números de 3 cifras tales que la suma de los cubos de las cifras es igual al valor del número. 
for num in range(100, 1000):
    nums = str(num)
    num1 = int(nums[0])         
    num2 = int(nums[1])
    num3 = int(nums[2])          
    
    suma_cubos = num1**3 + num2**3 + num3**3
    
    if suma_cubos == num:
        print(num)
