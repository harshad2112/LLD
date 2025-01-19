from abc import ABC, abstractmethod

class Bread(ABC):
    
    @abstractmethod
    def get_total_cost():
        pass