waitUntil {!isServer && {!isNull player} && {player isEqualTo player}};

player createDiarySubject ["info","Info"];

/*  Example
    player createDiaryRecord ["info", //Container
        [
            "Info2", //Subsection
                "
#Test<br/><br/>
                "
        ]
    ];
*/

