-- Keep a log of any SQL queries you execute as you solve the mystery.
-- Create a Susbect table
--CREATE TABLE susbcets (
   -- name TEXT
--);

-- quarry to read the descrption of the Crime
SELECT description FROM crime_scene_reports
WHERE year = 2021 AND month = 7
AND day = 28
AND street = 'Humphrey Street';

-- quarry to read the witnesses interviews
SELECT name, transcript FROM interviews
WHERE year = 2021 AND month = 7
AND day = 28 AND transcript LIKE '%bakery%';

-- See the bakery security logs
SELECT people.name, bakery_security_logs.license_plate,
bakery_security_logs.activity, bakery_security_logs.hour, bakery_security_logs.minute
FROM people
JOIN bakery_security_logs ON people.license_plate = bakery_security_logs.license_plate
WHERE year = 2021 AND month = 7
AND day = 28 AND hour = 10
AND minute BETWEEN 15 and 25 AND activity = 'exit';

-- See the atm trancations
SELECT people.name, atm_transactions.amount
FROM people
JOIN bank_accounts ON people.id = bank_accounts.person_id
JOIN atm_transactions ON bank_accounts.account_number = atm_transactions.account_number
WHERE year = 2021 AND month = 7
AND day = 28
AND atm_location = 'Leggett Street'
AND transaction_type = 'withdraw';

-- See the caller phone calls less than minute
SELECT people.name, phone_calls.caller FROM people
JOIN phone_calls ON people.phone_number = phone_calls.caller
WHERE year = 2021 AND month = 7
AND day = 28 AND duration < 60;

-- See the recivers names
SELECT people.name, phone_calls.receiver FROM people
JOIN phone_calls ON people.phone_number = phone_calls.receiver
WHERE year = 2021 AND month = 7
AND day = 28 AND duration < 60;

-- insert into susbects list
INSERT INTO susbects VALUES (bruce, diana, iman, luca);

-- See the name of the FarmVille airport
SELECT abbreviation, full_name, city FROM airports;

-- Find the next day's flights
SELECT airports.city, flights.hour, flights.minute FROM airports
join flights ON airports.id = flights.origin_airport_id
WHERE airports.abbreviation = 'CSF' AND year = 2021
AND month = 7 AND day = 29 ORDER BY flights.hour;

-- Find the Passengers names on the 8:20 flight
SELECT people.name FROM people
JOIN passengers ON people.passport_number = passengers.passport_number
JOIN flights ON passengers.flight_id = flights.id
WHERE year = 2021 AND month = 7 AND
day = 29 AND hour = 8 AND minute = 20
ORDER BY people.name;

-- Update the susbicts list
DELETE FROM susbects WHERE name = 'iman' AND name = 'Diana';


-- bruce, diana, iman and luca are suspects

