from Observable import Observable
from Observer import Observer

class Iphone_Observable(Observable):
    
    def __init__(self, name, initial_stock):
        self.name = name
        self.stock = initial_stock
        self.observer_list = []
        
    def add_observer(self, observer: Observer):
        self.observer_list.append(observer)
        print(f"new observer added to {self.name}")
        
    def remove_observer(self, observer: Observer):
        self.observer_list.remove(observer)
        print(f"observer removed from {self.name}")
        
    def notify(self):
        for observer in self.observer_list:
            observer.notify_me(self)
            
    def update_stock(self, stock):
        if(stock>0):
            print(f"{self.name} stock updated, added: {stock}")
        else:
            print(f"{self.name} stock updated, removed: {stock}")
        if (self.stock == 0):
            self.notify()
        self.stock += stock
        
    def get_name(self):
        return self.name