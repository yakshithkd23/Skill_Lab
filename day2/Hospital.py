class patient:
    def __init__(self,name,wardtype,no_days):
            self.name=name
            self.wardtype=wardtype
            self.no_days=no_days
            self.charge={'general':1000,'semi':2000,'private':5000}
    def calculation(self):
        if self.wardtype in self.charge:
            bill=self.no_days*self.charge[self.wardtype]
            if self.no_days>7:
              bill*=0.95
            return bill
        else : 
            return "invalid "
            
    def display(self):
        final_bill=self.calculation()
        ("\nHOSPITAL MANAGEMENT SYSTEM")
        print(f"Patient Name: {self.name}")
        print(f"Ward Type: {self.wardtype.capitalize()}")
        print(f"Number of Days Admitted: {self.no_days}")
        print(f"Total Bill: ₹{final_bill:.2f}" if isinstance(final_bill, float) else final_bill)



print("HOSPITAL MANAGMENT SYSTEM")
name=input("enter the patient name")
wardtype=input("enter the ward type (general/semi/private)").lower()
no_days=int(input("number of days admitted"))
patient=patient(name,wardtype,no_days)
patient.display()
