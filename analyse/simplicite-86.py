def enlever_blanc(str):
  str.strip()
  i = 0
  tabJ = ""
  while i < len(str):
    if ((str[i] == " ") and (str[i+1] == " ")):
      tabJ += str[i]
      tabJ += str[i+1]
      i = i+2
    elif ((str[i] == " ") and (str[i+1] != " ")):
        i = i+1
    else:
        tabJ+=str[i]
        i+=1  
  print(tabJ)