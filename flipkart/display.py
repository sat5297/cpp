def freeSlots(parkLot, vehicleType):
	for i in range(len(parkLot)):
		cars = 0
		bikes = 0
		trucks = 0
		for j in range(len(parkLot[0])):
			if j == 0 and parkLot[j] == 0:
				truck += 1
			elif j == 1 and parkLot[j] == 0:
				bikes += 1
			elif j == 2 and parkLot[j] == 0:
				bikes += 1
			elif j >= 3 and parkLot[j] == 0:
				cars += 1
		if(vehicleType == "CAR"):
			print("Free Slot for CAR on floor ", i+1 ," are ", cars)
		elif(vehicleType == "BIKE"):
			print("Free Slot for BIKE on floor ", i+1 ," are ", bikes)
		elif(vehicleType == "TRUCK"):
			print("Free Slot for CAR on floor ", i+1 ," are ", j + 1)

def occupiedSlots(parkLot,vehicleType):
	for i in range(len(parkLot)):
		cars = 0
		bikes = 0
		trucks = 0
		for j in range(len(parkLot[0])):
			if j == 0 and parkLot[j] != 0:
				truck += 1
			elif j == 1 and parkLot[j] == 0:
				bikes += 1
			elif j == 2 and parkLot[j] == 0:
				bikes += 1
			elif j >= 3 and parkLot[j] != 0:
				cars += 1
		if(vehicleType == "CAR"):
			print("Occupied Slot for CAR on floor ", i+1 ," are ", cars)
		elif(vehicleType == "BIKE"):
			print("Occupied Slot for BIKE on floor ", i+1 ," are ", bikes)
		elif(vehicleType == "TRUCK"):
			print("Occupied Slot for CAR on floor ", i+1 ," are ", j + 1)

def showGrid(parklot):
	for i in range(len(parkLot)):
		for j in range(len(parkLot[0])):
			print(parkLot[i][j])


def display(parkLot, slotType, vehicleType):
	if slotType == "free_count":
		freeSlots(parkLot, vehicleType)
	else:
		occupiedSlots(parkLot, vehicleType)
	
