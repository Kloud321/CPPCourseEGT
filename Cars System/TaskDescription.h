//Да се разбратти малка система за фора за коли под наем за всяка кола се съхранвяа информация за:
//
//марка, модел, вид, цвят, номер на шасито, номер на колата и разход на гориво.
//под вид се разбира седан, комби, хечбек..
//
//Имаме два вида коли фамилни и луксозни
//
//        фамилните коли имат:
//
//- такса за ползване в лева на ден, изминатото разстояние от клиента
//
//
//Луксозните колие имат
//
//        такса за ползване- в лева на ден, изминатото разстояние от клиената, такса доп. екстри.
//
//Да се реализират класове описавщи колите. Д се реализират функции ( в подходящите класоове) за определяне на цената, която клиента трябва да плати.
//
//за Фамилите коли цената се определя от произведението на:
//- такси за ползване Х коефициент "изминато разстояние".
//
//За луксозните колеи тя се определя от произведението на:
//- таксi за ползване на Х коефициент "изминато разстояние" Х коефициент "екстри.
//
//За фамилните коли коефициент изминато разстояние се определя по следният начин:
//
//- ако изминатото разстояние е по-малко от 500 км коефициента е 0.7
//- ако изминатото разстояние по-голямо или равно то коефициента е 0.4
//
//За луксозните коли този коефициент се определя така:
//- ако изминатото разстояние е по-малко от 200 км коефициента е 0.6;
//- ако изминатото разстояние по-голямо или равно то коефициента е 0.4;
//
//Коефициента за лукс е три типа 100 лева Шампански, 50 лева вино и 40 лева шоколоад
//
//
//Да се напише прилпжение за тест на разбработените класове и техните функции, като трябва да се създават няколко обекта от всеки тип и да се съхраняват в подходяща стркутура.
