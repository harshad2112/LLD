from Observer import Observer
from Observable import Observable

class Email_Observer(Observer):
    def __init__(self, email_id):
        self.email_id = email_id
        
    def notify_me(self, observable: Observable):
        print(f'Mail sent to {self.email_id}, item: {observable.get_name()} is available')