let randomNumber =Math.floor(Math.random() *100)+1;
let attempts = 0;

function checkGuess(){
    const userGuess = parseInt(document.getElementById('guessInput').valuve);
    const message =document.getElementById('message');
    const attemptsText =document.getElementById('attempts');


if(!userGuess||userGuess< 1 || userGuess> 100){
    message.textContent = "please enter a number between 1 and 100";
    return;
}

attempts++;
if(userGuess === randomNumber){
    message.textContent = ' correct! the number was ${randomNumber}.';
    message.style.color = "green";
}else if (userGuess < randomNumber){
    message.textContent ="Too low! Try again.";
    message.style.color = "orange";

}else{
    message.textContent = "Too high! Try again.";
    message.style.color = "orange";
}

attemptsText.textContent = 'Attempts: ${attempts}';
}

