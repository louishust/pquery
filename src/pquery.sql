DROP TABLE IF EXISTS t1;
CREATE TABLE t1 (ID int);
INSERT INTO t1 VALUES (1);
INSERT INTO t1 VALUES (2);
INSERT INTO t1 VALUES (3);
INSERT INTO t1 VALUES (4);
INSERT INTO t1 VALUES (5);
ALTER TABLE t1 ADD PRIMARY KEY pk(ID);
ALTER TABLE t1 DROP PRIMARY KEY;
INSERT INTO t1 SELECT * FROM t1;
DELETE FROM t1 LIMIT 3;
ALTER TABLE t1 ENGINE=InnoDB;
UPDATE t1 SET ID=2;
CALL country_hos('Europe');
SELECT 'test 1';
SELECT * FROM t1;
