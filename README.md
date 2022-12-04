# ENGLISH
### How it all started...
In the introductory engineering class, each group were given with an assignment to come up with a creative invention. My teammamtes had no coding experience so they had no idea what they were doing. Being Freshmen, my teammates wanted to live their "ideal college life" drinking with people and weren't willing to devote alot time to this project. I was the only one in our team who was willing to pour out all the time and energy into the project. So it was a pretty rough start.

I was a newbie coder, so I was lost too.
I didn't know how I go about learning Arduino programming, mobile programming, and circuit design all by myself. Everything seemed impossible to me.

There was no way I could LITTERALLY do everything on my own. So I scheduled short meetings with my teammates to discuss about various invention ideas and I assign my teammates simple tasks that didn't require any coding experience.(ex: 3d designing of a protoype, creating powerpoint, writing reports)

I simplified every problem into tasks that could be done on a daily basis and solve them one by one. I self-taught Arduino programming, circuit design, and mobile app programming everyday. Through trial and error based on the ideas discussed, we came up with "AutoPrema" and won the Creativity Award at the FEDEC exhibition. It was daunting to do most of the work alone, but because it was something that I was passionate about, I was able to keep going even when I was in a desperate situation. After the FEDEC exhibition, I genuinely fell in love with programming, so I decided to change my major.


### About AutoPrema
AutoPrema is a beauty machine which sprays the right amount of cosmetics based on the weather information.

The AutoPrema help users apply appropriate amount of cosmetics to: 
1. prevent skin troubles from applying excess/inadequate amount of cosmetics
2. promote maximum skin benefits
3. efficiently use cosmetics for a longer period of time  


### Inside AutoPrema
The AutoPrema constitutes of an Arduino UNO, 4 AA batteries, 3 mosfets, HC-05, 3 water pumps, and an ultrasonic sensor which are all connected on the circuitboard by jumper wires.

Currently, the AutoPrema has 3 makeup bottles with water pump motors inside each of them. The makeup bottles were each filled with sunscreen, moisturizer, and toner. 


### Mechanism of AutoPrema
The user launches the app and connects to AutoPrema via bluetooth. When the user selects their location on their app, weather information is obtained from the Korea Meteological Administration [[1](https://www.weather.go.kr/w/pop/rss-guide.do)] and displayed on the screen.

Once the user presses the "spray" button, weather information is sent to AutoPrema via bluetooth. The algorithm implemented in the Arduino UNO turns on each water pump for a certain period of time, spraying accurate amount of cosmetics.

### How to use the AutoPrema
1. Download the AutoPrema App 
2. Launch the app and connect to AutoPrema via bluetooth ([Download](Mobile_App.aia))
3. Select your location
4. Put your hand inside the AutoPrema and press the "spray" button

