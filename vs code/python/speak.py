import pyttsx3
# initialisation 
engine = pyttsx3.init() 
  
# testing 
val = input("enter the line\t\t")
engine.say(val) 
engine.runAndWait()
