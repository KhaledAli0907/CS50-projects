-- Keep a log of any SQL queries you execute as you solve the mystery.
-- quarry to read the descrption of the Crime
SELECT description FROM crime_scene_reports
WHERE year = 2021 AND month = 7
AND day = 28
AND street = 'Humphrey Street';

-- quarry to read the witnesses interviews
SELECT * FROM interviews
WHERE year = 2021 AND month = 7
AND day = 28;