// Include rendering functions
#include "render.h"
#include "colour.h"
#include <GL/gl.h>
#include "dimen.h"
#include <GL/glut.h>

void renderMaster()
{
    // Render code here
    renderNavBar();     // Render the navigation bar on top
    renderAppIcon();    // Render the app icon
    renderAppNameText(); // Render the app name text
    renderDashboardIcon(); // Render the dashboard icon
    renderDashboardText(); // Render the dashboard text
    renderSettingsIcon(); // Render the settings icon
    renderSettingsText(); // Render the settings text
    renderControlIcon(); // Render the control icon
    renderControlText(); // Render the control text
    renderDashboard1(); // Render the dashboard 1
    renderWelcomeMessages(); // Render the welcome messages
    renderWeatherIcon(); // Render the weather icon
    renderWeatherInfoText(); // Render the weather info text
    renderHumidityIcon(); // Render the humidity icon
    renderHumidityInfoText(); // Render the humidity info text
    renderTemperatureIcon(); // Render the temperature icon
    renderTemperatureInfoText(); // Render the temperature info text
    renderAddData(); // Render the add data
    renderAddDataText(); // Render the add data text
    renderDashboard2(); // Render the dashboard 2
    renderTemperatureLabelText(); // Render the temperature label text
    renderTemperatureInfoDashboard(); // Render the temperature info dashboard
    renderTemperatureInfoDashboardText(); // Render the temperature info dashboard text
    renderTemperatureSubInfoText(); // Render the temperature sub info text
    renderPowerUsageLabelText(); // Render the power usage label text
    renderPowerUsageInfoDashboard(); // Render the power usage info dashboard
    renderPowerUsageInfoDashboardText(); // Render the power usage info dashboard text
    renderPowerUsageSubInfoText(); // Render the power usage sub info text
    renderDashboard3Button1(); // Render the dashboard 3 button 1
    renderDashboard3Button2(); // Render the dashboard 3 button 2
    renderDashboard3Button3(); // Render the dashboard 3 button 3
    renderDashboard3Button4(); // Render the dashboard 3 button 4
    renderDashboard3Button5(); // Render the dashboard 3 button 5
    renderDashboard3Button6(); // Render the dashboard 3 button 6
    renderDashboard3Button7(); // Render the dashboard 3 button 7
    renderDashboard3Button8(); // Render the dashboard 3 button 8
    renderLightText(); // Render the lighting text
    renderLightButton(); // Render the light icon
    renderHeatText(); // Render the heat text
    renderHeatButton(); // Render the heat icon
    renderAirConditionerText(); // Render the air conditioner text
    renderAirConditionerButton(); // Render the air conditioner icon
    renderCameraText(); // Render the camera text
    renderCameraButton(); // Render the camera icon
    renderDoorText(); // Render the door text
    renderDoorButton(); // Render the door icon
    renderAlarmText(); // Render the alarm text
    renderAlarmButton(); // Render the alarm icon
    renderBlindsText(); // Render the blinds text
    renderBlindsButton(); // Render the blinds icon
    renderMusicText(); // Render the music text
    renderMusicButton(); // Render the music button
    renderDashboard4Control1(); // Render the dashboard 4 control 1
    renderLightingText(); // Render the lighting text
    renderBulbIcon(); // Render the bulb icon
    renderRoomControl(); // Render the room control
    renderRoomControlText(); // Render the room control text
    renderDashboard4Control2(); // Render the dashboard 4 control 2
    renderMusicInfoText(); // Render the music info text
    renderMusicPlayerText(); // Render the music player text
    renderMusicIcon(); // Render the music icon
    renderMusicControl(); // Render the music control
    renderMoreIcon1(); // Render the more icon1
    renderMoreIcon2(); // Render the more icon2
    renderMoreIcon3(); // Render the more icon3
    renderMoreIcon4(); // Render the more icon4

    glFlush();  // Clear all GL executions.
    glFinish(); // Block until all GL executions are completed.
}

void init()
{
    // Initialize the windows
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);                   // Set the display mode to single buffer and RGBA
    glutInitWindowSize(WINDOWS_WIDTH, WINDOWS_HEIGHT);              // Set the windows size
    glutInitWindowPosition(WINDOWS_CENTER_Y, WINDOWS_CENTER_Y);     // Set the windows position
    glutCreateWindow("Smart Home Control System"); // Set the windows title
    glutFullScreen();                                               // Set the windows to full screen

    // Initialize the rendering context
    glClearColor(COLOUR_WHITE);                   // Set the background color to white, any area not rendered will be white
    glMatrixMode(GL_PROJECTION);                       // Set the matrix mode to projection
    glEnable(GL_LINE_SMOOTH);                          // Enables line anti-aliasing
    glEnable(GL_BLEND);                                // Enable for proper transparency render
    glDisable(GL_DEPTH_TEST);                          // Disable depth testing for overlap object. Use for transparency object involved
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); // Enable transparency
    Object::glEndReset();                              // Reset the matrix
    glClear(GL_COLOR_BUFFER_BIT);                      // Load frame buffer
}
