
import numpy as np
import time
import torch
import torch.nn as nn
import torch.nn.functional as F
import torch.optim as optim

import torchvision
from torch.utils.data.sampler import SubsetRandomSampler
import torchvision.transforms as transforms

import matplotlib.pyplot as plt
import pandas as pd
import torch.utils.data as data



class AlexNet(nn.Module):
    def __init__(self):
        super(AlexNet, self).__init__()
        self.name = "alexnet"
        self.conv1 = nn.Conv2d(3, 96, 11, stride=4)
        self.pool = nn.MaxPool2d(3, 2)
        self.conv2 = nn.Conv2d(96, 256, 5, padding=2)
        self.conv3 = nn.Conv2d(256, 384, 3, padding=1)
        self.conv4 = nn.Conv2d(384, 384, 3, padding=1)
        self.conv5 = nn.Conv2d(384, 256, 3, padding=1)
        self.fc1 = nn.Linear(9216, 4096)
        self.fc2 = nn.Linear(4096, 1000)
        self.fc3 = nn.Linear(1000, 3)
    
    def forward(self, x):
        # print(x.size())
        x = self.pool(F.relu(self.conv1(x)))
        # print(x.size())
        x = self.pool(F.relu(self.conv2(x)))
        # print(x.size())
        x = F.relu(self.conv3(x))
        # print(x.size())
        x = F.relu(self.conv4(x))
        # print(x.size())
        x = self.pool(F.relu(self.conv5(x)))
        # print(x.size())
        x = x.view(-1, 9216)
        # print(x.size())
        x = F.relu(self.fc1(x))
        # print(x.size())
        x = F.relu(self.fc2(x))
        # print(x.size())
        x = self.fc3(x)
        # print(x.size())
        return x
    
# def small_get_accuracy(model):
#     data_loader = small_training_loader

#     correct = 0
#     total = 0
#     for i, data in enumerate(data_loader, 0):
#         imgs, labels = data

#         #############################################
#         #To Enable GPU Usage
#         use_cuda = True
#         if use_cuda and torch.cuda.is_available():
#           imgs = imgs.cuda()
#           labels = labels.cuda()
#         #############################################

#         output = model(imgs)
#         #select index with maximum prediction score
#         pred = output.max(1, keepdim=True)[1]
#         print(output, labels)
#         correct += pred.eq(labels.view_as(pred)).sum().item()
#         total += imgs.shape[0]

#     return correct / total * 100
        
# def small_train(model, batch_size=1, num_epochs=10, learning_rate=0.01, momentum=0.9):
#     train_loader = small_training_loader
#     criterion = nn.CrossEntropyLoss()
#     optimizer = optim.SGD(model.parameters(), lr=learning_rate, momentum=momentum)

#     iters, losses, train_acc, val_acc = [], [], [], []
#     current_train_accuracy = 0
#     # current_validation_accuracy = 0

#     # training
#     n = 0 # the number of iterations
#     for epoch in range(num_epochs):
#         print(epoch)
#         for i, data in enumerate(train_loader, 0):
#             #############################################
#             #To Enable GPU Usage
#             use_cuda = True
#             if use_cuda and torch.cuda.is_available():
#               imgs = imgs.cuda()
#               labels = labels.cuda()
#             #############################################

#             imgs, labels = data
#             out = model(imgs)             # forward pass
#             loss = criterion(out, labels) # compute the total loss
#             loss.backward()               # backward pass (compute parameter updates)
#             optimizer.step()              # make the updates for each parameter
#             optimizer.zero_grad()         # a clean up step for PyTorch

#             # save the current training information
#             iters.append(n)
#             losses.append(float(loss)/batch_size)    # compute *average* loss
#             current_train_accuracy = small_get_accuracy(model)
#             print(current_train_accuracy)
#             train_acc.append(current_train_accuracy) # compute training accuracy
            
#             n += 1


#     # plotting
#     # plt.title("Training Curve")
#     # plt.plot(iters, losses, label="Train")
#     # plt.xlabel("Iterations")
#     # plt.ylabel("Loss")
#     # plt.show()

#     # plt.title("Training Curve")
#     # plt.plot(iters, train_acc, label="Train")
#     # # plt.plot(iters, val_acc, label="Validation")
#     # plt.xlabel("Iterations")
#     # plt.ylabel("Training Accuracy")
#     # plt.legend(loc='best')
#     # plt.show()

#     print("Final Training Accuracy: {}".format(train_acc[-1]))
#     # print("Final Validation Accuracy: {}".format(val_acc[-1]))

