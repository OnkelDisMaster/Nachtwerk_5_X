waitUntil {!isServer && {!isNull player} && {player isEqualTo player}};

player createDiarySubject ["info","Info"];

    player createDiaryRecord ["info", //Container
        [
            "Info", //Subsection
                "
#Test<br/><br/>
                "
        ]
    ];


