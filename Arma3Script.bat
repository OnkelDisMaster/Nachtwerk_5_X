cd "C:\GameServer\Altis_Life\Nachtwerk_5_X"

start arma3server.exe -servermod=@extDB3;@life_server;@infiSTAR_A3;@Sperrzonensystem;@HMCS;@obfusqf; -port=2312 -config=server.cfg -cfg=basic.cfg -enableHT -maxMem=3071 -noFilePatching -noSplash -noSound -autoInit -loadMissionToMemory -netlog
