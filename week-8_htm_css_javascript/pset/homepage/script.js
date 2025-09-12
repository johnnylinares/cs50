let button = document.getElementById("contact-button");

// Comprobamos si el botón existe en la página actual
if (button) {
    button.addEventListener("click", () => {
        button.style.backgroundColor = "green";
        setTimeout(() => {
            window.location.href = "https://wa.me/+584249706409";
        }, 1000);
    });
}