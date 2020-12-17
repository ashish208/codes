# making dictionary for python array
import pyttsx3
say = pyttsx3.init()
all = {"append": "Add an element at the end of the list",
      "clear": "Remove all the elements from the list\n",
      "copy": "	Return a copy of the list",
      "count": "Return the number of elements with the specified value",
      "extend": "Add the elements of a list (or any iterable), to the end of the current list",
      "index": "Return the index of the first element with the specified value",
      "insert": "Add an element at the specified position",
      "pop": "Remove the element at the specified position",
      "remove": "Remove the first item with the specified value",
      "reverse": "Reverse the order of the list",
      "sort": "Sort the list",
      }
print("""which of the following array you wants to known:
    1.append     2.clear      3.copy       4.count        5.extend     6.index\t
    7.insert     8.pop        9.remove     10.reverse     11.sort          """)
ask = input("what you want to search :: ")
print("\n\n" + ask + ",In python used to ")
print(all[ask])
say.say(print(ask + ",In python used to "+ (all[ask])))
say.runAndWait()
input("\npress enter to exit")
