from abc import ABC, abstractmethod
from Observer import Observer

class Observable(ABC):

    @abstractmethod
    def add_observer(observer: Observer):
        pass
    
    @abstractmethod
    def remove_observer(observer: Observer):
        pass
    
    @abstractmethod
    def notify():
        pass
    
    @abstractmethod
    def update_stock(stock):
        pass
    
    @abstractmethod
    def get_name():
        pass