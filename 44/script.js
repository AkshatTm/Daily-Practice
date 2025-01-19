const quizData = [
  {
      question: "What is the correct syntax to print a message in JavaScript?",
      options: ["console.log('Hello')", "echo 'Hello'", "print('Hello')", "output('Hello')"],
      answer: 0
  },
  {
      question: "Which data type is NOT supported in JavaScript?",
      options: ["String", "Boolean", "Integer", "Undefined"],
      answer: 2
  },
  {
      question: "What keyword is used to declare a variable in JavaScript?",
      options: ["var", "let", "const", "All of the above"],
      answer: 3
  }
];

const quiz = document.getElementById("quiz");
const questionEl = document.getElementById("question");
const optionsEl = document.getElementById("options");
const nextBtn = document.getElementById("next-btn");
const timerEl = document.getElementById("time");
const progressEl = document.getElementById("progress");
const scoreContainer = document.getElementById("score-container");
const scoreEl = document.getElementById("score");

let currentQuestion = 0;
let score = 0;
let timeLeft = 10;
let timer;

function loadQuestion() {
  const questionData = quizData[currentQuestion];
  questionEl.textContent = questionData.question;
  optionsEl.innerHTML = "";
  questionData.options.forEach((option, index) => {
      const li = document.createElement("li");
      li.textContent = option;
      li.onclick = () => checkAnswer(index);
      optionsEl.appendChild(li);
  });
  progressEl.innerHTML = `Question: <span id="current-question">${currentQuestion + 1}</span>/<span id="total-questions">${quizData.length}</span>`;
  startTimer();
}

function checkAnswer(selectedIndex) {
  const questionData = quizData[currentQuestion];
  if (selectedIndex === questionData.answer) {
      score++;
      optionsEl.children[selectedIndex].classList.add("correct");
  } else {
      optionsEl.children[selectedIndex].classList.add("wrong");
  }
  Array.from(optionsEl.children).forEach((li, index) => {
      if (index === questionData.answer) li.classList.add("correct");
      li.onclick = null;
  });
  clearInterval(timer);
  nextBtn.disabled = false;
}

function startTimer() {
  clearInterval(timer);
  timeLeft = 10;
  timerEl.textContent = timeLeft;
  timer = setInterval(() => {
      timeLeft--;
      timerEl.textContent = timeLeft;
      if (timeLeft <= 0) {
          clearInterval(timer);
          checkAnswer(-1); // No answer selected
      }
  }, 1000);
}

function nextQuestion() {
  currentQuestion++;
  if (currentQuestion < quizData.length) {
      loadQuestion();
      nextBtn.disabled = true;
  } else {
      showScore();
  }
}

function showScore() {
  quiz.classList.add("hidden");
  scoreContainer.classList.remove("hidden");
  scoreEl.textContent = `You scored ${score} out of ${quizData.length}`;
}

function restartQuiz() {
  currentQuestion = 0;
  score = 0;
  quiz.classList.remove("hidden");
  scoreContainer.classList.add("hidden");
  loadQuestion();
}

nextBtn.onclick = nextQuestion;

loadQuestion();
