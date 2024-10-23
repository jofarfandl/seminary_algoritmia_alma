T=['e','s','t','e',' ','e','s',' ','e','l',...
    ' ','a','l','g','o','r','i','t','m','o',' ','d','e',' ','l','a',...
    ' ','c','a','d','e','n','a'];
P=['c','a','d','e','n','a'];

indice =stringMatching(T,P)

function i=stringMatching(T,P)
    n = numel(T);
    m = numel(P);
    for i=1: n-m+1
        j=1
        while j<m+1 && P(j)==T(i+j-1)
            j=j+1;
        end
        if j == m+1
            return;
        end
    end
    i=-1;
end