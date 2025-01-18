document.getElementById('add-bookmark').addEventListener('click', function() {
    const name = document.getElementById('bookmark-name').value;
    const url = document.getElementById('bookmark-url').value;
    const list = document.getElementById('bookmark-list');
  
    if (!name || !url) {
      alert('Please enter both name and URL');
      return;
    }
  
    const li = document.createElement('li');
    li.innerHTML = `
      <span><a href="${url}" target="_blank">${name}</a></span>
      <button class="delete">Delete</button>
    `;
  
    list.appendChild(li);
  
    // Clear inputs
    document.getElementById('bookmark-name').value = '';
    document.getElementById('bookmark-url').value = '';
  
    // Delete bookmark functionality
    li.querySelector('.delete').addEventListener('click', function() {
      list.removeChild(li);
    });
  });
  