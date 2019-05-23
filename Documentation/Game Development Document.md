# Game Development Document
GDD for vOLZ
## Contents
1. Introduction
1. Concepts
	1. Scenery
		1. Concept
		1. Requirements
		1. Challenges
	1. Hide n Seek
		1. Concept
		1. Requirements
		1. Ruleset
		1. Technical Challenges
	1. Walk around
		1. Concept
		1. Requirements

## 1. Introduction
vOLZ is based around one map: the school. The main goal is to let players enjoy mulitple gamemodes while enjoying the scenery. It's meant to leave a legacy for my time at my school.

## 2. Concepts
### 2.1 Scenery
#### 2.1.1 Concept
The objective is to remake the school to scale. 

#### 2.1.2 Requirements
* Wall Textures
* Door models
* Floor textures
* Whiteboard
* Windows
* Tables
* Chairs
* Banks
* Lockers
* Vending Machines
* Pencils
* Lights (TL - Spot)
* Canteen
* Toilets
* Computers
* Ceiling (dropped)
* Smoke detectors

#### 2.1.3 Challenges
* Time (5th July)
	* Computer/C0ding Issues
	* Updates
	* IRL stuff

### 2.2 Hide n Seek
#### 2.2.1 Concept
The Hide n Seek minigame is based around the school map, where the players must hide in strategic areas inside and outside the building, while other players must find them. Once all players are found within a certain time the hunters win, If time runs out: the hiders win. For the hunters to find a hider, they must physically touch the hiders. The default Hide N Seek search time is 5 minutes for the time being. This will expand once the map gets bigger. To differentiate both, the hunters could start with a default color of red, and the hiders with the default color so not to attract attention.
#### 2.2.2 Requirements
* Real-Time, synchronous multi-player structure.
* Messy level design, with different actors scattered around the school for more effective strategic ways of hiding.
* Grabbing objects
* Widget showing time and events (e.g 'Player found Player2')
* SFX
	* Begin, end sounds
	* Footsteps
	* Timer running out
	* Hunter near hider
	* Caught
* Materials
* Physics for objects (chairs, etc, etc)
* Spectator mode
* Death animations?
* Toggle FP and TP
#### 2.2.3 Ruleset
##### Hunters
Description: Hunt the hiders.
Can move props, can locate by sound (closer = higher pitch). Cooldown of 20 seconds.

##### Hiders
Description: Hides from the hiders
Can move props, can boost their movement speed by a factor of 2.5 for 1.5s to outrun the hunters. Cooldown of 20 - 30 seconds.

#### 2.2.4 Technical Challenges
* 'Long' Code
* Multiplayer stuff

### 2.3 Walkaround
#### 2.3.1 Concept
The player may freely explore the map, on it's own with or without other players. No games, just enjoying.
#### 2.3.2 Requirements
* Multiplayer
* HUD (with minimap?)