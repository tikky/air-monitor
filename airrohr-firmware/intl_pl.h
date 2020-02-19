/*
 *	airRohr firmware
 *	Copyright (C) 2016-2018  Code for Stuttgart a.o.
 *
 *  Polish translations
 *
 *	Texts should be as short as possible
 *	We only have 512 kB for the entire firmware
 */

const char INTL_LANG[] = "PL";
const char INTL_PM_SENSOR[] PROGMEM = "Sterio Air Monitor";
const char INTL_CONFIGURATION[] PROGMEM = "Konfiguracja";
const char INTL_WIFI_SETTINGS[] PROGMEM = "Ustawienia WiFi";
const char INTL_WIFI_NETWORKS[] PROGMEM = "Ładowanie sieci WiFi...";
const char INTL_LANGUAGE[] PROGMEM = "Język";
const char INTL_NO_NETWORKS[] PROGMEM =  "Nie znaleziono sieci WiFi";
const char INTL_NETWORKS_FOUND[] PROGMEM = "Znalezione sieci: ";
const char INTL_AB_HIER_NUR_ANDERN[] PROGMEM = "Ustawienia zaawansowane (tylko gdy wiesz co robisz)";
const char INTL_SAVE[] PROGMEM = "Zapisz";
const char INTL_SENSORS[] PROGMEM = "Sensory";
const char INTL_SDS011[] PROGMEM = "SDS011 ({pm})";
const char INTL_PMS[] PROGMEM = "Plantower PMS(1,3,5,6,7)003 ({pm})";
const char INTL_HPM[] PROGMEM = "Honeywell ({pm})";
const char INTL_PPD42NS[] PROGMEM = "PPD42NS ({pm})";
const char INTL_DHT22[] PROGMEM = "DHT22 ({t}, {h})";
const char INTL_HTU21D[] PROGMEM = "HTU21D ({t}, {h})";
const char INTL_BMP180[] PROGMEM = "BMP180 ({t}, {p})";
const char INTL_BMP280[] PROGMEM = "BMP280 ({t}, {p})";
const char INTL_BME280[] PROGMEM = "BME280 ({t}, {h}, {p})";
const char INTL_HECA[] PROGMEM = "HECA (SHT30) ({t}, {h})";
const char INTL_DS18B20[] PROGMEM = "DS18B20 ({t})";
const char INTL_NEO6M[] PROGMEM = "GPS (NEO 6M)";
const char INTL_BASICAUTH[] PROGMEM = "Autoryzacja";
const char INTL_FS_WIFI[] PROGMEM = "Czujnik WiFi";
const char INTL_FS_WIFI_DESCRIPTION[] PROGMEM = "Parametry WiFi w trybie konfiguracji czujnika";
const char INTL_FS_WIFI_NAME[] PROGMEM = "Nazwa sieci";
const char INTL_MORE_SETTINGS[] PROGMEM ="Więcej ustawień";
const char INTL_AUTO_UPDATE[] PROGMEM = "Aktualizuj firmware automatycznie";
const char INTL_USE_BETA[] PROGMEM = "Załaduj firmware beta";
const char INTL_DISPLAY[] PROGMEM = "OLED SSD1306";
const char INTL_SH1106[] PROGMEM = "OLED SH1106";
const char INTL_LCD1602_27[] PROGMEM = "LCD 1602 (I2C: 0x27)";
const char INTL_LCD1602_3F[] PROGMEM = "LCD 1602 (I2C: 0x3F)";
const char INTL_LCD2004_27[] PROGMEM = "LCD 2004 (I2C: 0x27)";
const char INTL_LCD2004_3F[] PROGMEM = "LCD 2004 (I2C: 0x3F)";
const char INTL_DEBUG_LEVEL[] PROGMEM = "Poziom&nbsp;debugowania";
const char INTL_MEASUREMENT_INTERVAL[] PROGMEM = "Czas między pomiarami (sek.)";
const char INTL_DURATION_ROUTER_MODE[] PROGMEM = "Czas trwania w trybie routera (sek.)";
const char INTL_MORE_APIS[] PROGMEM = "Kolejne API";
const char INTL_SEND_TO_OWN_API[] PROGMEM = "Wysyłaj dane do własnego API";
const char INTL_SERVER[] PROGMEM = "Adres serwera";
const char INTL_PATH[] PROGMEM = "Ścieżka";
const char INTL_PORT[] PROGMEM = "Port";
const char INTL_USER[] PROGMEM = "Nazwa użytkownika";
const char INTL_PASSWORD[] PROGMEM = "Hasło";
const char INTL_SEND_TO[] PROGMEM = "Wysyłaj dane do {v}";
const char INTL_READ_FROM[] PROGMEM = "Czytaj z {v}";
const char INTL_SENSOR_IS_REBOOTING[] PROGMEM = "Ponowne uruchamianie czujnika.";
const char INTL_RESTART_DEVICE[] PROGMEM = "Uruchom ponownie urządzenie";
const char INTL_DELETE_CONFIG[] PROGMEM = "Usuń zapisaną konfigurację (!)";
const char INTL_RESTART_SENSOR[] PROGMEM = "Uruchom ponownie czujnik";
const char INTL_HOME[] PROGMEM = "Strona startowa";
const char INTL_BACK_TO_HOME[] PROGMEM = "Powrót do strony startowej";
const char INTL_CURRENT_DATA[] PROGMEM = "Obecne wskazania";
const char INTL_ACTIVE_SENSORS_MAP[] PROGMEM = "Mapa aktywnych czujników (link zewnętrzny)";
const char INTL_CONFIGURATION_DELETE[] PROGMEM = "Usunięcie konfiguracji (!)";
const char INTL_CONFIGURATION_REALLY_DELETE[] PROGMEM = "Czy na pewno chcesz usunąć konfigurację?";
const char INTL_DELETE[] PROGMEM = "Usuń";
const char INTL_CANCEL[] PROGMEM = "Anuluj";
const char INTL_REALLY_RESTART_SENSOR[] PROGMEM = "Czy na pewno chcesz uruchomić czujnik ponownie?";
const char INTL_RESTART[] PROGMEM = "Uruchom ponownie";
const char INTL_SAVE_AND_RESTART[] PROGMEM = "Zapisz i zrestartuj";
const char INTL_FIRMWARE[] PROGMEM = "Wersja FW";
const char INTL_DEBUG_SETTING_TO[] PROGMEM = "Ustawiono poziom debugowania na ";
const char INTL_NONE[] PROGMEM = "wyłączony";
const char INTL_ERROR[] PROGMEM = "tylko błędy";
const char INTL_WARNING[] PROGMEM = "ostrzeżenia";
const char INTL_MIN_INFO[] PROGMEM = "min. info";
const char INTL_MED_INFO[] PROGMEM = "śr. info";
const char INTL_MAX_INFO[] PROGMEM = "maks. info";
const char INTL_CONFIG_DELETED[] PROGMEM = "Usunięto konfigurację";
const char INTL_CONFIG_CAN_NOT_BE_DELETED[] PROGMEM = "Konfiguracja nie może zostać usunięta";
const char INTL_CONFIG_NOT_FOUND[] PROGMEM = "Nie znaleziono konfiguracji";
const char INTL_TIME_TO_FIRST_MEASUREMENT[] = "Pozostało {v} sekund do pierwszego pomiaru.";
const char INTL_TIME_SINCE_LAST_MEASUREMENT[] = " sekund od ostatniego pomiaru.";
const char INTL_PARTICLES_PER_LITER[] PROGMEM = "cząsteczek/litr";
const char INTL_PARTICULATE_MATTER[] PROGMEM = "pył zawieszony";
const char INTL_TEMPERATURE[] PROGMEM = "temperatura";
const char INTL_HUMIDITY[] PROGMEM = "wilgotność";
const char INTL_PRESSURE[] PROGMEM = "ciśnienie";
const char INTL_LATITUDE[] PROGMEM = "Szerokość geograficzna";
const char INTL_LONGITUDE[] PROGMEM = "Długość geograficzna";
const char INTL_ALTITUDE[] PROGMEM = "Wysokość";
const char INTL_DATE[] PROGMEM = "Data";
const char INTL_TIME[] PROGMEM = "Czas";
const char INTL_SIGNAL_STRENGTH[] PROGMEM = "siła sygnału";
const char INTL_SIGNAL_QUALITY[] PROGMEM = "jakość sygnału";
const char INTL_NUMBER_OF_MEASUREMENTS[] PROGMEM = "Liczba pomiarów:";
const char INTL_SENSOR[] PROGMEM = "Czujnik";
const char INTL_PARAMETER[] PROGMEM = "Parametr";
const char INTL_VALUE[] PROGMEM = "Wartość";

