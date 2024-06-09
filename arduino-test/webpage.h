#include <avr/pgmspace.h>

const char webserver[] PROGMEM = R"=====(
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Flotify test values only</title>
</head>
<body>
    <h1>Rain Sensor</h1>
    <p>Rain Status: <span id="rainValue">0</span></p>

    <script>
      setInterval(function() {
        fetch('/rain').then(response => response.json()).then(data => {
          document.getElementById('rainValue').innerText = data.rainValue;
        });
      }, 1000);
    </script>
</body>
</html>
)=====";
