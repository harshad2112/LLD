from abc import ABC, abstractmethod

class Observer(ABC):

    @abstractmethod
    def notify_me():
        pass