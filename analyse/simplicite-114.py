def byeespace1(text):
  cpt = 1
  #Cas où il y a moins de 2 caractères.
  if len(text) == 0 or len(text) == 1:
    return text.replace(" ", "")
    
  #On s'occupe du premier caractère
  if text[0] == " " and text[1] != " ":
    text = text[1:]
    
  #Partie qui retire les espaces et reforme le texte.
  for lettre in text[:-1]:
    if text[cpt] == " ":
      if cpt < len(text)-1:
        if text[cpt-1] != " " and text[cpt+1] != " ":
          text = text[:cpt] + text[cpt+1:]
          cpt -= 1
    cpt += 1
    
  #On s'occupe du dernier caractère.
  if text[len(text)-1] == " " and text[len(text)-2] != " ":
      text = text[:len(text)-1]
    
  return text

