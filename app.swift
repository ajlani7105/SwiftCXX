import FromCXX

class MyApp {
    let CallCXX = Hi_CXX()
    deinit  {
      ClearMemory()
    }
}



let a = MyApp()
let str = String(cString: a.CallCXX.SayHi)
print(a.CallCXX.Add(2,2))
print(str)
