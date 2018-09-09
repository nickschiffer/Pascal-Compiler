PROGRAM hello (output);

//{Write 'Hello, world.' ten times.}

// Hello world
/* abcde * abc/de 
*/
VAR
    i : integer;

begin {hello}
    FOR i := 1 TO 10 DO BEGIN
        writeln('Hello, world.');
    END;
end {hello}.
