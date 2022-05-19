# escalation-setuid
escalation-setuid c code

Building
gcc yetki.c -o yetki

Running
you will need to run bash as root:

sudo ./yetki

There is also a way to make it run without typing sudo every time: set the suid bit on the executable and change its owner to root:

sudo chmod +s ./yetki
sudo chown root ./yetki
After starting yetki, it will run root 
