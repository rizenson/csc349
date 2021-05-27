all:
	g++ -g main.cpp decode.cpp thumbsim_driver.cpp parse.cpp execute.cpp -o thumbsim

run:
	./thumbsim -s -c 256 -i -d -f inputs/shangO0.sim

clean:
	rm -rf ./*.o ./thumbsim

