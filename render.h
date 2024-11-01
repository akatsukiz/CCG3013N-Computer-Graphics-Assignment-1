#include "object.cpp"
#include <GL/glut.h>

#pragma region Group NavBar

Object NavBar = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object appIcon = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object appNameText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object dashboardIcon = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object dashBoardText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object settingsIcon = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object settingsText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object controlIcon = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object controlText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);

void renderNavBar()
{
    glColor4f(COLOUR_PINK);
    NavBar.translate(0, 510);
    NavBar.drawRoundedRectFill(WINDOWS_WIDTH, 130, 45);
}

void renderAppIcon()
{
    glColor4f(COLOUR_BLACK);
    appIcon.drawTriangle(50, 1030, 80, 1060, 110, 1030);
    glColor4f(COLOUR_PINK);
    appIcon.drawTriangle(60, 1030, 80, 1050, 100, 1030);
    glColor4f(COLOUR_BLACK);
    appIcon.drawTriangle(65, 1032, 80, 1045, 95, 1032);
    appIcon.translate(-880, 485);
    appIcon.drawRoundedRectFill(30, 20, 5);
    glColor4f(COLOUR_PINK);
    appIcon.translate(0, -5);
    appIcon.drawRoundedRectFill(10, 10, 3);
    glColor4f(COLOUR_BLACK);
    appIcon.translate(15, 28);
    appIcon.drawRect(8, 15);
}

void renderAppNameText()
{
    glColor4f(COLOUR_BLACK);
    appNameText.drawText(125, 1015, "SmartHomeControl", 3.8f, 5.5f);
}

void renderDashboardIcon()
{
    glColor4f(COLOUR_BLACK);
    dashboardIcon.translate(210, 480);
    dashboardIcon.drawRect(15, 15);
    glColor4f(COLOUR_PINK);
    dashboardIcon.drawRect(8, 8);
    dashboardIcon.translate(20, 0);
    glColor4f(COLOUR_BLACK);
    dashboardIcon.drawRect(15, 15);
    glColor4f(COLOUR_PINK);
    dashboardIcon.drawRect(8, 8);
    dashboardIcon.translate(0, 20);
    glColor4f(COLOUR_BLACK);
    dashboardIcon.drawRect(15, 15);
    glColor4f(COLOUR_PINK);
    dashboardIcon.drawRect(8, 8);
    dashboardIcon.translate(-20, 0);
    glColor4f(COLOUR_BLACK);
    dashboardIcon.drawRect(15, 15);
    glColor4f(COLOUR_PINK);
    dashboardIcon.drawRect(8, 8);
}

void renderDashboardText()
{
    glColor4f(COLOUR_BLACK);
    dashBoardText.drawText(1200, 1016, "Dashboard", 3.0f, 3.5f);
}

void renderSettingsIcon()
{
    glColor4f(COLOUR_BLACK); // Suggestions: Dark shade of gray for UI design
    settingsIcon.translate(505, 490);
    settingsIcon.drawTorus(12, 5, 0, 360);
    // Get current position
    GLfloat originalX = settingsIcon.x;
    GLfloat originalY = settingsIcon.y;

    // Define Trapezoid shape
    int trapezoidHeight = 10;
    int trapezoidWidthLong = 20;
    int trapezoidWidthShort = 8;

    // Radius offset for the trapezoid
    int radiusOffset = 17;

    // Top gear
    settingsIcon.orbitTo(originalX, originalY, radiusOffset, 0);
    int topLeftX = settingsIcon.x - trapezoidWidthLong / 2;
    int topLeftY = settingsIcon.y - trapezoidHeight / 2;
    int topRightX = settingsIcon.x + trapezoidWidthLong / 2;
    int topRightY = settingsIcon.y - trapezoidHeight / 2;
    int bottomRightX = settingsIcon.x + trapezoidWidthShort / 2;
    int bottomRightY = settingsIcon.y + trapezoidHeight / 2;
    int bottomLeftX = settingsIcon.x - trapezoidWidthShort / 2;
    int bottomLeftY = settingsIcon.y + trapezoidHeight / 2;
    settingsIcon.drawIrregularRectangle(
        bottomLeftX, bottomLeftY,   // Bottom Left
        bottomRightX, bottomRightY, // Bottom Right
        topRightX, topRightY,       // Top Right
        topLeftX, topLeftY          // Top Left
    );

    for (int i = 45; i < 365; i+= 45)
    {
        settingsIcon.orbitTo(originalX, originalY, radiusOffset, i);
        settingsIcon.drawIrregularRectangle(
            bottomLeftX, bottomLeftY,   // Bottom Left
            bottomRightX, bottomRightY, // Bottom Right
            topRightX, topRightY,       // Top Right
            topLeftX, topLeftY          // Top Left
        );
    }
    
}

