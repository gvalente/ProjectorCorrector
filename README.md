# Projector Corrector

> Adjusting to an external display is not an impossible task, but plugging your laptop into a projector 10 seconds before showing your work to execs and seeing a washed out mess will at times make you want to jump out a window. Projector Corrector attempts to quickly improve your display within sketch by overlaying your artboards to correct brightness, contrast (and stay tuned for gamma?). Toggle an overlay across all pages and fine tune by incrementing the opacity.

## Installation
1. Download the [zip archive with the latest version of Project Corrector](https://github.com/gvalente/ProjectorCorrector/archive/master.zip)
2. Unzip the archive
3. Double click <kbd>Projector Corrector.sketchplugin</kbd> to install



## Usage
**Toggle the Overlay**  
<kbd>cmd</kbd> + <kbd>shift</kbd> + <kbd>p</kbd> will toggle the overlay on and off. This will create a locked rectangle over the bounds of each page's artboards.
The default overlay color is #000000 with a starting opacity of 10%.

**Increment the Overlay**  
Once the overlay is created, you can quickly increment their opacity to fine tune your brightness and contrast correction.
The default overlay opacity offset is 2%.  
<kbd>cmd</kbd> + <kbd>shift</kbd> + <kbd>[</kbd> – Increase the overlay opacity by 2%.  
<kbd>cmd</kbd> + <kbd>shift</kbd> + <kbd>o</kbd> – Decrease the overlay opacity by 2%.  

The overlay color, incrementation value and overlay padding on your artboard bounds can be modified in These configs can be modified in <kbd>/Contents/Sketch/library/utilities.js</kbd>.

## Built With
Projector Corrector is a standard sketch bundle and written in JavaScript.

## Future Features
* **Smarter Overlays** – Use intelligent layer blend modes for targeted brightness and contrast correction. Help Wanted!
* **Does cloning kill the original?** – Let your overlay offset persist in a session when toggling
* **Don't forget about me!** – Time stamp the creation time of the overlay and prompt to delete if it has existed for more than 60 minutes
* **It's Easy As A, B** – Gamma correction? Is this something we can achieve? Help Wanted!
* **Initial Thrusters Disengage!** – I'm staring at that unoptimized code block too. Now that the initial build phase phase is near complete, I'll loop back and clean stuff up.

## License

This project is licensed under the MIT License. Have at it.

## Authors
[Gino Valente](https://www.linkedin.com/in/ginovalente "Gino Valente's Linkedin") – Concept and Development

## Acknowledgments
* Thank you [@halffullheart](https://github.com/halffullheart "Daniel Worthington") for helping me getting started and troubleshooting how to fill that first rectangle! He wrote the sketch plugin for the awesome [BRAND.AI](www.brand.ai) team, doing great work to synchronize style guides and UI components within your design team and sketch clients.
* Thank you [@Utom](https://github.com/utom). Your plugin [Sketch Measure](https://github.com/utom/sketch-measure) was extremely valuable to reverse engineer when I first started.