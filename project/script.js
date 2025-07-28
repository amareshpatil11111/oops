
function saveData() {
    const name = document.getElementById("name").value.trim();
    const age = document.getElementById("age").value.trim();

    if (name === "" || age === "") {
        alert("Please fill in all fields!");
        return;
    }

    const user = { name, age };
    const jsonData = JSON.stringify(user); 
    localStorage.setItem("userProfile", jsonData); 

    alert("Data saved successfully!");
    displayData(user); 
}

function loadData() {
    const data = localStorage.getItem("userProfile");

    if (!data) {
        document.getElementById("output").innerHTML = "<p>No data found.</p>";
        return;
    }
    const user = JSON.parse(data);
    displayData(user);
}
 
function ClearData(){
    localStorage.removeItem("userProfile");
    document.getElementById("output").innerHTML = "<P>Data cleared</P>";
    document.getElementById("name").value = "";
    document.getElementById("age").value = ""; 

}

function displayData(user){
    document.getElementById("output").innerHTML = `
    <P><strong>Name:</strong> ${user.name}</P>
      <P><strong>Age:</strong> ${user.age}</P>
      `;

}