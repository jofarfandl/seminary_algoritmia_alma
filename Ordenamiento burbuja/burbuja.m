A = randi(100,1,10);
n = numel(A);
for i=1:n-1
    for j=1:n-1
        if A(j+1) < A(j)
            aux=A(j);
            A(j) = A(j+1);
            A(j+1) = aux;
        end
        A
    end
end
A