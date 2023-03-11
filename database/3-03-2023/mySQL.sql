CREATE USER 'karlen'@'localhost' IDENTIFIED BY 'password1';
CREATE USER 'petros'@'localhost' IDENTIFIED BY 'password2';

CREATE DATABASE my_db;

GRANT ALL ON my_db.* TO karlen@localhost;
GRANT SELECT ON my_db.* TO petros@localhost;

ALTER USER 'karlen'@'localhost' IDENTIFIED BY 'passw1';
ALTER USER 'petros'@'localhost' IDENTIFIED BY 'passw2';
