my_string = "Hello, World!"
print(my_string)

'''
-to see if something is iterable
dir will let you know what methods and attributes are available for that variablee
'''
nums = [1,2,3]
print(dir(nums))
'''
-seeing two underscores and a word is referred to as a dunder method
for ex. the dunder iter is __iter__
-when python runs, name is one of those special variables that get set, always.
whenever we import a module, it'll set the name of this variable to the name of the file
'''
print .format(__name__)
