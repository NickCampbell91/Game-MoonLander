###############################################################
# Program:
#     Milestone 06, Moon Lander
#     Brother MacBeth, CS165
# Author:
#     Liya Wang
# Summary: I made my Moon Lander work with a lot of efforts. 
#          Besides, I changed my lander color to green, and make 
#          the background with blue star rain. Other than that, 
#          I set the words "Fuel:" on the topleft on the screen  
################################################################


LFLAGS = -lglut -lGLU -lGL

###############################################################
# Build the main Moon Lander game
###############################################################
a.out: driver.o ground.o game.o uiInteract.o uiDraw.o point.o velocity.o lander.o ufo.o
	g++ driver.o ground.o game.o uiInteract.o uiDraw.o point.o velocity.o lander.o ufo.o $(LFLAGS)
	tar -j -cf moonLander.tar makefile *.h *.cpp

###############################################################
# Individual files
#    uiDraw.o      Draw polygons on the screen and do all OpenGL graphics
#    uiInteract.o  Handles input events
#    point.o       The position on the screen
#    ground.o      Handles the ground / world
#    game.o        Handles the game interaction
###############################################################
uiDraw.o: uiDraw.cpp uiDraw.h
	g++ -c uiDraw.cpp

uiInteract.o: uiInteract.cpp uiInteract.h
	g++ -c uiInteract.cpp

point.o: point.cpp point.h
	g++ -c point.cpp

ground.o: ground.cpp ground.h
	g++ -c ground.cpp

game.o: game.h game.cpp uiDraw.h uiInteract.h point.h ground.h
	g++ -c game.cpp

driver.o: driver.cpp game.h uiInteract.h
	g++ -c driver.cpp

#######################################################################
# ADD YOUR ADDITIONAL RULES HERE!
#
# Then, don't forget to add them to the dependecy list for a.out above.
#######################################################################
lander.o: lander.cpp lander.h
	g++ -c lander.cpp
velocity.o: velocity.cpp velocity.h
	g++ -c velocity.cpp

ufo.o: ufo.cpp ufo.h
	g++ -c ufo.cpp

###############################################################
# General rules
###############################################################
clean:
	rm a.out *.o *.tar
