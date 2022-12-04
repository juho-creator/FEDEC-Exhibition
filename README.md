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
1. Download the AutoPrema App ([Download](Mobile_App.aia))
2. Launch the app and connect to AutoPrema via bluetooth 
3. Select your location
4. Put your hand inside the AutoPrema and press the "spray" button



# 한국어 
### 프로젝트의 첫 걸음
공학설계입문에서 각 그룹이 창의적인 발명품을 생각해 내는 과제를 받았습니다. 저의 팀원들은 코딩 경험이 없었기에 무엇을 해야 하는지 전혀 몰랐습니다. 대학 신입생으로서 팀원들은 사람들과 술을 마시며 "이상적인 대학 생활"을 하고 싶었고 이 프로젝트에 많은 시간을 할애할 의향이 없었습니다. 우리 팀원 중 프로젝트에 모든 시간과 에너지를 쏟을 의향이 있는 유일한 사람은 저였습니다. 그래서 꽤 힘든 시작이었습니다.

저는 아마추어 프로그래머 였기 때문에 방황했었습니다.
아두이노 프로그래밍, 모바일 프로그래밍, 회로 설계를 혼자서 어떻게 배우는지 몰랐습니다. 저에게는 모든 것이 불가능해 보였습니다.

모든 일을 혼자 할 수 있는 방법은 없었습니다. 그래서 팀원들과 짧은 회의를 통해 다양한 발명품 아이디어에 대해 토론하고 코딩 경험이 필요하지 않은 간단한 작업을 팀원들에게 할당했습니다. (예: 프로토타입 3D 디자인, 파워포인트 만들기, 보고서 작성)

모든 문제를 매일 할 수 있는 작업으로 단순화하고 하나씩 해결했습니다. 매일 Arduino 프로그래밍, 회로 설계 및 모바일 앱 프로그래밍을 독학했습니다. 논의된 아이디어를 바탕으로 시행착오를 거쳐 결국 "오토프리마"를 창작하여 FEDEC 전시회에서 창의상을 수상했습니다. 대부분의 일을 혼자 하기에는 벅찼지만 열정을 갖고 있는 일이었기 때문에 절박한 상황에서도 계속할 수 있었습니다. FEDEC 전시회 이후 프로그래밍에 진심으로 빠져들어 전공을 바꾸기로 결심했습니다.

[느낀점](공설입 느낀점 (김주호).docx)

### 오토프리마에 대하여
오토프리마는 날씨 정보에 따라 적당량의 화장품을 분사하는 미용기계입니다.

오토프리마가 적정양의 화장품을 바르도록 도와주며 아래와 같은 역할을 합니다 :
1. 화장품의 과/부족 도포로 인한 피부 트러블 방지
2. 최대 피부 효과 촉진
3. 화장품을 장기간 효율적으로 사용



### 오토프리마의 내부구조
오토프리마는 Arduino UNO, 4개의 AA 배터리, 3개의 MOSFET, HC-05, 3개의 수중펌프 및 초음파 센서가 점퍼 와이어로 회로 기판에 연결되어 있습니다.
현재 오토프리마는 수중펌프 3개가 각각 다른 메이크업 병에 담겨 있습니다. 3개의 화장품 병에는 자외선 차단제, 보습제 및 토너가 각각 채워져 있습니다.


### 오토프리마의 원리 
사용자는 앱을 실행하고 블루투스를 통해 오토프리마에 연결합니다. 사용자가 앱에서 자신의 위치를 선택하면 기상청[[1](https://www.weather.go.kr/w/pop/rss-guide.do)]에서 날씨 정보를 가져와서 화면에 표시합니다.

사용자가 "분사" 버튼을 누르면 날씨 정보가 블루투스를 통해 오토프리마로 전송됩니다. 아두이노 UNO에 구현된 알고리즘은 각 워터펌프를 일정 시간 동안 켜서 정확한 양의 화장품을 분사합니다.

### 오토프리마 설명서
1. 오토프리마 앱 다운로드 ([다운로드](Mobile_App.aia)).
2. 앱을 실행하고 블루투스를 통해 AutoPrema에 연결한다.
3. 위치를 선택한다.
4. 오토프리마 안에 손을 넣고 "분사" 버튼을 누른다.  

