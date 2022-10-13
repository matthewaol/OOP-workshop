# Python OOP

class AbstractMachine():

    def something_complicated():
        # do somethingh ere
        pass

class Machine(AbstractMachine):
    # cpu = "cpu"
    # cost = 120
    # memory = "some memory name"

    def __init__(self, new_cost, cpu, memory):
        self.new_cost = new_cost
        self.cpu = cpu
        self.memory = memory

    def launch_application():
        # do something here
        pass

    def calculate_something():
        # calculate something here
        pass

    def turn_on():
        # turn on machine
        print("say: hey echo, turn on.")
        pass

# Phone inherits Machine
class Phone(Machine):
    screen = "some screen here"
    speakers = "some speaker name here"
    phone_num = 65038

    def call():
        print("i'm calling...")

    def dial_911():
        print("911 HELP!!!")

    def turn_on():
        print("hold the power button")

machine = Machine(140, "CPU v1.0", "memory")
print(machine.new_cost)