const char LUFTDATEN_INFO_LOGO_SVG[] PROGMEM = "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"90\" height=\"90\" viewBox=\"0 0 23.812 23.812\"><defs><clipPath id=\"A\"><path d=\"M319.472 608.734c0-44.5 36.082-80.592 80.592-80.592h0c44.5 0 80.6 36.082 80.6 80.592h0c0 44.5-36.082 80.6-80.6 80.6h0c-44.5 0-80.592-36.082-80.592-80.6\"/></clipPath></defs><path d=\"M1.23 11.245c0 5.674 4.598 10.272 10.272 10.272s10.272-4.598 10.272-10.272-4.594-10.24-10.27-10.24S1.23 5.57 1.23 11.245\" fill=\"#fff\"/><g clip-path=\"url(#A)\" transform=\"matrix(.127472 0 0 -.127472 -39.494862 88.841015)\"><path d=\"M399.484 597.986h9.604v26.225l-9.604 3.15zm-33.5-14.154h14.907v32.252l-14.914-4.856zm62-9.548h9.74v23.163l-9.74 3.404zm45.527-12.806h-21.547v30.992l-9.74 3.405v-26.1h-18.74v37.407l14.24-4.976v53.74h-38.22v-23.86l14.104-4.625v-33.984h-18.604v35.35l-29.025 9.517.005-22.393 19.416 6.322v-42.95h-23.905l-.01 30.43-14.904-4.853v-43.43h-22.1v4.5h17.603v42.2l19.403 6.318-.008 30.07 33.527-10.994v26.885h47.22v-59.814l14.24-4.977V565.98h17.047z\" fill=\"#00b2ff\"/></g></svg>";
