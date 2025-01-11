from Iphone_Observable import Iphone_Observable
from Email_Observer import Email_Observer
from Mobile_Observer import Mobile_Observer

iphone_14 = Iphone_Observable("Iphone_14", 0)
iphone_15_pro = Iphone_Observable("Iphone_15_pro", 10)

email_observer_1 = Email_Observer("harshadaggarwal1999@gmail.com")
mobile_observer_1 = Mobile_Observer("harshad2112")


iphone_14.add_observer(email_observer_1)
iphone_14.add_observer(mobile_observer_1)
iphone_14.update_stock(10)

iphone_15_pro.add_observer(mobile_observer_1)

iphone_15_pro.update_stock(-10)
iphone_15_pro.update_stock(10)

iphone_15_pro.remove_observer(mobile_observer_1)
