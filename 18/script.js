const startTimerButton = document.getElementById('start-timer');
const eventDateInput = document.getElementById('event-date');

const daysEl = document.getElementById('days');
const hoursEl = document.getElementById('hours');
const minutesEl = document.getElementById('minutes');
const secondsEl = document.getElementById('seconds');

let countdownInterval;

startTimerButton.addEventListener('click', () => {
  const eventDate = new Date(eventDateInput.value);
  if (isNaN(eventDate.getTime())) {
    alert('Please select a valid date and time!');
    return;
  }

  if (countdownInterval) {
    clearInterval(countdownInterval);
  }

  countdownInterval = setInterval(() => {
    const now = new Date();
    const diff = eventDate - now;

    if (diff <= 0) {
      clearInterval(countdownInterval);
      alert('The event time has passed!');
      return;
    }

    const days = Math.floor(diff / (1000 * 60 * 60 * 24));
    const hours = Math.floor((diff % (1000 * 60 * 60 * 24)) / (1000 * 60 * 60));
    const minutes = Math.floor((diff % (1000 * 60 * 60)) / (1000 * 60));
    const seconds = Math.floor((diff % (1000 * 60)) / 1000);

    daysEl.textContent = days;
    hoursEl.textContent = hours;
    minutesEl.textContent = minutes;
    secondsEl.textContent = seconds;
  }, 1000);
});
