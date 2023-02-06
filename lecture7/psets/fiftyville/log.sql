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

-- See the atm trancations
SELECT * FROM people
JOIN bank_accounts ON people.id = bank_accounts.person_id
JOIN atm_transactions ON bank_accounts.account_number = atm_transactions.account_number
WHERE year = 2021 AND month = 7
AND day = 28;

-- See the phone calls less than minute
SELECT name FROM people
JOIN phone_calls ON people.phone_number = phone_calls.caller
WHERE year = 2021 AND month = 7
AND day = 28 AND duration < 60;

-- See the bakery security logs
SELECT people.name FROM people
JOIN bakery_security_logs ON people.id = bakery_security_logs.id
WHERE year = 2021 AND month = 7
AND day = 28 AND hour = 10;