# Image Enhancement Pipeline


## Setup

- Create a folder named `datasets` having sub folders containing the datasets.
- Create a folder names `results` having sub folder named `datasets`. This folder should include empty sub folders named after datasets used.

The directory should look like this:

```
source/
.gitignore
CMakeLists.txt
Dockerfile
main.cpp
README.md
run.sh
datasets/
|___DICM/
|___DS/
|___MEF/
|___NPE/
|___NPE-ex1/
|___NPE-ex2/
|___NPE-ex3/
|___VV/
results/
|___datasets
    |___DICM/
    |___DS/
    |___MEF/
    |___NPE/
    |___NPE-ex1/
    |___NPE-ex2/
    |___NPE-ex3/
    |___VV/
```

## Run

- Simply run the command `bash run.sh`


## References

Implementation of "A novel joint histogram equalization based image contrast enhancement"

File:
    aragwal.h

Code Obtained From:
		[https://github.com/dengyueyun666/Image-Contrast-Enhancement/blob/master/src/JHE.cpp](https://github.com/dengyueyun666/Image-Contrast-Enhancement/blob/master/src/JHE.cpp)

Reference:
```
Agrawal, Sanjay & Panda, Rutuparna & Mishro, P.K. & Abraham, Ajith. (2019). 
A novel joint histogram equalization based image contrast enhancement. 
Journal of King Saud University - Computer and Information Sciences. 10.1016/j.jksuci.2019.05.010. 
```

Implementation of "Adaptive image enhancement method for correcting low-illumination images"

File:
    aie.h

Code Obtained From:
    [https://github.com/dengyueyun666/Image-Contrast-Enhancement/blob/master/src/adaptiveImageEnhancement.cpp](https://github.com/dengyueyun666/Image-Contrast-Enhancement/blob/master/src/adaptiveImageEnhancement.cpp)
    
Reference:
```
Wencheng Wang, Zhenxue Chen, Xiaohui Yuan, Xiaojin Wu,
Adaptive image enhancement method for correcting low-illumination images,
Information Sciences,
Volume 496,
2019,
Pages 25-41,
ISSN 0020-0255,
https://doi.org/10.1016/j.ins.2019.05.015.
(https://www.sciencedirect.com/science/article/pii/S0020025519304104)
```
