
# 🌱 MoodGrow 🎶  
*"When plants get moody, we play their tune!"*  
Because soil moisture deserves a playlist 🎧

---

## 📌 Basic Details

### 👨‍💻 Team Members  
- **Team Lead:** Adarsh A M  
- **Member 2:** Adithya Krishna  

---

## 📝 Project Description  
**MoodGrow** is a hilariously fun, totally unnecessary project that uses an ESP32 and a soil moisture sensor 🌿 to detect your plant’s mood and plays songs on a website 🎵 accordingly.  

- Dry soil? Sad tunes.  
- Well-watered? Chill beats.  
- Overwatered? The dreaded wet blanket track!  

Because even plants deserve a soundtrack.  

---

## 🤦 The Problem (that nobody asked to solve)  
- Plants can’t text you when they’re thirsty.  
- Soil moisture sensors just beep or show numbers — boring!  
- No music = no empathy for your green friends.  

---

## 💡 The Solution (that nobody expected)  
- ESP32 measures soil moisture and sends data to Firebase.  
- A web app listens live and plays different songs based on moisture levels.  
- Brings plant mood swings to your ears with fun audio tracks.  

Watering plants should be a party, not a chore.  

---

## 🛠 Technical Details

### 💻 Software  
- Microcontroller: ESP32 Dev Board  
- Languages: C++ (Arduino IDE), HTML, JavaScript  
- Cloud: Firebase Realtime Database  
- Frontend: Simple web app using Firebase SDK  

### 📱 Hardware  
- ESP32 Dev Board  
- Analog Soil Moisture Sensor  
- USB cable for programming  
- WiFi hotspot (mobile or router)  

---

## ⚙ Implementation  

### 📥 Setup  
```bash
# Clone repo (if available)
git clone <repo-url>
cd MoodGrow
```

### 🚀 Run  
1. Flash ESP32 with the Arduino code provided (update WiFi & Firebase config).  
2. Open Serial Monitor at 115200 baud to verify sensor and Firebase connectivity.  
3. Open the web app in a modern browser.  
4. Watch as your plant’s mood translates into music!  

---

## 📸 Project Documentation  

### Screenshots  
![HARDWARE](moodgrow.png)  
Real-time soil moisture values updating Firebase  

![Web App]  
Music player reacts to plant moods with different songs  

### Diagrams  
![System Architecture]  
Data flow from soil sensor → ESP32 → Firebase → Web player  

---

## 🎥 Project Demo  
[Watch MoodGrow in action](https://drive.google.com/file/d/1hz3_JYkgy1wzwo0hhS8U8BtxVDqX_XIU/view?usp=drivesdk)  
See how the music changes instantly with soil moisture levels!  

---

## 👨‍💻 Team Contributions  
- **Adarsh A M:** Project lead, Firebase integration, web app design  
- **Adithya Krishna:** ESP32 coding, sensor calibration, serial debugging  

---

Made with ❤, soil vibes 🌱, and random tunes 🎶 at TinkerHub Useless Projects  
