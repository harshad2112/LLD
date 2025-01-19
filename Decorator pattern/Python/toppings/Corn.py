from toppings.Toppings import Toppings
from breads.Bread import Bread


class Corn(Toppings):
    def __init__(self, bread: Bread):
        self.bread = bread
        
    def get_total_cost(self):
        return self.bread.get_total_cost() + 30