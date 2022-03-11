
from tkinter import*
import random
import time
import datetime

root=Tk()
root.geometry("3000x8000")
root.title("Restaurant Billing System")
text_Input = StringVar()
operator = ""

Tops=Frame(root, width=1400,relief=SUNKEN)
Tops.pack(side=TOP)

f1=Frame(root,width=800,height=600,relief=SUNKEN)
f1.pack(side=LEFT)
localtime=time.asctime(time.localtime(time.time()))

lblInfo=Label(Tops,font=('arial',50,'bold'),text="FOOD ZONE",fg="black",bd=10,anchor='w')
lblInfo.grid(row=0,column=0)

lblInfo=Label(Tops,font=('arial',20,'bold'),text=localtime,fg="Steel Blue",bd=10,anchor='w')
lblInfo.grid(row=1,column=0)


def Ref():
    
    if (CC.get()==""):
        CoCC=0
    else:
        CoCC=float(CC.get())

   
    if (Man.get()==""):
        CoMan=0
    else:
        CoMan=float(Man.get())


    if (Roti.get()==""):
        CoRoti=0
    else:
        CoRoti=float(Roti.get())


    if (Naan.get()==""):
        CoNaan=0
    else:
        CoNaan=float(Naan.get())

        
    if (Papad.get()==""):
        CoPapad=0
    else:
        CoPapad=float(Papad.get())

     
    if (VFR.get()==""):
        CoVFR=0
    else:
        CoVFR=float(VFR.get())

    if (VB.get()==""):
        CoVB=0
    else:
        CoVB=float(VB.get())

    if (VN.get()==""):
        CoVN=0
    else:
        CoVN=float(VN.get())

    if (PC.get()==""):
        CoPC=0
    else:
        CoPC=float(PC.get())

    if (KC.get()==""):
        CoKC=0
    else:
        CoKC=float(KC.get())     

                   
    CostofCC = CoCC * 75
    CostofMan= CoMan * 60
    CostofRoti = CoRoti* 20
    CostofNaan = CoNaan * 25
    CostofPapad = CoPapad* 30
    CostofVFR = CoVFR * 150
    CostofVB = CoVB * 175
    CostofVN = CoVN * 100
    CostofPC = CoPC * 150
    CostofKC = CoKC * 150


    Central_GST= (((CostofCC+CostofMan+CostofRoti+CostofNaan+CostofPapad+CostofVFR+CostofVB+CostofVN+CostofPC+CostofKC)* 2.5)/100)

    State_GST =(((CostofCC+CostofMan+CostofRoti+CostofNaan+CostofPapad+CostofVFR+CostofVB+CostofVN+CostofPC+CostofKC)* 2.5)/100)

    Total_cost = (CostofCC+CostofMan+CostofRoti+CostofNaan+CostofPapad+CostofVFR+CostofVB+CostofVN+CostofPC+CostofKC)

    CostofMeal= "Rs", str('%.2f' % (CostofCC+CostofMan+CostofRoti+CostofNaan+CostofPapad+CostofVFR+CostofVB+CostofVN+CostofPC+CostofKC))
    C_gst = "Rs", str ('%.2f' % Central_GST)
    S_gst = "Rs", str ('%.2f' % State_GST)
    OverAllCost ="Rs", str ('%.2f' % (Total_cost+Central_GST+State_GST))


    Sgst.set(S_gst)
    Cost.set(CostofMeal)
    Cgst.set(C_gst)
    Total.set(OverAllCost)
    
def qExit():
    root.destroy()

def Reset():
    CC.set("")
    Man.set("")
    Roti.set("")
    Naan.set("")
    Papad.set("")
    VFR.set("")
    VB.set("")
    VN.set("")
    PC.set("")
    KC.set("")

    Total.set("")
    Sgst.set("")
    Cgst.set("")
    Cost.set("")

CC=StringVar()
Man=StringVar()
Roti=StringVar()
Naan=StringVar()
Papad=StringVar()
VFR=StringVar()
VB=StringVar()
VN=StringVar()
PC=StringVar()
KC=StringVar()
Cost=StringVar()
Sgst=StringVar()
Cgst=StringVar()
Total=StringVar()


lblCC= Label(f1, font=('arial', 16, 'bold'),text="Crispy Corn",bd=16,anchor="w")
lblCC.grid(row=0, column=0)
lblCC=Entry(f1, font=('arial',16,'bold'),textvariable=CC,bd=10,insertwidth=4,bg="white",justify='right')
lblCC.grid(row=0,column=1)

lblMan= Label(f1, font=('arial', 16, 'bold'),text="Manchuria",bd=16,anchor="w")
lblMan.grid(row=1, column=0)
txtMan=Entry(f1, font=('arial',16,'bold'),textvariable=Man,bd=10,insertwidth=4,bg="white",justify='right')
txtMan.grid(row=1,column=1)

