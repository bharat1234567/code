toggle characters:
to toggle characters : i.e. from upper case to lowercase and viseversa
if char is in lowecase : 
then substract 'a' and add 'A' to it. 
it will internally convert it to ascii values and do it.
i.e. 
  if s[i] is lowecase
   char(s[i] + 'A' -'a') // we need to typecast this to char and then print. 
   else if uppercase
   char(s[i]-'A'+'a')
   else
   cout << s[i]  // if any other special char or number.
 ---------------------------------------------------------------------------------------------
 