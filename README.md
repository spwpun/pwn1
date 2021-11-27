# pwn1 auto deploy pwn challenges
- replace ./bin/ files, include the binary and the flag (sometimes even the libc file)
- modify ctf.xinetd file `server_args` to your own bin
Cmds:
1. build image: `sudo docker build ./ -t pwn`
2. run container: `sudo docker run -d -p "0.0.0.0:LOCAL_PORT:DOCKER_PORT" -h "pwn" -v {/mypath/flag}:/home/ctf/flag --name="pwn" pwn`