void renderSettingsText()
{
    glColor4f(COLOUR_BLACK);
    settingsText.drawText(1490, 1016, "Settings", 3.0f, 3.5f);
}

void renderControlIcon(){
    // Horizontal Line
    // Line 1
    controlIcon.translate(725, 500);
    glColor4f(COLOUR_WHITE);
    controlIcon.drawRect(20, 3);
    controlIcon.translate(20, 0);
    controlIcon.drawRect(10, 3);

    // Line 2
    controlIcon.translate(-25, -10);
    glColor4f(COLOUR_WHITE);
    controlIcon.drawRect(10, 3);
    controlIcon.translate(20, 0);
    controlIcon.drawRect(20, 3);

    // Line 3
    controlIcon.translate(-20, -10);
    glColor4f(COLOUR_WHITE);
    controlIcon.drawRect(10, 3);
    controlIcon.translate(20, 0);
    controlIcon.drawRect(20, 3);


    // Vertical Line
    // Line 3
    controlIcon.translate(-10, 0);
    controlIcon.drawRect(3, 10);

    // Line 2
    controlIcon.translate(-5, 10);
    controlIcon.drawRect(3, 10);

    // Line 1
    controlIcon.translate(15, 10);
    controlIcon.drawRect(3, 10);
}

void renderControlText()
{
    glColor4f(COLOUR_WHITE);
    controlText.drawText(1720, 1016, "Control", 3.0f, 3.5f);
}

#pragma endregion Group NavBar

#pragma region Group Dashboard

Object Dashboard1 = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object Dashboard2 = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object Dashboard3Button1 = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object Dashboard3Button2 = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object Dashboard3Button3 = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object Dashboard3Button4 = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object Dashboard3Button5 = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object Dashboard3Button6 = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object Dashboard3Button7 = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object Dashboard3Button8 = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object Dashboard4Control1 = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object Dashboard4Control2 = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);

void renderDashboard1()
{
    glColor4f(COLOUR_GREY_PINK);
    Dashboard1.translate(-470, 190);
    Dashboard1.drawRoundedRectFill(910, 470, 45);
}

void renderDashboard2()
{
    glColor4f(COLOUR_ORANGE_PINK);
    Dashboard2.translate(470, 190);
    Dashboard2.drawRoundedRectFill(910, 470, 45);
}

void renderDashboard3Button1()
{
    glColor4f(COLOUR_DARK_PINK);
    Dashboard3Button1.translate(-819, -175);
    Dashboard3Button1.drawRoundedRectFill(204, 220, 45);
}

void renderDashboard3Button2()
{
    glColor4f(COLOUR_LIGHT_GREY);
    Dashboard3Button2.translate(-586, -175);
    Dashboard3Button2.drawRoundedRectFill(204, 220, 45);
}

void renderDashboard3Button3()
{
    glColor4f(COLOUR_LIGHT_GREY);
    Dashboard3Button3.translate(-353, -175);
    Dashboard3Button3.drawRoundedRectFill(204, 220, 45);
}

void renderDashboard3Button4()
{
    glColor4f(COLOUR_LIGHT_GREY);
    Dashboard3Button4.translate(-120, -175);
    Dashboard3Button4.drawRoundedRectFill(204, 220, 45);
}

void renderDashboard3Button5()
{
    glColor4f(COLOUR_LIGHT_GREY);
    Dashboard3Button5.translate(-819, -410);
    Dashboard3Button5.drawRoundedRectFill(204, 220, 45);
}

void renderDashboard3Button6()
{
    glColor4f(COLOUR_LIGHT_GREY);
    Dashboard3Button6.translate(-586, -410);
    Dashboard3Button6.drawRoundedRectFill(204, 220, 45);
}

void renderDashboard3Button7()
{
    glColor4f(COLOUR_LIGHT_GREY);
    Dashboard3Button7.translate(-353, -410);
    Dashboard3Button7.drawRoundedRectFill(204, 220, 45);
}

void renderDashboard3Button8()
{
    glColor4f(COLOUR_DARK_PINK);
    Dashboard3Button8.translate(-120, -410);
    Dashboard3Button8.drawRoundedRectFill(204, 220, 45);
}

