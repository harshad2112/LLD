from Observer import Observer
from Observable import Observable

class Mobile_Observer(Observer):
    def __init__(self, user_id):
        self.user_id = user_id
        
    def notify_me(self, observable: Observable):
        print(f'Notification sent to {self.user_id}, item: {observable.get_name()} is available')