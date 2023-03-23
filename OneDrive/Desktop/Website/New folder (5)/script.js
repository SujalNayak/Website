let boxes = document.querySelectorAll(".innerbox");
// console.log(boxes);
for (let i = 0; i < boxes.length; i++) {
    // console.log(boxes[i]);
    // box = boxes[i];
    boxes[i].addEventListener("click", () => {
        boxes[i].style.backgroundColor = "yellow";
    });
}

let box = document.querySelector(".box");
box.addEventListener("click", ()=> {
    box.style.backgroundColor = "yellow";
});