void renderDashboard4Control1()
{
    glColor4f(COLOUR_LIGHT_YELLOW);
    Dashboard4Control1.translate(230, -295);
    Dashboard4Control1.drawRoundedRectFill(425, 450, 45);
}

void renderDashboard4Control2()
{
    glColor4f(COLOUR_LIGHT_PINK);
    Dashboard4Control2.translate(705, -295);
    Dashboard4Control2.drawRoundedRectFill(425, 450, 45);
}

#pragma endregion Group Dashboard

#pragma region Group Dashboard1

Object WelcomeMessages = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object WeatherIcon = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object WeatherInfoText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object HumidityIcon = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object HumidityInfoText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object TemperatureIcon = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object TemperatureInfoText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object AddData = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object AddDataText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);

void renderWelcomeMessages()
{
    glColor4f(COLOUR_BLACK);
    WelcomeMessages.drawText(80, 900, "Hello, Rei!", 3.2f, 4.8f);
    glColor4f(COLOUR_LIGHT_BLACK);
    WelcomeMessages.drawText(80, 850, "Welcome home Rei. The weather today is quite hot,", 2.2f, 3.2f);
    WelcomeMessages.drawText(80, 810, "please remember to keep yourself hydrated!", 2.2f, 3.2f);
}

void renderWeatherIcon()
{
    glColor4f(COLOUR_ORANGE);
    WeatherIcon.translate(-840, 160);
    WeatherIcon.drawCircle(40, 0, 360);
    glColor4f(COLOUR_GREY_PINK);
    WeatherIcon.drawCircle(30, 0, 360);
    glColor4f(COLOUR_ORANGE);
    WeatherIcon.translate(20, 40);
    WeatherIcon.drawCircle(40, 0, 360);
    glColor4f(COLOUR_GREY_PINK);
    WeatherIcon.drawCircle(30, 0, 360);
    glColor4f(COLOUR_ORANGE);
    WeatherIcon.translate(40, -20);
    WeatherIcon.drawCircle(40, 0, 360);
    glColor4f(COLOUR_GREY_PINK);
    WeatherIcon.drawCircle(30, 0, 360);
    glColor4f(COLOUR_ORANGE);
    WeatherIcon.translate(0, -30);
    WeatherIcon.drawRoundedRectFill(100, 60, 5);
    glColor4f(COLOUR_ORANGE);
    WeatherIcon.translate(35, 0);
    WeatherIcon.drawCircle(30, 0, 360);
    glColor4f(COLOUR_GREY_PINK);
    WeatherIcon.drawCircle(20, 0, 360);
    glColor4f(COLOUR_GREY_PINK);
    WeatherIcon.translate(-55, 10);
    WeatherIcon.drawRoundedRectFill(100, 60, 5);
    WeatherIcon.translate(0, 20);
    WeatherIcon.drawRoundedRectFill(50, 65, 5);
    WeatherIcon.translate(-32, -3);
    WeatherIcon.drawRoundedRectFill(50, 20, 5);
    WeatherIcon.translate(30, 25);
    WeatherIcon.drawRoundedRectFill(20, 30, 5);
}

void renderWeatherInfoText()
{
    glColor4f(COLOUR_BLACK);
    WeatherInfoText.drawText(125, 595, "30", 3.6f, 5.3f);
    WeatherInfoText.translate(-760, 95);
    WeatherInfoText.drawTorus(6, 4, 0, 360);
    WeatherInfoText.drawText(110, 555, "Weather", 2.2f, 3.2f);
    WeatherInfoText.drawText(120, 515, "Sunny", 2.2f, 3.2f);
}

void renderHumidityIcon()
{
    glColor4f(COLOUR_DARK_BLUE);
    HumidityIcon.translate(-575, 150);
    HumidityIcon.drawCircle(40, 0, 360);
    HumidityIcon.drawTriangle(350, 710,385, 790, 420, 710);
    glColor4f(COLOUR_GREY_PINK);
    HumidityIcon.translate(0, 5);
    HumidityIcon.drawTorus(25, 10, 180, 260);
}


void renderHumidityInfoText()
{
    glColor4f(COLOUR_BLACK);
    HumidityInfoText.drawText(330, 595, "45%", 3.6f, 5.3f);
    HumidityInfoText.drawText(325, 555, "Outdoor", 2.2f, 3.2f);
    HumidityInfoText.drawText(320, 515, "Humidity", 2.2f, 3.2f);
}

