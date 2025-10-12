# Simple "Hello world" Linux Kernel Module 

This is a beginner-friendly example of a Linux kernel module that prints a message when it is loaded and unloaded from the kernel. 

## Overview 
	
A **kernel module** is code that can be loaded into the Linux kernel at runtime. 
This project demonstrates how to build, load, and remove a simple kernel module.

when loaded, it prints: 
	
	Hello world! Module loaded...	 

when removed, it prints: 
	
	Moduled unloaded

## Requirements 
	
Make sure you have the necessary tools and headers installed: 
	
sudo apt update
sudo apt install build-essential 

Project Structure 
	
	hello_module/
	   |__ hello.c   # The Kernel module source code 
	   |__ Makefile  # Build instructions
	   |__ README.md # This File 


Building the module 	

	Run the following commands in the project directory 

	make 

If successful, will create a new file named: 
	
	hello.ko 
	
    This is the compiled kernel module 


Loading the Module 

	To insert(load) the module into the running kernel 
	
	sudo insmod hello.ko

    # check that it's loaded: 
		
	lsmod | grep hello 

    # View the kernel log to see the message 

	dmesg | tail 


Unloading the Module 

	To remove (unload) the module from the kernel: 
	
	sudo rmmod hello 

	check the log again: 

	dmesg | tail 


Notes 

	* you must use sudo when inserting or removing kernel modules. 
	* kernel messages can be viewed with dmesg or by checking /var/log/kern.log
	* Always make sure kernel headers match running kernel version 



































































