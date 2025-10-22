# EnvironmentSettings-Plugin
**EnvironmentSettings** is an Unreal Engine plugin that recreates *Burnout Paradise's* Environment Settings system for time-of-day driven post effects and color grading using **Timelines** and **Keyframes**.

Each **Timeline** holds multiple **Keyframes**, each defining how the environment should look at a specific time of day (in seconds since 00:00).
Every parameter from each Keyframe (such as bloom, vignette, or LUT), is smoothly blended between the previous and next keyframe based on the current time of day.

---

## 🧭 How to Use

1. **Place the Manager**
   Add the `BP_EnvironmentSettingsManager` actor to your world.

2. **Connect Time of Day**
   Implement the `TimeOfDayChange` Blueprint Interface and call it whenever the in-game time updates (for example, every in-game second).

3. **Assign a Timeline**
   You can use the default Timeline included with the plugin, or create your own with custom Keyframes. To do that, just create a new Data Asset of the type `EnvironmentTimeline`, and the same for each Keyframe, with the type `EnvironmentKeyframe`.
   To assign it, simply select your `BP_EnvironmentSettingsManager` in the level and set its Timeline asset in the Details panel.

4. **Customize Everything**
   Each Keyframe can define bloom, vignette, LUT, and lighting parameters *(currently unimplemented, might be deleted later on if it is too difficult to implement because of the differences between Burnout Paradise's engine, RenderWare, and Unreal Engine)*.
   If you want to add new post-process effects, just extend the Data Asset and update the Blueprint logic accordingly.

