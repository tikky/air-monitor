/*
 *	airRohr firmware
 *	Copyright (C) 2016-2018  Code for Stuttgart a.o.
 *
 *  Swedish translations
 *
 *	Texts should be as short as possible
 *	We only have 512 kB for the entire firmware
 */

const char INTL_LANG[] = "SE";
const char INTL_PM_SENSOR[] PROGMEM = "Partikelsensor";
const char INTL_CONFIGURATION[] PROGMEM = "Inställningar";
const char INTL_WIFI_SETTINGS[] PROGMEM = "WLAN konfiguration";
const char INTL_WIFI_NETWORKS[] PROGMEM = "Laddar trådlösa nätverk...";
const char INTL_LANGUAGE[] PROGMEM = "Språk";
const char INTL_NO_NETWORKS[] PROGMEM =  "Inga nätverk hittades";
const char INTL_NETWORKS_FOUND[] PROGMEM = "Nätverk hittades: ";
const char INTL_AB_HIER_NUR_ANDERN[] PROGMEM = "Ändra nedanför enbart om du verkligen vet vad du gör";
const char INTL_SAVE[] PROGMEM = "Spara";
const char INTL_SENSORS[] PROGMEM = "Sensorer";
const char INTL_SDS011[] PROGMEM = "SDS011 ({pm})";
const char INTL_PMS[] PROGMEM = "Plantower PMS(1,3,5,6,7)003 ({pm})";
const char INTL_HPM[] PROGMEM = "Honeywell PM sensor";
const char INTL_PPD42NS[] PROGMEM = "PPD42NS";
const char INTL_DHT22[] PROGMEM = "DHT22 ({t}, {h})";
const char INTL_HTU21D[] PROGMEM = "HTU21D ({t}, {h})";
const char INTL_BMP180[] PROGMEM = "BMP180 ({t}, {p})";
const char INTL_BMP280[] PROGMEM = "BMP280 ({t}, {p})";
const char INTL_BME280[] PROGMEM = "BME280 ({t}, {h}, {p})";
const char INTL_HECA[] PROGMEM = "HECA (SHT30) ({t}, {h})";
const char INTL_DS18B20[] PROGMEM = "DS18B20 ({t})";
const char INTL_NEO6M[] PROGMEM = "GPS (NEO 6M)";
const char INTL_BASICAUTH[] PROGMEM = "Aktivera BasicAuth";
const char INTL_FS_WIFI[] PROGMEM = "";
const char INTL_FS_WIFI_DESCRIPTION[] PROGMEM = "";
const char INTL_FS_WIFI_NAME[] PROGMEM = "Sensorns WLAN namn";
const char INTL_MORE_SETTINGS[] PROGMEM ="Avancerade inställningar";
const char INTL_AUTO_UPDATE[] PROGMEM = "Automatisk uppdatering";
const char INTL_USE_BETA[] PROGMEM = "Använd beta-versioner";
const char INTL_DISPLAY[] PROGMEM = "OLED SSD1306";
const char INTL_SH1106[] PROGMEM = "OLED SH1106";
const char INTL_LCD1602_27[] PROGMEM = "LCD 1602 (I2C: 0x27)";
const char INTL_LCD1602_3F[] PROGMEM = "LCD 1602 (I2C: 0x3F)";
const char INTL_LCD2004_27[] PROGMEM = "LCD 2004 (I2C: 0x27)";
const char INTL_LCD2004_3F[] PROGMEM = "LCD 2004 (I2C: 0x3F)";
const char INTL_DEBUG_LEVEL[] PROGMEM = "Debug&nbsp;level";
const char INTL_MEASUREMENT_INTERVAL[] PROGMEM = "Mätintervall";
const char INTL_DURATION_ROUTER_MODE[] PROGMEM = "Permanent&nbsp;router-modus";
const char INTL_MORE_APIS[] PROGMEM = "Ytterligare APIer";
const char INTL_SEND_TO_OWN_API[] PROGMEM = "Skicka till eget API";
const char INTL_SERVER[] PROGMEM = "Server";
const char INTL_PATH[] PROGMEM = "Sökväg (path)";
const char INTL_PORT[] PROGMEM = "Port";
const char INTL_USER[] PROGMEM = "Användarnamn";
const char INTL_PASSWORD[] PROGMEM = "Lösenord";
const char INTL_SEND_TO[] PROGMEM = "Skicka till {v}";
const char INTL_READ_FROM[] PROGMEM = "Hämta {v}";
const char INTL_SENSOR_IS_REBOOTING[] PROGMEM = "Sensor startas om.";
const char INTL_RESTART_DEVICE[] PROGMEM = "Starta om enhet";
const char INTL_DELETE_CONFIG[] PROGMEM = "Ta bort Config.json";
const char INTL_RESTART_SENSOR[] PROGMEM = "Starta om sensor";
const char INTL_HOME[] PROGMEM = "Översikt";
const char INTL_BACK_TO_HOME[] PROGMEM = "Tillbaka till översikten";
const char INTL_CURRENT_DATA[] PROGMEM = "Aktuella mätvärden";
const char INTL_ACTIVE_SENSORS_MAP[] PROGMEM = "Karta över aktiva sensorer (extern länk)";
const char INTL_CONFIGURATION_DELETE[] PROGMEM = "Ta bort konfiguration";
const char INTL_CONFIGURATION_REALLY_DELETE[] PROGMEM = "Ska konfigurationen tas bort?";
const char INTL_DELETE[] PROGMEM = "Ta bort";
const char INTL_CANCEL[] PROGMEM = "Avbryt";
const char INTL_REALLY_RESTART_SENSOR[] PROGMEM = "Config.json kunde inte hittas";
const char INTL_RESTART[] PROGMEM = "Starta om";
const char INTL_SAVE_AND_RESTART[] PROGMEM = "Spara och starta om";
const char INTL_FIRMWARE[] PROGMEM = "Firmware";
const char INTL_DEBUG_SETTING_TO[] PROGMEM = "Ställa in debug-läge";
const char INTL_NONE[] PROGMEM = "none";
const char INTL_ERROR[] PROGMEM = "error";
const char INTL_WARNING[] PROGMEM = "warning";
const char INTL_MIN_INFO[] PROGMEM = "min. info";
const char INTL_MED_INFO[] PROGMEM = "med. info";
const char INTL_MAX_INFO[] PROGMEM = "max. info";
const char INTL_CONFIG_DELETED[] PROGMEM = "Config.json borttagen";
const char INTL_CONFIG_CAN_NOT_BE_DELETED[] PROGMEM = "Config.json kunde inte tas bort";
const char INTL_CONFIG_NOT_FOUND[] PROGMEM = "Config.json kunde inte hittas";
const char INTL_TIME_TO_FIRST_MEASUREMENT[] PROGMEM = "Det är {v} sekunder kvar till första mätningen.";
const char INTL_TIME_SINCE_LAST_MEASUREMENT[] PROGMEM = " sekunder sedan den senaste mätningen.";
const char INTL_PARTICLES_PER_LITER[] PROGMEM = "Partiklar/liter";
const char INTL_PARTICULATE_MATTER[] PROGMEM = "partikelsensor";
const char INTL_TEMPERATURE[] PROGMEM = "Temperatur";
const char INTL_HUMIDITY[] PROGMEM = "rel. fuktighet";
const char INTL_PRESSURE[] PROGMEM = "Lufttryck";
const char INTL_LATITUDE[] PROGMEM = "Latitud";
const char INTL_LONGITUDE[] PROGMEM = "Longitud";
const char INTL_ALTITUDE[] PROGMEM = "Altitud";
const char INTL_DATE[] PROGMEM = "Datum";
const char INTL_TIME[] PROGMEM = "Tid";
const char INTL_SIGNAL_STRENGTH[] PROGMEM = "Signal";
const char INTL_SIGNAL_QUALITY[] PROGMEM = "Kvalitet";
const char INTL_NUMBER_OF_MEASUREMENTS[] PROGMEM = "";
const char INTL_SENSOR[] PROGMEM = "Sensor";
const char INTL_PARAMETER[] PROGMEM = "Parameter";
const char INTL_VALUE[] PROGMEM = "Värde";