lblRoti= Label(f1, font=('arial', 16, 'bold'),text="Roti",bd=16,anchor="w")
lblRoti.grid(row=2, column=0)
lblRoti=Entry(f1, font=('arial',16,'bold'),textvariable=Roti,bd=10,insertwidth=4,bg="white",justify='right')
lblRoti.grid(row=2,column=1)

lblNaan= Label(f1, font=('arial', 16, 'bold'),text="Naan",bd=16,anchor="w")
lblNaan.grid(row=3, column=0)
txtNaan=Entry(f1, font=('arial',16,'bold'),textvariable=Naan,bd=10,insertwidth=4,bg="white",justify='right')
txtNaan.grid(row=3,column=1)

lblPapad= Label(f1, font=('arial', 16, 'bold'),text="Papad",bd=16,anchor="w")
lblPapad.grid(row=4, column=0)
txtPapad=Entry(f1, font=('arial',16,'bold'),textvariable=Papad,bd=10,insertwidth=4,bg="white",justify='right')
txtPapad.grid(row=4,column=1)

lblVFR= Label(f1, font=('arial', 16, 'bold'),text="V.Fried Rice",bd=16,anchor="w")
lblVFR.grid(row=0, column=2)
txtVFR=Entry(f1, font=('arial',16,'bold'),textvariable=VFR,bd=10,insertwidth=4,bg="white",justify='right')
txtVFR.grid(row=0,column=3)

lblVB= Label(f1, font=('arial', 16, 'bold'),text="V.Biryani",bd=16,anchor="w")
lblVB.grid(row=1, column=2)
txtVB=Entry(f1, font=('arial',16,'bold'),textvariable=VB,bd=10,insertwidth=4,bg="white",justify='right')
txtVB.grid(row=1,column=3)


lblVN= Label(f1, font=('arial', 16, 'bold'),text="V.Noodles",bd=16,anchor="w")
lblVN.grid(row=2, column=2)
txtVN=Entry(f1, font=('arial',16,'bold'),textvariable=VN,bd=10,insertwidth=4,bg="white",justify='right')
txtVN.grid(row=2,column=3)


lblPC= Label(f1, font=('arial', 16, 'bold'),text="Paneer Curry",bd=16,anchor="w")
lblPC.grid(row=3, column=2)
txtPC=Entry(f1, font=('arial',16,'bold'),textvariable=PC,bd=10,insertwidth=4,bg="white",justify='right')
txtPC.grid(row=3,column=3)


lblKC= Label(f1, font=('arial', 16, 'bold'),text="Kofta Curry",bd=16,anchor="w")
lblKC.grid(row=4, column=2)
txtKC=Entry(f1, font=('arial',16,'bold'),textvariable=KC,bd=10,insertwidth=4,bg="white",justify='right')
txtKC.grid(row=4,column=3)

lblCost= Label(f1, font=('arial', 16, 'bold'),text="Sub-Total",bd=16,anchor="w")
lblCost.grid(row=0, column=4)
txtCost=Entry(f1, font=('arial',16,'bold'),textvariable=Cost,bd=10,insertwidth=4,bg="powder blue",justify='right')
txtCost.grid(row=0,column=5)


lblSgst= Label(f1, font=('arial', 16, 'bold'),text="SGST",bd=16,anchor="w")
lblSgst.grid(row=1, column=4)
txtSgst=Entry(f1, font=('arial',16,'bold'),textvariable=Sgst,bd=10,insertwidth=4,bg="powder blue",justify='right')
txtSgst.grid(row=1,column=5)


lblCgst= Label(f1, font=('arial', 16, 'bold'),text="CGST",bd=16,anchor="w")
lblCgst.grid(row=2, column=4)
txtCgst=Entry(f1, font=('arial',16,'bold'),textvariable=Cgst,bd=10,insertwidth=4,bg="powder blue",justify='right')
txtCgst.grid(row=2,column=5)

lblTotalCost= Label(f1, font=('arial', 16, 'bold'),text="Total Bill",bd=16,anchor="w")
lblTotalCost.grid(row=3, column=4)
txtTotalCost=Entry(f1, font=('arial',16,'bold'),textvariable=Total,bd=10,insertwidth=4,bg="powder blue",justify='right')
txtTotalCost.grid(row=3,column=5)


btnTotal=Button(f1,padx=16,pady=8,bd=16,fg="black",font=('arial',16,'bold'),width=10,text="Total",bg="powder blue",command=Ref).grid(row=9,column=1)

btnReset=Button(f1,padx=16,pady=8,bd=16,fg="black",font=('arial',16,'bold'),width=10,text="Reset",bg="powder blue",command=Reset).grid(row=9,column=3)

btnExit=Button(f1,padx=16,pady=8,bd=16,fg="black",font=('arial',16,'bold'),width=10,text="Exit",bg="powder blue",command=qExit).grid(row=9,column=5)


root.mainloop()

