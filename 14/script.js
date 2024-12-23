document.getElementById('addTaskBtn').addEventListener('click', () => {
    const taskInput = document.getElementById('taskInput');
    const prioritySelect = document.getElementById('prioritySelect');
    const taskList = document.getElementById('taskList');
  
    const taskText = taskInput.value.trim();
    const priority = prioritySelect.value;
  
    if (!taskText) {
      alert('Please enter a task.');
      return;
    }
  
    const listItem = document.createElement('li');
    listItem.classList.add(priority);
  
    listItem.innerHTML = `
      <span>${taskText}</span>
      <button class="delete-btn">Delete</button>
    `;
  
    listItem.querySelector('.delete-btn').addEventListener('click', () => {
      listItem.remove();
    });
  
    taskList.appendChild(listItem);
  
    taskInput.value = '';
  });  