const char LUFTDATEN_INFO_LOGO_SVG[] PROGMEM = "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"120px\" height=\"90px\" version=\"1.0\" style=\"shape-rendering:geometricPrecision; text-rendering:geometricPrecision; image-rendering:optimizeQuality; fill-rule:evenodd; clip-rule:evenodd\" viewBox=\"0 0 120 90\" xmlns:xlink=\"http://www.w3.org/1999/xlink\"><g id=\"NAM Logo\"><path fill=\"#fff\" d=\"M50 27c0,1 -1,2 -2,2 -1,0 -2,-1 -2,-2 0,-8 6,-14 14,-14 7,0 13,6 13,14 0,7 -6,13 -13,13l-32 0c-12,0 -21,10 -21,21 0,14 13,23 26,20 2,-1 3,-1 5,-2 1,-1 2,0 3,1 1,1 0,2 -1,3 -10,6 -22,4 -30,-4 -10,-10 -10,-26 0,-36 4,-4 11,-7 18,-7l32 0c8,0 12,-10 6,-16 -6,-6 -16,-1 -16,7zm5 52c0,0 -1,0 -1,0l0 0 -1 -2 -3 0c0,1 0,2 0,2 -1,0 -1,0 -2,0 0,0 0,0 0,0l3 -8c0,0 0,0 0,0l0 0c1,0 2,0 2,0l3 8c0,0 0,0 -1,0l0 0zm6 -13c0,0 0,-8 0,-10 0,-2 1,-2 1,-2l6 0 0 2 -4 0 0 3 4 0 0 2 -4 0 0 3 4 0 0 2 -7 0zm11 0l0 -10 -4 0c0,0 0,-2 2,-2l17 0 0 2 -3 0 0 10 -3 0 0 -10c-2,0 -4,0 -6,0l0 10 -3 0zm16 0c0,0 0,-8 0,-10 0,-2 3,-2 3,-2l0 12 -3 0zm22 -12c2,0 3,0 5,1 1,2 2,3 2,5 0,2 -1,4 -2,5 -2,1 -3,2 -5,2 -1,0 -3,-1 -4,-2 -2,-1 -2,-3 -2,-5 0,-2 0,-3 2,-5 1,-1 3,-1 4,-1zm0 2c-1,0 -1,0 -2,1 -1,1 -1,2 -1,3 0,2 0,3 1,3 0,1 1,2 2,2 1,0 2,-1 3,-2 0,-1 1,-2 1,-3 0,-1 -1,-2 -1,-3 -1,-1 -2,-1 -3,-1zm-62 10c0,0 0,-8 0,-10 0,-2 2,-2 2,-2l7 8c0,0 0,-4 0,-6 0,-2 2,-2 2,-2l0 12 -2 0 -7 -8 0 6 0 2 -2 0 0 0zm55 -6c0,0 -3,0 -3,0 -2,0 -2,2 -2,2l3 0c0,2 0,2 0,2 -1,0 -1,1 -2,1 -1,0 -2,-1 -3,-2 -1,0 -1,-2 -1,-3 0,-1 0,-2 1,-3 1,-1 2,-1 3,-1 1,0 2,0 3,0l1 -1c-2,-1 -3,-1 -4,-1 -1,0 -2,0 -3,0 -1,1 -2,1 -3,2 -1,1 -1,3 -1,4 0,1 0,2 0,3 1,1 1,2 2,2 2,1 3,2 5,2 1,0 3,-1 4,-1l0 -6 0 0zm-52 16l2 0 -1 -2 -1 2zm6 3c0,0 -1,0 -1,0l0 -8c0,0 1,0 1,0 1,0 1,0 1,0l0 8c0,0 0,0 -1,0zm4 -3l0 3c0,0 -1,0 -1,0 -1,0 -1,0 -1,0l0 -8c0,0 0,0 1,0 1,0 2,0 3,0 1,0 1,1 2,1l0 0c0,2 0,3 -2,4l2 3c1,0 0,0 0,0l0 0c-1,0 -1,0 -2,0l-2 -3 0 0zm0 -1c1,0 2,0 2,-1 0,-1 -1,-1 -2,-1l0 2zm11 1l3 -5c0,0 0,0 0,0l0 0c0,0 0,0 0,0l0 0 1 0c0,0 0,0 0,0l0 8c0,0 0,0 -1,0 0,0 0,0 0,0l0 -4 -2 3c0,0 -1,0 -2,0l-1 -3 0 4c0,0 -1,0 -2,0 0,0 0,0 0,0l0 -8c0,0 0,0 1,0 0,0 1,0 1,0l2 5zm13 -1c0,6 -8,6 -8,0 0,-6 8,-6 8,0zm-2 0c0,-1 0,-1 0,-2l0 0c-1,-1 -2,-1 -3,0l0 0c-2,1 -1,5 2,5 1,-1 1,-2 1,-3zm4 -4c0,0 0,0 0,0l4 5 0 -5c0,0 1,0 1,0 0,0 1,0 1,0l0 8c0,1 -1,0 -2,0l0 0 0 0 -3 -5 0 5c0,0 -1,0 -2,0 0,0 0,0 0,0l0 -8c0,0 0,0 1,0zm8 8c0,0 -1,0 -1,0l0 -8c0,0 1,0 1,0 1,0 1,0 1,0l0 8c0,0 0,0 -1,0zm8 -8c0,2 0,2 -3,2l0 6c0,0 0,0 -1,0 0,0 -1,0 -1,0l0 -6c-2,0 -2,0 -2,-2 0,0 0,0 1,0l5 0c1,0 1,0 1,0zm7 4c0,6 -8,6 -8,0 0,-6 8,-6 8,0zm-2 0c0,-1 0,-1 0,-2l0 0c-1,-1 -2,-1 -3,0l0 0c-2,1 -1,5 2,5 1,-1 1,-2 1,-3zm5 1l0 3c0,0 -1,0 -2,0 0,0 0,0 0,0l0 -8c0,0 0,0 0,0 1,0 3,0 4,0 2,1 2,4 0,5l2 3c1,0 0,0 0,0l0 0c-1,0 -1,0 -2,0l-2 -3 0 0zm0 -1c1,0 2,0 2,-1 0,-1 -1,-1 -2,-1l0 2zm-85 -18c-3,0 -6,2 -7,4 1,2 4,4 7,4 3,0 5,-2 7,-4 -2,-2 -4,-4 -7,-4zm0 2c1,0 2,1 2,2 0,1 -1,2 -2,2 -2,0 -3,-1 -3,-2 0,-1 1,-2 3,-2zm22 -48c-1,0 -2,0 -3,-1 0,-1 0,-2 1,-3 9,-5 20,-4 28,4 9,8 9,23 0,32 -4,4 -10,7 -16,7l-32 0c-7,0 -12,5 -12,11 0,6 5,11 12,11 7,0 13,-7 11,-14 -1,-1 0,-2 1,-3 2,0 3,1 3,2 3,10 -5,20 -15,20 -9,0 -16,-7 -16,-16 0,-9 7,-16 16,-16l32 0c10,0 18,-8 18,-18 0,-12 -12,-21 -23,-18 -2,0 -3,1 -5,2z\"/></g></svg>";
