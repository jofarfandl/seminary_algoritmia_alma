%A = [1,5,4,8,9];
A=randi(100,1,10);%primero el rango de numeros, despues la cantidad de files y luego columnas
A
n = nume1(A);%tamaño del arreglo
for i=1:n-1
    min = i;
    for j=i+1:n
        if A(j) < A(min)
            min = j;
        end
    end
    aux = A[i];
    A(i) = A(min);
    A(min) = aux;
    A
end
A