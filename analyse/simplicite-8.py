# return string without spaces
def erase(cc):

    if len(cc) == 0:
        return cc

    #si le début de la chaîne n'est pas un espace
    if cc[0] != " ":
        res = cc[0]

    #on part du deuxième caractère jusqu'à l'avant-dernier
    #pour éviter les problèmes d'indices dans le test ci-dessous
    i=1
    while i<len(cc)-1:
        #on concatène s'il n'y a pas d'espace
        if cc[i] != " ":
            res = res + cc[i]
        else:
            #on concatène si ce n'est pas un simple espace
            if cc[i] == " " and (cc[i-1] == " " or cc[i+1] == " " ):
                res = res + cc[i]
        
        i += 1

    #si la fin de la chaîne n'est pas un espace
    if cc[len(cc)-1] != " ":
        res = res + cc[len(cc)-1]
        
    return res




