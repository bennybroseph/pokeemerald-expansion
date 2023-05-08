import os
import shutil

directory = os.getcwd()

for filename in os.listdir(directory):
    if ".pal" in filename:
        pokemon = filename.split(".")
        
        os.rename(filename, "normal.pal")
        shutil.move("normal.pal", pokemon[0] + "/normal.pal")
    
    #os.rename("path/to/current/file.foo", "path/to/new/destination/for/file.foo")
    #os.replace("path/to/current/file.foo", "path/to/new/destination/for/file.foo")
    #shutil.move("path/to/current/file.foo", "path/to/new/destination/for/file.foo")