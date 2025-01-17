document.getElementById('generateBtn').addEventListener('click', () => {
    const wordCount = parseInt(document.getElementById('wordCount').value);
    const loremWords = [
        "lorem", "ipsum", "dolor", "sit", "amet", "consectetur", 
        "adipiscing", "elit", "sed", "do", "eiusmod", "tempor", 
        "incididunt", "ut", "labore", "et", "dolore", "magna", 
        "aliqua", "ut", "enim", "ad", "minim", "veniam", "quis", 
        "nostrud", "exercitation", "ullamco", "laboris", "nisi", 
        "ut", "aliquip", "ex", "ea", "commodo", "consequat"
    ];

    if (isNaN(wordCount) || wordCount <= 0) {
        document.getElementById('generatedText').textContent = 
            "Please enter a valid number greater than 0.";
        return;
    }

    let generatedText = [];
    for (let i = 0; i < wordCount; i++) {
        const randomIndex = Math.floor(Math.random() * loremWords.length);
        generatedText.push(loremWords[randomIndex]);
    }

    document.getElementById('generatedText').textContent = generatedText.join(' ') + '.';
});
