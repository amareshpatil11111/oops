function convertTemp() {
  let temp = parseFloat(document.getElementById("temperature").value);
  let unit = document.getElementById("unit").value;
  let result = 0;

  if (isNaN(temp)) {
    document.getElementById("result").innerText = "Please enter a valid number.";
    return;
  }

  if (unit === "CtoF") {
    result = (temp * 9/5) + 32;
    document.getElementById("result").innerText = `${temp}°C = ${result.toFixed(2)}°F`;
  } else {
    result = (temp - 32) * 5/9;
    document.getElementById("result").innerText = `${temp}°F = ${result.toFixed(2)}°C`;
  }
}