void renderTemperatureIcon()
{
    glColor4f(COLOUR_BLUE);
    TemperatureIcon.translate(-340, 140);
    TemperatureIcon.drawCircle(30, 0, 360); // Blue Circle
    TemperatureIcon.translate(0.5, 40);
    TemperatureIcon.drawRoundedRectFill(30, 120, 20); // Blue Rectangle
    glColor4f(COLOUR_GREY_PINK);
    TemperatureIcon.drawRoundedRectFill(15, 100, 5); // White Rectangle
    TemperatureIcon.translate(-0.5, -40);
    glColor4f(COLOUR_GREY_PINK);
    TemperatureIcon.drawCircle(20, 0, 360); // White Circle
    glColor4f(COLOUR_BLUE);
    TemperatureIcon.drawCircle(15, 0, 360); // Blue Circle
    TemperatureIcon.translate(1, 30);
    TemperatureIcon.drawRoundedRectFill(2, 65, 3); // Blue Rectangle
}

void renderTemperatureInfoText()
{
    glColor4f(COLOUR_BLACK);
    TemperatureInfoText.drawText(590, 595, "22", 3.6f, 5.3f);
    TemperatureInfoText.translate(-295, 95);
    TemperatureInfoText.drawTorus(6, 4, 0, 360);
    TemperatureInfoText.drawText(580, 555, "Indoor", 2.2f, 3.2f);
    TemperatureInfoText.drawText(530, 515, "Temperature", 2.2f, 3.2f);
}

void renderAddData()
{
    glColor4f(COLOUR_GREY);
    AddData.translate(-127, 170);
    AddData.drawRect(15, 80);
    AddData.drawRect(80, 15);
}

void renderAddDataText()
{
    glColor4f(COLOUR_GREY);
    AddDataText.drawText(805, 555, "Add", 2.2f, 3.2f);
    AddDataText.drawText(800, 515, "Data", 2.2f, 3.2f);
}

#pragma endregion Group Dashboard1

#pragma region Group Dashboard2

Object TemperatureLabelText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object TemperatureInfoDashboard = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object TemperatureInfoDashboardText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object TemperatureSubInfoText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object PowerUsageLabelText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object PowerUsageInfoDashboard = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object PowerUsageInfoDashboardText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object PowerUsageSubInfoText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);

void renderTemperatureLabelText()
{
    glColor4f(COLOUR_BLACK);
    TemperatureLabelText.drawText(1110, 900, "Temperature", 3.2f, 4.8f);
}

void renderTemperatureInfoDashboard()
{
    // Temperature Gauge
    TemperatureInfoDashboard.translate(280, 160);
    glColor4f(COLOUR_DARK_GREY);
    TemperatureInfoDashboard.drawTorus(150, 17, 230, 130); // Outer ring (use grey color)
    glColor4f(COLOUR_LIGHT_BLUE);
    TemperatureInfoDashboard.drawTorus(150, 17, 230, 70); // Progress ring (use blue color)
    glColor4f(COLOUR_WHITE);
    TemperatureInfoDashboard.drawCircle(120, 0, 360); // Inner circle (white)
    glColor4f(COLOUR_BLACK);
    TemperatureInfoDashboard.drawTorus(108, 7, 0, 360); // Inner ring (black)
    glColor4f(COLOUR_WHITE);
    TemperatureInfoDashboard.translate(135, 70);
    TemperatureInfoDashboard.drawCircle(25, 0, 360); // White Circle

    // Temperature Icon
    glColor4f(COLOUR_BLUE);
    TemperatureInfoDashboard.translate(-131, -21);
    TemperatureInfoDashboard.drawCircle(15, 0, 360); // Blue Circle
    glColor4f(COLOUR_BLUE);
    TemperatureInfoDashboard.translate(0.5, 20);
    TemperatureInfoDashboard.drawRoundedRectFill(15, 50, 5); // Blue Rectangle
    glColor4f(COLOUR_WHITE);
    TemperatureInfoDashboard.drawRoundedRectFill(5, 40, 5); // White Rectangle
    TemperatureInfoDashboard.translate(-0.5, -20);
    glColor4f(COLOUR_WHITE);
    TemperatureInfoDashboard.drawCircle(10, 0, 360); // White Circle
    glColor4f(COLOUR_BLUE);
    TemperatureInfoDashboard.drawCircle(7, 0, 360); // Blue Circle
    TemperatureInfoDashboard.translate(1, 18);
    TemperatureInfoDashboard.drawRoundedRectFill(0.5, 25, 2); // Blue Rectangle
}

