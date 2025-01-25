document.addEventListener("DOMContentLoaded", () => {
  // Select elements
  const formSection = document.getElementById("form-section")
  const resumeSection = document.getElementById("resume-section")
  const generateButton = document.getElementById("generate-resume")
  const printButton = document.getElementById("print-resume")
  const editButton = document.getElementById("edit-details")

  // Resume preview elements
  const previewName = document.getElementById("preview-name")
  const previewContact = document.getElementById("preview-contact")
  const previewAddress = document.getElementById("preview-address")
  const previewSkills = document.getElementById("preview-skills")
  const previewEducation = document.getElementById("preview-education")
  const previewProjects = document.getElementById("preview-projects")
  const previewExperience = document.getElementById("preview-experience")
  const previewAchievements = document.getElementById("preview-achievements")

  // Validate input function
  function validateInput(input) {
    return input.trim() !== ""
  }

  // Event listener for generating resume
  generateButton.addEventListener("click", () => {
    // Get form elements
    const nameInput = document.getElementById("name")
    const emailInput = document.getElementById("email")
    const phoneInput = document.getElementById("phone")

    // Validate required fields
    if (!validateInput(nameInput.value) || !validateInput(emailInput.value) || !validateInput(phoneInput.value)) {
      alert("Please fill out all required fields marked with *")
      return
    }

    // Get form data
    const name = nameInput.value.trim()
    const email = emailInput.value.trim()
    const phone = phoneInput.value.trim()
    const address = document.getElementById("address").value.trim()
    const skills = document
      .getElementById("skills")
      .value.split(",")
      .map((skill) => skill.trim())
      .filter((skill) => skill !== "")
    const education = document.getElementById("education").value.trim()
    const projects = document.getElementById("projects").value.trim()
    const experience = document.getElementById("experience").value.trim()
    const achievements = document.getElementById("achievements").value.trim()

    // Populate the resume preview
    previewName.textContent = name
    previewContact.textContent = `${email} | ${phone}`
    previewAddress.textContent = address || "N/A"

    // Populate skills
    previewSkills.innerHTML = ""
    skills.forEach((skill) => {
      const li = document.createElement("li")
      li.textContent = skill
      previewSkills.appendChild(li)
    })

    // Populate other sections
    previewEducation.textContent = education || "No education details provided"
    previewProjects.textContent = projects || "No projects listed"
    previewExperience.textContent = experience || "No work experience provided"
    previewAchievements.textContent = achievements || "No achievements listed"

    // Toggle sections
    formSection.classList.add("hidden")
    resumeSection.classList.remove("hidden")
  })

  // Event listener for printing resume
  printButton.addEventListener("click", () => {
    window.print()
  })

  // Event listener for editing details
  editButton.addEventListener("click", () => {
    formSection.classList.remove("hidden")
    resumeSection.classList.add("hidden")
  })
})

