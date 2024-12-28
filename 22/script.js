// Select elements
const palette = document.getElementById('palette');
const generateBtn = document.getElementById('generateBtn');

// Generate random hex color
function getRandomColor() {
    return `#${Math.floor(Math.random() * 16777215).toString(16).padStart(6, '0')}`;
}

// Generate the color palette
function generatePalette() {
    const colorBoxes = document.querySelectorAll('.color-box');
    colorBoxes.forEach(box => {
        const isLocked = box.querySelector('.lock-btn').classList.contains('locked');
        if (!isLocked) {
            const newColor = getRandomColor();
            box.style.backgroundColor = newColor;
            box.querySelector('.hex-code').textContent = newColor;
        }
    });
}

// Copy color to clipboard
function copyToClipboard(hexCode) {
    navigator.clipboard.writeText(hexCode).then(() => {
        alert(`Copied ${hexCode} to clipboard!`);
    });
}

// Create the initial palette
function createPalette() {
    palette.innerHTML = ''; // Clear existing palette
    for (let i = 0; i < 5; i++) {
        const colorBox = document.createElement('div');
        colorBox.className = 'color-box';
        const hexCode = document.createElement('div');
        hexCode.className = 'hex-code';
        const lockBtn = document.createElement('button');
        lockBtn.className = 'lock-btn';
        lockBtn.textContent = '🔓';

        // Lock/unlock color
        lockBtn.addEventListener('click', () => {
            lockBtn.classList.toggle('locked');
            lockBtn.textContent = lockBtn.classList.contains('locked') ? '🔒' : '🔓';
        });

        // Copy color on click
        colorBox.addEventListener('click', (e) => {
            if (!e.target.classList.contains('lock-btn')) {
                copyToClipboard(hexCode.textContent);
            }
        });

        colorBox.appendChild(lockBtn);
        colorBox.appendChild(hexCode);
        palette.appendChild(colorBox);
    }
    generatePalette(); // Generate colors for the boxes
}

// Initial setup
createPalette();
generateBtn.addEventListener('click', generatePalette);