void renderTemperatureInfoDashboardText()
{
    glColor4f(COLOUR_BLACK);
    TemperatureInfoDashboardText.drawText(1195, 670, "22", 5.0f, 7.0f);
    TemperatureInfoDashboardText.translate(330, 180);
    TemperatureInfoDashboardText.drawTorus(8, 5, 0, 360);
    TemperatureInfoDashboardText.drawText(1230, 625, "c", 3.2f, 4.2f);
}

void renderPowerUsageLabelText()
{
    glColor4f(COLOUR_BLACK);
    PowerUsageLabelText.drawText(1550, 900, "Power", 3.2f, 4.8f);
}

void renderPowerUsageInfoDashboard()
{
    // Power Usage Gauge
    PowerUsageInfoDashboard.translate(650, 160);
    glColor4f(COLOUR_DARK_GREY);
    PowerUsageInfoDashboard.drawTorus(150, 17, 0, 360); // Outer ring (use grey color)
    glColor4f(COLOUR_RED);
    PowerUsageInfoDashboard.drawTorus(150, 17, 225, 15); // Progress ring (use yellow color)
    glColor4f(COLOUR_WHITE);
    PowerUsageInfoDashboard.drawCircle(120, 0, 360); // Inner circle (white)
    glColor4f(COLOUR_BLACK);
    PowerUsageInfoDashboard.drawTorus(108, 7, 0, 360); // Inner ring (black)
    glColor4f(COLOUR_WHITE);

    // Power Icon
    glColor4f(COLOUR_YELLOW);
    PowerUsageInfoDashboard.drawTriangle(1600, 765, 1610, 795, 1620, 765);
    PowerUsageInfoDashboard.translate(8, 70);
    PowerUsageInfoDashboard.rotate(180, PowerUsageInfoDashboard.x, PowerUsageInfoDashboard.y);
    PowerUsageInfoDashboard.drawTriangle(1610, 765, 1620, 795, 1630, 765);
}

void renderPowerUsageInfoDashboardText()
{
    glColor4f(COLOUR_BLACK);
    PowerUsageInfoDashboardText.drawText(1550, 670, "135", 5.0f, 7.0f);
    PowerUsageInfoDashboardText.translate(330, 180);
    PowerUsageInfoDashboardText.drawTorus(8, 5, 0, 360);
    PowerUsageInfoDashboardText.drawText(1575, 625, "kwh", 3.2f, 4.2f);
}

void renderTemperatureSubInfoText()
{
    glColor4f(COLOUR_BLACK);
    TemperatureSubInfoText.drawText(1125, 515, "24", 2.2f, 3.2f);
    TemperatureSubInfoText.translate(210, -2);
    TemperatureSubInfoText.drawTorus(4, 3, 0, 360);
    TemperatureSubInfoText.drawText(1190, 515, "in 20 min", 2.2f, 3.2f);
}

void renderPowerUsageSubInfoText()
{
    glColor4f(COLOUR_BLACK);
    PowerUsageSubInfoText.drawText(1520, 515, "Saving 1.87$", 2.2f, 3.2f);
}

#pragma endregion Group Dashboard2

#pragma region Group Dashboard3

Object LightText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object LightButton = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object HeatText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object HeatButton = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object AirConditionerText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object AirConditionerButton = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object CameraText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object CameraButton = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object DoorText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object DoorButton = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object AlarmText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object AlarmButton = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object BlindsText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object BlindsButton = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object MusicText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object MusicButton = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);

void renderLightText()
{
    glColor4f(COLOUR_BLACK);
    LightText.drawText(100, 300, "Lights", 2.2f, 3.2f);
}

void renderLightButton()
{
    glColor4f(COLOUR_BLACK);
    LightButton.translate(-820, -130);
    LightButton.drawCircle(40, 0, 360);
    LightButton.translate(0, -35);
    LightButton.drawRoundedRectFill(40, 60, 10);
    LightButton.translate(0, -28);
    LightButton.drawCircle(10, 0, 360);
    glColor4f(COLOUR_DARK_PINK);
    LightButton.translate(0, 20);
    LightButton.drawRect(15, 5);
    LightButton.translate(0, -10);
    LightButton.drawRect(15, 5);
    LightButton.translate(2, 45);
    LightButton.drawRect(5, 20);
    LightButton.translate(-5, 10);
    LightButton.rotate(-45, LightButton.x, LightButton.y);
    LightButton.drawRect(5, 15);
    LightButton.translate(10, 0);
    LightButton.rotate(45, LightButton.x, LightButton.y);
    LightButton.drawRect(5, 15);
}

