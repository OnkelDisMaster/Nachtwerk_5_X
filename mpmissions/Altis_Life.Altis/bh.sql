USE `altislife`;

CREATE TABLE `bounty` (
  `bountyID` varchar(64) NOT NULL,
  `bountyName` varchar(32) NOT NULL,
  `bounty` int(100) NOT NULL,
  `insert_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`bountyID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;