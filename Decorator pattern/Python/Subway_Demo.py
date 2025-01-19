from breads.Italian_Bread import Italian_Bread
from breads.Wheat_Bread import Wheat_Bread
from breads.Flat_Bread import Flat_Bread
from toppings.Cheese import Cheese
from toppings.Corn import Corn


pizza_corn_cheese_Flat = Corn(Cheese(Flat_Bread))
pizza_corn_Flat = Corn(Flat_Bread)
pizza_Italian = Italian_Bread()

print(pizza_corn_cheese_Flat.get_total_cost())
print(pizza_corn_Flat.get_total_cost())
print(pizza_Italian.get_total_cost())