void renderHeatText()
{
    glColor4f(COLOUR_BLACK);
    HeatText.drawText(325, 300, "Heating", 2.2f, 3.2f);
}

void renderHeatButton()
{
    glColor4f(COLOUR_BLACK);
    HeatButton.translate(-580, -160);
    HeatButton.drawCircle(45, 0, 360);
    glColor4f(COLOUR_LIGHT_GREY);
    HeatButton.drawCircle(30, 0, 360);
    glColor4f(COLOUR_BLACK);
    HeatButton.drawTriangle(340, 400, 370, 450, 400, 400);
    glColor4f(COLOUR_LIGHT_GREY);
    HeatButton.drawTriangle(355, 400, 370, 425, 385, 400);
    glColor4f(COLOUR_BLACK);
    HeatButton.drawTriangle(385, 400, 400, 440, 420, 400);
    glColor4f(COLOUR_LIGHT_GREY);
    HeatButton.drawTriangle(390, 400, 400, 415, 410, 385);
}

void renderAirConditionerText()
{
    glColor4f(COLOUR_BLACK);
    AirConditionerText.drawText(590, 325, "Air", 2.2f, 3.2f);
    AirConditionerText.drawText(530, 285, "Conditioner", 2.2f, 3.2f);
}

void renderAirConditionerButton()
{
    glColor4f(COLOUR_BLACK);
    AirConditionerButton.translate(-350, -125);
    AirConditionerButton.drawRoundedRectFill(120, 70, 10);
    glColor4f(COLOUR_LIGHT_GREY);
    AirConditionerButton.translate(0, 10);
    AirConditionerButton.drawRect(100, 25);
    AirConditionerButton.translate(0, 10);
    AirConditionerButton.drawRoundedRectFill(100, 10, 10);
    AirConditionerButton.translate(0, -35);
    AirConditionerButton.drawRect(100, 5);
    AirConditionerButton.translate(0, -5);
    AirConditionerButton.drawRoundedRectFill(100, 8, 10);
    AirConditionerButton.translate(0, -20);
    AirConditionerButton.drawTriangle(575, 375, 610, 430, 645, 375);
    AirConditionerButton.drawCircle(27, 0, 360);
    glColor4f(COLOUR_BLACK);
    AirConditionerButton.drawTriangle(587, 375, 610, 420, 633.7, 375);
    AirConditionerButton.drawCircle(22, 0, 360);
}

void renderCameraText()
{
    glColor4f(COLOUR_BLACK);
    CameraText.drawText(780, 300, "Cameras", 2.2f, 3.2f);
}

void renderCameraButton()
{
    glColor4f(COLOUR_BLACK);
    CameraButton.translate(-115, -170);
    CameraButton.drawRoundedRectFill(120, 80, 10);
    glColor4f(COLOUR_LIGHT_GREY);
    CameraButton.drawCircle(20, 0, 360);
     glColor4f(COLOUR_BLACK);
    CameraButton.drawQuad(800, 400, 820, 425, 870, 425, 890, 400);
}

void renderDoorText()
{
    glColor4f(COLOUR_BLACK);
    DoorText.drawText(100, 60, "Doors", 2.2f, 3.2f);
}

void renderDoorButton()
{
    glColor4f(COLOUR_BLACK);
    DoorButton.translate(-820, -400);
    DoorButton.drawRoundedRectFill(70, 70, 10);
    glColor4f(COLOUR_LIGHT_GREY);
    DoorButton.drawCircle(10, 0, 360);
    glColor4f(COLOUR_BLACK);
    DoorButton.translate(0, 35);
    DoorButton.drawTorus(16, 10, 270, 90);
}

void renderAlarmText()
{
    glColor4f(COLOUR_BLACK);
    AlarmText.drawText(330, 60, "Alarms", 2.2f, 3.2f);
}

void renderAlarmButton()
{
    glColor4f(COLOUR_BLACK);
    AlarmButton.translate(-580, -400);
    AlarmButton.drawRoundedRectFill(70, 50, 10);
    AlarmButton.translate(0, 25);
    AlarmButton.drawCircle(35, 0, 360);
    AlarmButton.drawTriangle(325, 110, 380, 170, 435, 110);
    AlarmButton.translate(0, -60);
    AlarmButton.drawCircle(15, 90, 270);
    AlarmButton.translate(0, 95);
    AlarmButton.drawCircle(10, 0, 360);
    glColor4f(COLOUR_LIGHT_GREY);
    AlarmButton.translate(0, -32);
    AlarmButton.drawRect(10, 28);
    AlarmButton.translate(0, -28);
    AlarmButton.drawRect(10, 10);
}

