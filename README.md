<h1 align="center">Motion_detector</h1>

<p align="center">
  <img alt="Github top language" src="https://img.shields.io/github/languages/top/{{YOUR_GITHUB_USERNAME}}/motion_detector?color=56BEB8">

  <img alt="Github language count" src="https://img.shields.io/github/languages/count/{{YOUR_GITHUB_USERNAME}}/motion_detector?color=56BEB8">

  <img alt="Repository size" src="https://img.shields.io/github/repo-size/{{YOUR_GITHUB_USERNAME}}/motion_detector?color=56BEB8">

  <img alt="License" src="https://img.shields.io/github/license/{{YOUR_GITHUB_USERNAME}}/motion_detector?color=56BEB8">

  <!-- <img alt="Github issues" src="https://img.shields.io/github/issues/{{YOUR_GITHUB_USERNAME}}/motion_detector?color=56BEB8" /> -->

  <!-- <img alt="Github forks" src="https://img.shields.io/github/forks/{{YOUR_GITHUB_USERNAME}}/motion_detector?color=56BEB8" /> -->

  <!-- <img alt="Github stars" src="https://img.shields.io/github/stars/{{YOUR_GITHUB_USERNAME}}/motion_detector?color=56BEB8" /> -->
</p>

<!-- Status -->

<!-- <h4 align="center"> 
	🚧  Motion_detector 🚀 Under construction...  🚧
</h4> 

<hr> -->

<p align="center">
  <a href="#dart-about">About</a> &#xa0; | &#xa0; 
  <a href="#sparkles-features">Features</a> &#xa0; | &#xa0;
  <a href="#rocket-technologies">Technologies</a> &#xa0; | &#xa0;
  <a href="#white_check_mark-requirements">Requirements</a> &#xa0; | &#xa0;
  <a href="#checkered_flag-starting">Starting</a> &#xa0; | &#xa0;
  <a href="#memo-license">License</a> &#xa0; | &#xa0;
  <a href="https://github.com/{{YOUR_GITHUB_USERNAME}}" target="_blank">Author</a>
</p>

<br>

## About ##

This is a part of a home automation system, This uses a motion detection sensor to detect any moments and turn on lights for a given time period.

## Features ##

This program will detect any movement of the area where the PIR sensor is placeed\
 And turn of the light which was assigned to that particular area for a pre defined time period\
 This program counts in between sensor triggers such as if the sensor detected a movement then the timer\
 will start till the given time is over, if there is another movenent detected by the sensor, it will reset the timer and start the given time from the last sensor trigger time.

## Technologies ##

The following tools were used in this project:

- [C]
- [C++]

## Requirements ##

Arduino (Mega/Uno)\
PIR sensor\
Relay Module\
Required additional libraries are in the Utilities folder

## Starting ##

```bash
# Upload the Motion_detector.ino to the Arduino

#In order to Change the PIR sensor PIN
#In the Board.h
$ PIR_SENSOR_PIN 2

#In order to Change the Light PIN
#In the Board.h
$ LIGHT_PIN 13

#In order to Change the Light on Time
#In the Defines.h
$ LIGHT_ON_TIME 60
```

## License ##

This project is under license from ___ . For more details, see the [LICENSE](LICENSE.md) file.

&#xa0;

<a href="#top">Back to top</a>
