-- Keep a log of any SQL queries you execute as you solve the mystery.
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

-- See the phone calls less than minute
SELECT people.name, phone_calls.caller FROM people
JOIN phone_calls ON people.phone_number = phone_calls.caller
WHERE year = 2021 AND month = 7
AND day = 28 AND duration < 60;

-- search for the next day flights where origin airbort is farmville
SELECT 


-- bruce, diana, iman and luca are suspects

