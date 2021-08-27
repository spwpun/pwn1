# pwn1 auto deploy pwn challenges
replace ./bin/ files, include the binary and the flag (sometimes even the libc file)
cmds:
build image: `sudo docker build ./ -t pwn`
run container: `sudo docker run -d -p "0.0.0.0:LOCAL_PORT:DOCKER_PORT"` -h "pwn" -v {/mypath/flag}:/home/ctf/flag --name="pwn" pwn
