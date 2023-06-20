const images = [


"images/random/image3.jpg",
"images/random/image4.jpg",
"images/random/image5.jpg",
"images/random/image6.jpg",
"images/random/image7.jpg",
"images/random/image8.jpg",
"images/random/image9.jpg",
"images/random/image10.jpg",
"images/random/image11.jpg", 
"images/random/image12.jpg",
"images/random/image13.jpg", 
"images/random/image14.jpg",
"images/random/image15.jpg", 
"images/random/image16.jpg",
"images/random/image17.jpg", 
"images/random/image18.jpg",
"images/random/image19.jpg", 
"images/random/image20.jpg",
"images/random/image21.jpg", 
"images/random/image22.jpg",
"images/random/image23.jpg", 
"images/random/image24.jpg",
"images/random/image25.jpg", 
"images/random/image26.jpg",
"images/random/image27.jpg", 
"images/random/image28.jpg",
"images/random/image29.jpg", 
"images/random/image30.jpg",
"images/random/image31.jpg",
"images/random/image32.jpg",
"images/random/image33.jpg",
"images/random/image34.jpg",
"images/random/image35.jpg",
"images/random/image36.jpg",
"images/random/image37.jpg",
"images/random/image38.jpg",
"images/random/image39.jpg",
"images/random/image40.jpg",
"images/random/image41.jpg",
"images/random/image42.jpg",
"images/random/image43.jpg",
"images/random/image44.jpg",
"images/random/image45.jpg",
"images/random/image46.jpg",
"images/random/image47.jpg",
"images/random/image48.jpg",
"images/random/image49.jpg",
"images/random/image50.jpg",
"images/random/image51.jpg",
"images/random/image52.jpg",
"images/random/image53.jpg",
"images/random/image54.jpg"

];

const imgEl = document.getElementById("image"); // assuming there's an img tag with id "image"
let count = 0;


function cycleImage() {
	let img = images[count];
	
	count++;

	if (count === images.length) {
		count = 0;
	}
	imgEl.src = img;
}
			    	
imgEl.addEventListener("click", cycleImage);
			