void renderBlindsText()
{
    glColor4f(COLOUR_BLACK);
    BlindsText.drawText(570, 60, "Blinds", 2.2f, 3.2f);
}

void renderBlindsButton()
{
    // Horizontal Line
    glColor4f(COLOUR_BLACK);
    BlindsButton.translate(-350, -430);
    BlindsButton.drawRect(100, 10);
    BlindsButton.translate(0, 20);
    BlindsButton.drawRect(75, 10);
    BlindsButton.translate(0, 20);
    BlindsButton.drawRect(75, 10);
    BlindsButton.translate(0, 20);
    BlindsButton.drawRect(75, 10);
    BlindsButton.translate(0, 20);
    BlindsButton.drawRect(75, 10);

    // Vertical Line
    BlindsButton.translate(-33, -37);
    BlindsButton.drawRect(10, 85);
    BlindsButton.translate(45, 0);
    BlindsButton.drawRect(10, 85);
    BlindsButton.translate(20, 0);
    BlindsButton.drawRect(10, 85);
    BlindsButton.translate(-21, -47);
    BlindsButton.drawCircle(10, 0, 360);
}

void renderMusicText()
{
    glColor4f(COLOUR_BLACK);
    MusicText.drawText(805, 60, "Music", 2.2f, 3.2f);
}

void renderMusicButton()
{
    glColor4f(COLOUR_BLACK);
    MusicButton.translate(-125, -420);
    MusicButton.drawCircle(20, 0, 360);
    MusicButton.translate(13, 30);
    MusicButton.drawRect(15, 60);
    MusicButton.translate(7, 35);
    MusicButton.drawRect(30, 25);
}

#pragma endregion Group Dashboard3

#pragma region Group Dashboard4Control1

Object LightingText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object BulbIcon = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object LightControl = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object RoomControl = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object RoomControlText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);

void renderLightingText()
{
    glColor4f(COLOUR_BLACK);
    LightingText.drawText(1010, 410, "Lighting", 3.2f, 4.8f);
}

void renderBulbIcon()
{
    // Bulb Icon
    glColor4f(COLOUR_LIGHT_ORANGE);
    BulbIcon.translate(230, -240);
    BulbIcon.drawCircle(70, 0, 360);
    BulbIcon.translate(0, -55);
    BulbIcon.drawRoundedRectFill(70, 100, 20);
    BulbIcon.translate(0, -50);
    BulbIcon.drawCircle(10, 0, 360);
    glColor4f(COLOUR_LIGHT_YELLOW);
    BulbIcon.translate(0, 35);
    BulbIcon.drawRect(35, 10);
    BulbIcon.translate(0, -15);
    BulbIcon.drawRect(35, 10);
    BulbIcon.translate(2, 65);
    BulbIcon.drawRect(15, 30);
    BulbIcon.translate(-10, 20);
    BulbIcon.rotate(-45, BulbIcon.x, BulbIcon.y);
    BulbIcon.drawRect(15, 25);
    BulbIcon.translate(20, 0);
    BulbIcon.rotate(45, BulbIcon.x, BulbIcon.y);
    BulbIcon.drawRect(15, 25);

    // Brightness Bar
    BulbIcon.translate(-1, -160);
    glColor4f(COLOUR_DARK_GREY);
    BulbIcon.drawRect(220, 5);
    glColor4f(COLOUR_DARK_PINK);
    BulbIcon.translate(-80, 0);
    BulbIcon.drawRect(120, 5);
    BulbIcon.translate(50, 0);
    BulbIcon.drawCircle(10, 0, 360);

    // Brightness Icon - Lower
    glColor4f(COLOUR_GREY);
    BulbIcon.translate(-140, 0);
    BulbIcon.drawCircle(12, 0, 360);

    // Brightness Icon - Higher
    glColor4f(COLOUR_BLACK);
    BulbIcon.translate(310, 0);
    BulbIcon.drawCircle(12, 0, 360);

    // Line
    glColor4f(COLOUR_GREY);
    BulbIcon.translate(-310, 20);
    BulbIcon.drawRoundedRectFill(5, 8, 5);
    BulbIcon.translate(0, -40);
    BulbIcon.drawRoundedRectFill(5, 8, 5);
    BulbIcon.translate(20, 20);
    BulbIcon.drawRoundedRectFill(8, 5, 5);
    BulbIcon.translate(-40, 0);
    BulbIcon.drawRoundedRectFill(8, 5, 5);

    glColor4f(COLOUR_BLACK);
    BulbIcon.translate(330, 20);
    BulbIcon.drawRoundedRectFill(5, 8, 5);
    BulbIcon.translate(0, -40);
    BulbIcon.drawRoundedRectFill(5, 8, 5);
    BulbIcon.translate(20, 20);
    BulbIcon.drawRoundedRectFill(8, 5, 5);
    BulbIcon.translate(-40, 0);
    BulbIcon.drawRoundedRectFill(8, 5, 5);
}