def get_accuracy(model, dataset):
    if dataset == "training":
        data = training_loader
    elif dataset == "validation":
        data = validation_loader
    elif dataset == "testing":
        data = testing_loader

    correct = 0
    total = 0
    for imgs, labels in data:


        #############################################
        #To Enable GPU Usage
        if torch.cuda.is_available():
            print("Using GPU")
            imgs = imgs.cuda()
            labels = labels.cuda()
        #############################################


        output = model(imgs)

        #select index with maximum prediction score
        pred = output.max(1, keepdim=True)[1]
        correct += pred.eq(labels.view_as(pred)).sum().item()
        total += imgs.shape[0]
    return correct / total * 100


def train(model, batch_size=1, num_epochs=10, learning_rate=0.01, momentum=0.9):
    train_loader = training_loader
    criterion = nn.CrossEntropyLoss()
    optimizer = optim.SGD(model.parameters(), lr=learning_rate, momentum=momentum)

    iters, losses, train_acc, val_acc = [], [], [], []

    # training
    n = 0 # the number of iterations
    for epoch in range(num_epochs):
        print(epoch)
        for imgs, labels in iter(train_loader):
            #############################################
            #To Enable GPU Usage
            if torch.cuda.is_available():
                print("Using GPU")
                imgs = imgs.cuda()
                labels = labels.cuda()
            #############################################


            out = model(imgs)             # forward pass
            loss = criterion(out, labels) # compute the total loss
            loss.backward()               # backward pass (compute parameter updates)
            optimizer.step()              # make the updates for each parameter
            optimizer.zero_grad()         # a clean up step for PyTorch

            # save the current training information
            iters.append(n)
            losses.append(float(loss)/batch_size)             # compute *average* loss
            
            current_train_accuracy = get_accuracy(model, "training")
            print("Training Accuracy", current_train_accuracy)
            train_acc.append(current_train_accuracy) # compute training accuracy
            
            current_validation_accuracy = get_accuracy(model, "validation")
            print("Validation accuracy", current_validation_accuracy)
            val_acc.append(current_validation_accuracy)  # compute validation accuracy
            
            n += 1

    # plotting
    # plt.title("Training Curve")
    # plt.plot(iters, losses, label="Train")
    # plt.xlabel("Iterations")
    # plt.ylabel("Loss")
    # plt.show()

    # plt.title("Training Curve")
    # plt.plot(iters, train_acc, label="Train")
    # plt.plot(iters, val_acc, label="Validation")
    # plt.xlabel("Iterations")
    # plt.ylabel("Training Accuracy")
    # plt.legend(loc='best')
    # plt.show()
    final_testing_accuracy = get_accuracy(model, "testing")

    print("Final Training Accuracy: {}".format(train_acc[-1]))
    print("Final Validation Accuracy: {}".format(val_acc[-1]))
    print("Final Testing Accuracy", final_testing_accuracy)

    
if __name__ == '__main__':
    print("Program Started")
    root = "/home/r1/r1_ws/src/camera/faces/cleaned_images"
    transform = transforms.Compose(
            [transforms.ToTensor()])
    large_dataset = torchvision.datasets.ImageFolder(root, transform=transform)

    training_size = int(0.7 * len(large_dataset))
    validation_size = int(0.2 * len(large_dataset))
    testing_size = len(large_dataset) - (training_size + validation_size)
    
    print(training_size, validation_size, testing_size)

    training_data, validation_data, testing_data = data.random_split(large_dataset, [training_size, validation_size, testing_size])

    training_loader = torch.utils.data.DataLoader(training_data, batch_size=64, shuffle=True)
    validation_loader = torch.utils.data.DataLoader(validation_data, batch_size=64, shuffle=True)
    testing_loader = torch.utils.data.DataLoader(testing_data, batch_size=64, shuffle=True)
    
    # root = "/home/r1/r1_ws/src/camera/faces/small_dataset/cleaned_images"
    # transform = transforms.Compose(
    #         [transforms.ToTensor()])

    # small_dataset = torchvision.datasets.ImageFolder(root, transform=transform)

    # training_size = len(small_dataset)
    # print(training_size)

    # small_training_loader = torch.utils.data.DataLoader(small_dataset, batch_size=32, shuffle=True)

    print("Done loading")
    
    model = AlexNet()
    print("Model initialized")
    if torch.cuda.is_available():
        model.cuda()
    
    train(model, num_epochs=5, batch_size=32, learning_rate=0.01)