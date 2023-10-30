# Morphology
OpenCV morphological image processing is a procedure for modifying the geometric structure in the image. In morphism, we find the shape and size or structure of an object. we use morphological operations in computer vision and image processing in the following ways:
1. Removing Noise
2. Identify intensity bumps or holes in the picture.
3. Isolation of individual elements and joining disparate elements in image.
Normally, morphological operations are done after convolving an image to a specific kernel or spatial filter. In a morphological operation, each image pixel is generated from the value of other pixels in its neighborhood.

Different type of operations
Dilation: Dilation adds pixels on the object boundaries.
Erosion: Erosion removes pixels on object boundaries.
Open: Erosion followed by Dilation using the same structuring element for both operations.
Close: Dilation followed by Erosion using the same structuring element for both operations.

Erosion and Dilation

![image](https://github.com/chi-an1997/Morphology/assets/96866028/e3f777d9-8aa9-45a7-9dee-e8be1d159b6c)


Opening

![image](https://github.com/chi-an1997/Morphology/assets/96866028/8457587c-ff43-41cb-87e1-6c175caf57be)

Closing

![image](https://github.com/chi-an1997/Morphology/assets/96866028/c9b07fe1-bab6-4eb4-88cc-4693fd46d22a)
