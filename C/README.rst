===
swe
===

Programmering i C, fast på svenska

Vad är ``swe``?
===============

``swe`` är en huvud-fil som innehåller ett antal definieringsmakron för att
översätta C till svenska! Definitionerna finns i tabellen nedan:

+----------+------------------+
| ``C``    | ``swe``          |
+----------+------------------+
| TRUE     | SANT             |
+----------+------------------+
| FALSE    | FALSKT           |
+----------+------------------+
| auto     | sjalvbestammande |
+----------+------------------+
| break    | bryt             |
+----------+------------------+
| case     | fall             |
+----------+------------------+
| char     | karaktar         |
+----------+------------------+
| const    | kostant          |
+----------+------------------+
| continue | fortsatt         |
+----------+------------------+
| default  | uteblivet        |
+----------+------------------+
| do       | gor              |
+----------+------------------+
| double   | dubbel           |
+----------+------------------+
| else     | annars           |
+----------+------------------+
| enum     | raknare          |
+----------+------------------+
| extern   | utifran          |
+----------+------------------+
| float    | flyttal          |
+----------+------------------+
| for      | for              |
+----------+------------------+
| goto     | gatill           |
+----------+------------------+
| if       | om               |
+----------+------------------+
| int      | hel              |
+----------+------------------+
| long     | lang             |
+----------+------------------+
| register | registrera       |
+----------+------------------+
| return   | skickatillbaks   |
+----------+------------------+
| short    | kort             |
+----------+------------------+
| signed   | signerad         |
+----------+------------------+
| sizeof   | storlekav        |
+----------+------------------+
| static   | statisk          |
+----------+------------------+
| struct   | struktur         |
+----------+------------------+
| switch   | byt              |
+----------+------------------+
| typedef  | typdefinition    |
+----------+------------------+
| union    | sammansattning   |
+----------+------------------+
| unsigned | osignerad        |
+----------+------------------+
| void     | tomrum           |
+----------+------------------+
| volatile | flyktig          |
+----------+------------------+
| while    | medan            |
+----------+------------------+
| printf   | skrivf           |
+----------+------------------+
| scanf    | lasf             |
+----------+------------------+
Användning
==========

Klona ``jävel`` förvaringen och inkludera filen ``swe.h`` i ditt projekt. Sen är
det bara att koda på!

Exempel
-------

.. code:: c

    #include "swe.h"
    #include <stdio.h>

    hel main(hel argc, karaktar ** argv){
        hel a = 0;
        lasf("%d",&a);
        om(a == 0){
            skrivf("Hej världen!\n");
        }annars{
            skrivf("Hejdå världen!\n");
        }
        skickatillbaks 0;
    }

Att göra
========

Förprocessorn klagade när jag försökta använda våra vackra svenska tecken i
definieringsmakrona. Detta är något som behöver åtgärdas, om möjligt.

.. _`git på svenska`: https://github.com/bjorne/git-pa-svenska
