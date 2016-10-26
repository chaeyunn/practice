### Deep Learning for Everybody day1

========

### https://hunkim.github.io/ml/

#### install guide 

* https://www.tensorflow.org/versions/r0.11/get_started/os_setup.html#pip-installation

```bash
# install guide for macos
# python3, macox with CPU, virtualenv

# install pip and virtualenv
# Mac OS X
$ sudo easy_install pip
$ sudo easy_install --upgrade six
$ sudo pip install --upgrade virtualenv

# create virtual env directory
$ virtualenv --system-site-packages ~/tensorflow

# activate environment
# actually, my shell is zsh but it seems to work well
$ source ~/tensorflow/bin/activate  # If using bash

# install tensorflow
# Mac OS X, CPU only, Python 3.4 or 3.5:
# Python 3
(tensorflow)$ export TF_BINARY_URL=https://storage.googleapis.com/tensorflow/mac/cpu/tensorflow-0.11.0rc1-py3-none-any.whl
(tensorflow)$ pip3 install --upgrade $TF_BINARY_URL
```

Introduction이고 큰 내용은 없다. 


#### Lecture 2

* 머신러닝이란 명확한 프로그래밍 없이 학습을 통해 컴퓨터가 일을 할 수 있게 하는 능력을 갖게 하는 학문의 분야 

* Supervised learning: 답(label)이 정해져 있는 데이터 셋 (트레이닝 셋)을 통해 학습
* ex) 개 고양이 이미지 분류 - 미리 레이블을 준 이미지를 통해 학습

* Unsupervised learning: 레이블을 주지 않은 상태에서 학습함 (How?)

##### Supervised Learning 

* 대부분의 문제는 여기에 해당함 
* 답 = 레이블 = label = Y 
* 데이터 = feature = X 
* 트레이닝 데이터를 통한 학습이 반드시 필요 
* 학습을 통해 X(test)의 값을 추정할 수 있다. 
* 알파고의 경우 기존의 기보가 트레이닝 셋이라고 할 수 있음 

#### Supervised Learning 의 종류 
* Regression: 다양한 범위의 값을 가짐 (ex: 0 ~ 100) 
* binary classfication: T / F 
* multi-label classification: 몇 가지 값을 가짐 (A, B, C, F)