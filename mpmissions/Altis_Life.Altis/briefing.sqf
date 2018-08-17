waitUntil {!isServer && {!isNull player} && {player isEqualTo player}};

player createDiarySubject ["info","Info"];

    player createDiaryRecord ["info", //Container
        [
            "Info", //Subsection
                "
                <br/>
                TS3 Server IP: nachtwerk-community.de<br/>
                Homepage: www.nachtwerk-community.de<br/>
                Arma 3 Altis Life Forum: http://nachtwerk-community.de/arma/wcf/<br/>
                <br/>
                Mit dem Spielen auf diesem Server akzeptierst du unsere AGBs und Regeln<br/>
                <br/>
                Unsere aktuellsten Regeln findest du bei uns im Forum!!
                <br/>
                "
        ]
    ];


