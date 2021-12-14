global parkLot
from display import display

def create(id,floor, slot):
	parkGrid = [[0]*int(slot)]*int(floor);
	return parkGrid

def main():
	while(True):
		print("User Input:\n")
		s = input();
		
		if s == "exit":
			exit(0)
		
		inputData = s.split()
		print(inputData)
		if inputData[0] == "create_parking_lot":
			parkLot =  create(inputData[1],inputData[2],inputData[3])
		
		elif inputData[0] == "display":
			display(parkLot, inputData[1],inputData[2])
		
		elif inputData[0] == "park_vehicle":
			park(inputData[1],inputData[2],inputData[3])
			
		elif inputData[0] == "unpark_vehicle":
			park(inputData[1],inputData[2])
		
		showGrid(parkLot)
		

if __name__ == "__main__":
	main()
	
	
	
