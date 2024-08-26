class Class():
    def __init__(self, classnumber, type):
        self.classnumber = classnumber
        self.type = type

    def addcourse():
        pass
    def updatecourse():
        pass
    def deletecourse():
        pass
    
class Online(Class):
    def __init__(self, classnumber, type, url):
        super().__init__(classnumber, type)
        self.url = url

class Facetoface(Class):
    def __init__(self, classnumber, type, totalstudent):
        super().__init__(classnumber, type)
        self.totalstudent = totalstudent

class Course():
    def __init__(self, coursecode, name, duration):
        self.coursecode = coursecode
        self.name = name
        self.duration  = duration

    def addcourse():
        pass
    def updatecourse():
        pass
    def deletecourse():
        pass
    