void renderRoomControl()
{
    glColor4f(COLOUR_BLACK);
    RoomControl.drawTriangle(1100, 65, 1120, 85, 1120, 45);
    RoomControl.drawTriangle(1270, 45, 1270, 85, 1290, 65);
}

void renderRoomControlText()
{
    glColor4f(COLOUR_BLACK);
    RoomControlText.drawText(1150, 55, "Studio", 2.2f, 3.2f);
}

#pragma endregion Group Dashboard4Control1

#pragma region Group Dashboard4Control2

Object MusicPlayerText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object MusicIcon = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object MusicInfoText = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);
Object MusicControl = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);

void renderMusicPlayerText()
{
    glColor4f(COLOUR_BLACK);
    MusicPlayerText.drawText(1488, 410, "Music Player", 3.2f, 4.8f);
}

void renderMusicIcon()
{
    glColor4f(COLOUR_RED_PINK);
    MusicIcon.translate(690, -290);
    MusicIcon.drawCircle(35, 0, 360);
    MusicIcon.translate(25, 38);
    MusicIcon.drawRect(20, 90);
    MusicIcon.translate(13, 60);
    MusicIcon.drawRect(45, 35);
}

void renderMusicInfoText()
{
    glColor4f(COLOUR_BLACK);
    MusicInfoText.drawText(1550, 150, "Now Playing-", 2.5f, 4.0f);
    MusicInfoText.drawItalicText(1630, 105, "Koala", 2.2f, 0.2f);
}

void renderMusicControl()
{
    glColor4f(COLOUR_BLACK);
    // Previous button
    MusicControl.drawTriangle(1600, 65, 1620, 45, 1620, 85);
    MusicControl.drawTriangle(1580, 65, 1600, 45, 1600, 85);
    // Play button
    MusicControl.drawTriangle(1655, 41, 1655, 89, 1690, 65);
    // Next Button
    MusicControl.drawTriangle(1720, 45, 1720, 85, 1740, 65);
    MusicControl.drawTriangle(1740, 45, 1740, 85, 1760, 65);

}

#pragma endregion Group Dashboard4Control2

#pragma region More Icon

Object MoreIcon = Object(WINDOWS_CENTER_X, WINDOWS_CENTER_Y);

void renderMoreIcon1()
{
    glColor4f(COLOUR_BLACK);
    MoreIcon.translate(-60, 380);
    MoreIcon.drawCircle(4, 0, 360);

    MoreIcon.translate(11, 0);
    MoreIcon.drawCircle(4, 0, 360);

    MoreIcon.translate(11, 0);
    MoreIcon.drawCircle(4, 0, 360);
}

void renderMoreIcon2()
{
    glColor4f(COLOUR_BLACK);
    MoreIcon.translate(915, 0);
    MoreIcon.drawCircle(4, 0, 360);

    MoreIcon.translate(11, 0);
    MoreIcon.drawCircle(4, 0, 360);

    MoreIcon.translate(11, 0);
    MoreIcon.drawCircle(4, 0, 360);
}

void renderMoreIcon3()
{
    glColor4f(COLOUR_BLACK);
    MoreIcon.translate(-505, -495);
    MoreIcon.drawCircle(4, 0, 360);

    MoreIcon.translate(11, 0);
    MoreIcon.drawCircle(4, 0, 360);

    MoreIcon.translate(11, 0);
    MoreIcon.drawCircle(4, 0, 360);
}

void renderMoreIcon4()
{
    glColor4f(COLOUR_BLACK);
    MoreIcon.translate(455, 0);
    MoreIcon.drawCircle(4, 0, 360);

    MoreIcon.translate(11, 0);
    MoreIcon.drawCircle(4, 0, 360);

    MoreIcon.translate(11, 0);
    MoreIcon.drawCircle(4, 0, 360);
}

#pragma endregion More Icon