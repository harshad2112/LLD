from abc import ABC, abstractmethod
from breads.Bread import Bread

class Toppings(Bread):
    @abstractmethod
    def get_total_cost():
        pass