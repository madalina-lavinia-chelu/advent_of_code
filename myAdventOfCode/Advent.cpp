
#include <iostream>
using namespace std;
int prologue;
//int st;
//void correct(int &st)
//{
//  cout << "Nice! you got a star!\n";
//  st++;
//}
//
//void incorrect()
//{
//  cout << "Nope sorry that's not the answer\n";
//}

void story1(int &prologue)
{
    
    if (prologue == 0)
    {
        prologue = 1;
        cout << "Usually, Christmas preparations on the North Pole run as smooth as silk, but this year, weirdly enough, so many things have been malfunctioning and creating disarray throughout the whole elf town. Of course, Santa observed this curious problem and decided he needed someone's help to fix all of these unpredictable phenomenons and to find their cause.\n";
        cout << "Luckily for him, he saw in someone's Christmas letter that they're looking for a quick way to earn exposure and experience(not money, sorry, Santa doesn't have a wallet, he has elves who do all the shopping for him).So, he immediately flew over on his reindeerless, non - christmas sleigh(he keeps the special reindeer driven sleigh for only one special occasion) to pick that one person up.\n";
        cout << "Guess what!You're that person!You've officially been hired by Santa(without pay, he swears he'll give you wonderful gifts for life though) to fix whatever is going wrong throughout the North Pole.\n";
    }
    cout << "The moment you step out of Santa's sleigh, two cheery looking elves appear seemingly out of nowhere. Dressed with red and green clothes and accessorized by too many jingle bells for your taste, they greet you with the happiest face you've ever seen. They start bombarding you with questions about the world outside the North Pole and, before you can even respond, a soft melody, almost like an anthem, starts echoing through the whole town.\n";
    cout << "It's either in a completely different language that you've never heard of, either complete gibberish, still you can't understand any of it, but you see the two small elves joyfully singing along as if it were common sense. After their little show they look at you and comment on your lack of singing, to which, of course, you reply that you've never heard of this silly, wonderful song.\n";
    cout << "With complete surprise in their voice they tell you that you can't stay there unless you learn all of it from start to finish, they even comment on your lack of Christmas education which you're not sure how to feel about, but ultimately decide to ignore. Still, they frantically hand you a piece of paper with seemingly random letters arranged with no order whatsoever.\n";
    cout << "They both tell you that to understand it you have to extract the sequence 'idigi' after every vowel. How many characters does the translated text have? (knowing that spaces count as a character)\n";
    cout << "Example: \n";
    cout << "    heidigilloidigi theidigireidigi!\n";
    cout << "After extracting the sequence 'idigi' the text remains as: 'hello there!' and the total number of characters is 12.\n";
    /*int ans;
    cin >> ans;
    if (ans == 1053)
        correct(st);
    else
        incorrect();*/
    cout << "-----------------------------------\n";
}

void story2()
{
    cout << "Translating the text wasn't that bad, you think to yourself before the two elves (who are now very proud of you and finally introduced themselves as Jake and Yutani) quickly whisk you away to show you around the place.\n";
    cout << "They assume that, from the carol, you understood the main jobs every elf has around the North Pole so they decide to show you to the famous 'Sugar room'. They explain it's just the kitchen where all the elf food (exclusively candy since their diet fully excludes any non-sweet ingredients) gets made and sent towards each elf's home. \n";
    cout << "Before instructing you on all the necessary stepts taken towards making everyone's food, Jake takes a quick look at the delivery list and notices it's all completely out of order and missing the 'Top 3 biggest appetite' section. The little elves are both in shock, how could everyone get their food if their houses weren't even properly listed and how would they even know where to send the most food and the 'fastest eater' prizes to without their handy lists?\n";
    cout << "So, they claim that, as the new Santa helper around, you have to do something about this complete disaster. Explaining that the list has, on every row, the name of the street and the amount of sugar (quantified in grains) that specific household needed last week, they tell you to re-arrange the list so that the house with the highest sugar quantity is on the first place, the one with the second highest quantity is on the second place and so on. What are the values for the first three houses?\n";
    cout << "Example: \n";
    cout << "    Allende Avenue 289\n    Anchor Avenue 305\n    Cross Hill Drive 745\n    Honea Path 136\n    Knudson Run 587\n";
    cout << "In this case the re-arranged list should look like this:\n";
    cout << "    Cross Hill Drive 745\n     Knudson Run 587\n    Anchor Avenue 305\n    Allende Avenue 289\n    Honea Path 136\n";
    cout << "The values of the first three houses(so the final results) are: 745 587 305\n";
    cout << "-----------------------------------\n";
}

void story3()
{
    cout << "After you finish the list three very short elves take tiny steps inside the 'Sugar room' while asking left and right where the delivery list is. In a hurry you hand it over to them and they raise their eyebrows with clear surprise on their face. Saying they haven't seen the list so organized in at least a few years they thank you for your hard work and quickly leave your sight.\n";
    cout << "Happy that you were able to make a positive difference in the North Pole, you go looking for Yutani and Jake near the muffin ovens and see them working cheerfully. Yutani spots you first and, as if teleported next to you, she grabs you by the arm and says you're late to the Christmas chorus rehearsals you absolutely needed to attend.\n";
    cout << "The three of you quickly navigate the intricate yet small town to find a beautiful building from which Christmas carols could loudly be heard. Entering you are greeted by perhaps the tallest elf you've seen in the whole North Pole, tall enough to even appear slightly human, he gives you a sheet of music followed by a paper with instructions and tells you to jump in the chorus. You see Yutani and Jake go head first into singing with everyone else, but you know you have to take a step back and think about what you have to sing before even attempting it.\n";
    cout << "Looking at the two pieces of paper given to you, you recognise that on the first one you have the notes the main singer is playing followed by the notes the accompanying cast has to sing afterwards, the ones you should probably sing. Taking a closer look you see some stains cover the notes well enough so that you can't see anything underneath them. Thankfully the second paper manages to clear things up a bit, it reads:\n";
    cout << "    G --> C\n    C --> Am\n    Am --> D7\n    D7 --> G \n";
    cout << "Fill in every missing note and add each one's number of letters times two to a sum. What is that sum?\n";
    cout << "Example: \n";
    cout << "    C Am\n    D7 G\n    G C\n    Am\n    C\n    D7 G\n    G\n";
    cout << "The missing notes that have to be filled in are: D7 (4th row), Am (5th row), C (7th row) so the total sum will be: 2*2 + 2*2 + 1*2 = 10\n";
    cout << "-----------------------------------\n";
}

void story4()
{
    cout << "Finding all the missing notes thankfully saved you so you didn't have to embarrass yourself in front of so many interesting looking elves. You sang pretty well and Jake and Yutani both gave you a thumbs up during the rehearsals which you're interpreting as doing an amazing job on your first try.\n";
    cout << "Singing paradoxically gave you a lot  of energy though, enough to ask Yutani and Jake what else this lovely town has in store for you instead of going to the lodging Santa said he'd arranged for you and fully collapsing on the bed. Jake sadly says he'll clock in for the day, while Yutani seems as excited as you to show you around the town and almost runs towards the exit, fast enough for you to almost lose her in the crowd of equally small, green elves.\n";
    cout << "Reaching the Town square wasn't difficult at all,  Yutani knew the North Pole like the back of her hand and, in truth, it wasn't a big enough place to get completely lost in. The place was absolutely wonderful, it looked like it was taken right out of a fairytale. Shining lights were hanged everywhere and so many Christmas smells floated in the air. You and Yutani look around and see an enormous amount of Christmas themed shops filling the square.\n";
    cout << "She looks around a bit and says that, if the town's market were ever classified as a mathematical rectangle (it usually isn't but she says it's for a little thought experiment) with known length and width you couldn't find the sector with the biggest amount of Christmas toys. Considering that she wants to delimit the market in squares, saying that every sector has exactly 4 shops and considering that you observed the town's square well enough to know (with a certain approximation) how many toys were in each shop, you begin to write down a few notes.\n";
    cout << "Firstly, you write down the width and length of the Town's market, followed by the approximated values of toys that you think each shop has. What is the highest number of toys found in one sector?\n";
    cout << "Example: \n";
    cout << "    4 6\n    5 6 2 3\n    4 5 2 7\n    1 1 8 4\n    2 4 5 6\n    7 8 5 4\n    1 3 2 6\n";
    cout << "The number of toys from each sector would be: 5 + 6 + 4 + 5 = 20 (1st one); 2 + 3 + 2 + 7 = 14; 1 + 1 + 2 + 4 = 8; 8 + 4 + 5 + 6 = 23; 7 + 8 + 1 + 3 = 19; 5 + 4 + 2 + 6;\n";
    cout << "The highest number of toys is therefore 23.\n";
    cout << "-----------------------------------\n";
}

void story5()
{
    cout << "Yutani's theoretical problem fully drained you and made it impossible for you to think of anything else other than falling into bed and sleeping like a log. Headed for the first time to your lodging you don't even observe how nicely, human-esque decorated it was and just enter an immediate deep sleep as soon as your head hits the pillow.\n";
    cout << "Your blissful sleep, however, is sadly interrupted by the North Pole equivalent of an extremely annoying alarm. Jake, who somehow found a way into your place, lowdly speaking over the phone with probably none other than Yutani, was frantically and extremely loudly searching for something in your completely empty drawers. He notices you waking up and, as if electrocuted, jups away from your drawers. You're not sure why he'd react in such a way, or what he was searching for, but he clears the latter up by telling you that you absolutely have to buy some necessities and grabs you by the arm to take you to a number of different grocery stores.\n";
    cout << "Jake writes down on a piece of paper all the things you need to buy. On the first row he writes the number of things he estimates that you need, on the second row he writes, for each different item, its necessary quantity. The third row has the number of stores the city has and afterwards it has, the prices from one store of each item that you need to buy (the number of rows is equal to the number of stores and the number of items on each row is equal to the number of items you need to buy). If a store doesn't have an item that you're looking for than its price is considered to be equal to -1 and can't be bought.\n";
    cout << "What is the minimum amount of money you can spend buying everything that you need?\n";
    cout << "Example: \n";
    cout << "   4\n     2 3 3 5\n     3\n    1 2 3 2\n    -1 5 3 -1\n    3 -1 7 4\n";
    cout << "In this example there are 4 items you need to buy, the quatities of each are: 2, 3, 3, 5. There are 5 stores you can go to. The first store has the prices : 1, 2, 3, 2, the second one: -1 (meaning that item isn't in stock), 5, 3, -1 and so on. The minimum amount of money you can spend is 27 since for item number one the quantity needed is equal to 2 and the lowest price offered is in the first store equal to 1 and so on. The equation than becomes : 2*1 + 3*2 + 3*3 + 5*2 = 27.\n";
    cout << "-----------------------------------\n";
}

void story6()
{
    cout << "Yutani and Jake look at all the unorganized toys which fell into complete disarray throughout the toy factory. They both look pale, livid and completely shocked by the lack of consistency the factory has reached. Yutani picks up a rogue wooden car with trembling hands and disappointedly states that it has no production code written on it whatsoever.\n";
    cout << "The two, now saddened, elves look at you and almost beg you to do something about it. They start rambling on about how every toy has to have a production name fully customized by combining the toy type (classified from A to Z), the second letter of the kid's name and either the sequence 'ni' to signify that they were nice all year round, either 'na' to show that they weren't.\n";
    cout << "They continue mentioning too many details for you to even hear, except one which you somehow catch. Yutani says how this year's 'Christmas score' is fully dependent on this classification and that it not being finished two weeks before the end of the year is completely unbelievable. Jake starts asking everyone for this year's production list that needs to be sorted and tells you that from it you need to form each kid's production code. He explains that each production code has, in order (with no spaces in the code), the type of toy (classified from a to z), the first letters from the names and surnames of the kid, and either the numbers 1 or 0 – 1 meaning that the kid was nice all year round and 0 meaning otherwise. He tells you he needs a list with every production code and than the number of presents for nice kids from each toy category alphabetically.\n";
    cout << "The production list given to you has on every row a combination between lowercase and uppercase letters and a single number, either 0 or 1. The lowercase letter that appears most frequently is the toy type, the uppercase letters that appear the least are the name and surname (surnames can be 0 or more) of each kid respectively and the number represents whether they were naughty or nice (1 meaning nice and 0 meaning naughty).\n";
    cout << "Example: \n";
    cout << "   1qDwtyuR\n     0wYdNgC\n     3\n    a1Dwfa\n    sWv0NhFXOT\n    0vVwK\n";
    cout << "Taking each number of nice kids from each category would mean that the final answer is: 1 1 because there is only one nice kid who wanted a type ‘a' toy and only one kid with a type ‘q' toy.\n";
    cout << "-----------------------------------\n";
}

void story7()
{
    cout << "Being called to Santa's office sounded a bit scary, but fortunately for you when you arrive he greets you with a smile on his face and some hot cocoa made especially for you. He asks how you've been and if you like the town than, but, before you can respond, a loud knock interrupts your conversation. The tall elf, now panicked and rambling on about something fully distracts Santa from your conversation and whisks him away to some emergency you don't know about.\n";
    cout << "Now left alone in the surprisingly small office you notice how completely unorganised it all is. You'd think that Santa of all people has to set an example when it comes to tidiness. Looking around you also notice a calendar full of little notes. You see that today's date is circled at least a few times by a red, marker line and right next to that you can see the words 'cleaning day' crossed out and replaced by 'cancelled, elves are too busy'. \n";
    cout << "So, deciding you have nothing better to do with your time, (and thinking that Santa would've hired someone to clean his office anyway) you start arranging things as well as you can. Considering that each item that needs to be tidied in Santa's office is an uppercase letter, you need to group each character into a cupboard. Which cupboard has the most items?\n";
    cout << "A cupboard is considered to be a group of 4 letters alphabetically consecutive. For example the first cupboard would have the letters: A, B, C and D; the second has: E, F, G, H and so on. The last cupboard has only two letters : Y and Z.\n";
    cout << "Example: \n";
    cout << "   GYUSBNMAOPUNGTMIIGHSNMFUHGNGMLUABHNCAMXIBHNMEA\n";
    cout << "For this input the first cupboard has 8 items, the second has 7 items and so on. The cupboard with the most items is the first one with 14 things so the final result is 14.\n";
    cout << "-----------------------------------\n";
}

void story8()
{
    cout << "Casually cleaning up around the room you notice a weird, cryptid letter on the floor. Trying to decipher it makes your head hurt but you see that, at the bottom of the page, written in pencil by probably none other than Santa, is the number 3.\n";
    cout << "You take a step back to think at how ethical it would be to decode someone else's private mail, but, realizing that you are in a magical fantasy land where tiny elves walk around freely and where there isn't anyone starving you realize that 1: anything is possible and 2: this letter can't be that bad. The fact that you're just naturally curious to find out what's in the letter fuels your passion even more so you think of a way to decode it.\n";
    cout << "The easiest way to encrypt something would be the Caesar code so you decide to try decoding it that way. In order to do so you take only the letters from the page and decrease it by the number at the bottom of the page.\n";
    cout << "Example: \n";
    cout << "If the encrypted version was 'Khoor' the translated message would be 'Hello'.\n";
    cout << "-----------------------------------\n";
}

void story9()
{
    cout << "You finish going through private property and realize what that letter actually says. It shows you that Santa didn't hire you because he was low on staff or because he just felt like having an extra pair of hands around. He brought you here not for the exploration, not just because you wanted a fantastical change of scenery in a supposedly fictional town, but because he was in dire need of help. Reading the letter you realize how all the chaos and total disarray was all completely caused by one mysterious figure. Of course from that moment on you fully decide to investigate all of these suspicious places.\n";
    cout << "You're not sure where to start first, but, from the letter, you see that Santa was mostly concerned with the deposit area so you decide to head there straight away. The moment you arrive you see three unoriginal, plain looking elves angrily fighting about something. You're not sure what's happening and you don't really want to participate in their fight, but, unfortunately for you, they call you over anyway. \n";
    cout << "Turns out they were arguing about their 'etch-a-sketch' scores and who won. Oblivious to this elven tradition you ask what this contest is and they each pull out (completely out of nowhere because elves don't have pockets) some of their 'sketches'. The papers you see look fully covered by random lines with no pattern whatsoever, no actual drawing behind it at all, yet still you mimic and interested face and ask them what this supposed contest is all about. They all say it's about the number of connections you have on your paper. Before seeing any drawings you are given the maximum lines that can be made, followed by the width and length of the paper that each line or column drawn must be equal to (lines equal to the width and columns equal to the lenght). \n";
    cout << "Before they can finish their thought though, a fourth elf enters the picture and loudly shouts how all three of the elves cheated and used too many lines in their drawing. Hearing this all the elves turn towards you, expecting you to solve their little argument and completely stopping you dead in your tracks when it comes to the investigation you were so eager to conduct. Now you have to find out if any of the four elves cheated and disqualify them, which of them cheated?\n";
    cout << "Example: for one of the elves an etch-a-sketch looks like this:\n";
    cout << "   6 6 11\n";
    cout << "   1 0 0 0 1 0 0 0 1 1 0\n";
    cout << "   1 0 0 0 1 0 0 0 1 1 0\n";
    cout << "   1 1 1 1 1 1 1 1 1 1 1\n";
    cout << "   1 0 0 0 1 0 0 0 1 1 0\n";
    cout << "   1 1 1 1 1 1 1 1 1 1 1\n";
    cout << "   1 1 1 1 1 1 1 1 1 1 1\n";
    cout << "In this example there are 7 lines drawn which means the elf cheated and got disqualified from the contest.\n";
    cout << "-----------------------------------\n";
}

void story10()
{
    cout << "Before you can even start telling the elves who cheated they start pestering you with requests on calculating the results early. They show you a website that apparently keeps each elf's 'etch-a-sketch' and basically beg you to tell them what the highest score was. They add that their score is based on the number of knots the drawing has. In this case, they consider knots the places in which a line and a column intersect.\n";
    cout << "Figure out which elf, that used the correct number of lines, had the highest number of knots. Just like in the previous exercise, you are given first, the number of lines specified by the rules of the contest, than the width and length of the etch-a-sketches, the number of elves participating and then the actual drawings.\n";
    cout << "Example: for one of the elves an etch-a-sketch looks like this:\n";
    cout << "   6 6 11\n";
    cout << "   1 0 0 0 1 0 0 0 1 1 0\n";
    cout << "   1 0 0 0 1 0 0 0 1 1 0\n";
    cout << "   1 1 1 1 1 1 1 1 1 1 1\n";
    cout << "   1 0 0 0 1 0 0 0 1 1 0\n";
    cout << "   1 1 1 1 1 1 1 1 1 1 1\n";
    cout << "   1 1 1 1 1 1 1 1 1 1 1\n";
    cout << "In this example there are 12 knots but also 7 lines drawn which means the elf cheated and got disqualified from the contest.\n";
    cout << "-----------------------------------\n";
}

void story11()
{
    cout << "Disappointed (but not surprised) by the fact that two elves cheated on their 'etch-a-sketch' drawings you interrupt any sort of other comments that the elves might be making and finally decide to continue your investigation. You ask the elves whether they've seen anything out of order or suspicious around the deposit and three of them shake their head with slight disappointment.\n";
    cout << "The fourth one, however, starts rambling on about how materials started disappearing left and right ever since you got there. He almost starts shouting at you but you calm him down (well as much as you can) and start asking him what he means by it. He starts telling you that each material is placed on a map and has at most four other materials surrounding it. Adding that the materials are classified by whether or not they'll be useful this year (1 if they're useful, 0 if they aren't) he says that useful materials all disappear and are replaced by their counterparts, but not randomly. Apparently, the needed materials are replaced every day and only if they have at least 2 neighboring not useful materials. How many days are left until all the useful materials are gone?\n";
    cout << "Example: \n";
    cout << "   4 4\n";
    cout << "   0 1 1 1\n";
    cout << "   1 1 0 0\n";
    cout << "   0 1 1 0\n";
    cout << "   0 0 0 1\n";
    cout << "In this example it'll take 5 days until all the useful materials are replaced.\n";
    cout << "-----------------------------------\n";
}

void story12()
{
    cout << "It doesn't take you long to find out how much time you have until all the useful materials are replaced, but it does take you a while to convince the four arguing elves that you need their help. So, sad that they can't focus on their 'etch-a-sketch' drawings anymore they do lend you a helping hand. Thank God they did because one of them finds a trail, an actual… trail, of crumbs throughout the whole deposit. Of course, it, at some point, leaves the deposit you were in but you still feel the need to follow it. While the elves remain in the deposit, you mindlessly follow the path it leads you on (seriously you weren't paying attention to anything else at all since you almost fell in a whole).\n";
    cout << "The moment the trail ends you don't even know where you are, but you look around a bit, realizing you're somehow in the toy factory and thankfully being greeted by your two favorite elves. Jake and Yutani, looking tired and drained by the current issues they were facing, were standing in the middle of the room, in front of a giant (and I mean absolutely giant) empty glass container. They're in the middle of debating something when you interrupt them.\n";
    cout << "The moment Jake and Yutani see you their faces light up. You got there at just the right time to help them with their seemingly impossible conundrum. Yutani tells you about the current problem they're in, apparently they had to place all the toys made in the glass container so they'd be ready to get shipped by Christmas. Not sure you understood, Jake clarifies the situation by saying they need you to create a map of all the toys so that they'll be orderly placed in the giant shipping glass.\n";
    cout << "You are given the width 'n' (equal to the lenght) for the glass and on following rows (the number of rows isn't equal to the width it's equal to n*n) random characters. Your goal is to create a map with n * n characters that contains for each element the character with the highest number of apparitions of a character in the respective colon.\n";
    cout << "Example: \n";
    cout << "   2\n";
    cout << "   audgAygdafs\n   aKCOIJAeof\n   FKADGJsad\n   GDOIGaushd\n";
    cout << "For this example, the map would be:\n";
    cout << "   2 1\n   1 2\n";
    cout << "Because on the first row the highest number of apparitions is 2, on the second row it's 1 and so on.\n";
    cout << "-----------------------------------\n";
}

void story13()
{
    cout << "After putting all the toys in the shipping container, Jake and Yutani thank you so extremely much for the amazing help you gave them and promise they'd assist you with anything you might need. Of course, hearing this makes you remember what you were actually there for, to find the mysterious saboteur. Realizing the two elves are trustworthy and helpful enough to hear and offer a hand in your investigation you tell them all about it. It leaves them completely and entirely shocked to hear everything, but it does intrigue them enough to agree to help you.\n";
    cout << "They frantically start examining the factory you were in and try to piece together the information you gave them until they notice that the breadcrumbs you were so desperately following just a moment ago, were gone, as if they never even existed and, in their place, there is a mysterious piece of paper with too many random numbers to even count. On the back of the page, you can see a number and the words 'elf with ones and zeros on both sides'.\n";
    cout << "Reading the hint on the back, Jake realizes that it refers to a palindromic elf code. He tells you that, most likely, you have to check the numbers on the front of the page in binary and find the palindromic one.\n";
    cout << "Example:\n";
    cout << "   2 6 517 891 12 51\n";
    cout << "For the given example the result would be 891 since written in binary the number becomes 1101111011. \n";
    cout << "-----------------------------------\n";
}

void story14()
{
    cout << "Looking at the elf's code that the mysterious paper points you to just confuses you more until Jake realizes that every elf's code can be searched in Santa's database which can be accessed from the command room. Knowing this makes you happy for getting a lead in your investigation, but that joy fades off the minute you see Jake and Yutani exchanging concerned looks. Yutani mentions how the command room is basically impossible to be accessed by elves since , besides the fact that it's guarded 24/7, it also has an apparently impossible to get through lock that only a few lucky elves know the key to.\n";
    cout << "So, the three of you think of a plan, Jake and Yutani create a distraction loud enough for the guards to leave their post and you quickly find the digits needed for the code. You see the code has 6 numbers and that some of the numbers from the panel look rather used so you decide to try every combination possible with those 6 numbers. The numbers are: 2, 3, 6, 7, 9, 0. Write all the 6 digit codes that you find with these numbers.\n";
    cout << "Ps: This exercise doesn't have an input\n";
    cout << "Example:\n";
    cout << "-----------------------------------\n";
}

void story15()
{
    cout << "Before you can enter the last password, you find, you feel the ground underneath you give in. Apparently, you couldn't just try as many numbers as possible, of course there had to be a lock on the amount of tries you had, but you didn't expect that, instead of simply not being allowed to try again, you'd be sliding downwards, bracing yourself for the moment you hit the ground.\n";
    cout << "Now finding yourself on the cold cement floor of a large empty room you see an iron door blocking your way out. You start hearing an artificially modified person's voice. Even with the voice program you can tell it's clearly not Santa's voice. This confuses you, why would you be trapped for accessing the command room by someone other than Santa. You ask yourself this until the moment you listen to what the voice is actually saying. You basically hear the saboteur boasting about how he created this room so that you'd fall right in his trap. He rambles on about how he knew that if he gave you a random elf's code, you'd want to search him up and immediately get trapped. He also says that, because he doesn't think you're smart enough (very rude of him fr) to decode his message, he wrote a 'riddle' that can help you find the passcode to the iron door on the wall. You just need to count the number of random rows that contain the most repeated letter and voila, the code to the lock is that total number of words.\n";
    cout << "Example:\n";
    cout << "   AuidfahAFHS\n";
    cout << "   SAFNjsajsfFs\n";
    cout << "   gdsonidfAFHfa\n";
    cout << "   kokjFHSasfw\n";
    cout << "   dsijsjjjFsihfw\n";
    cout << "In this case the most repeated letter is j (it appears 4 times on the last row) and the number of words that contain it are 3 so the code to the door would very simply be 3.\n";
    cout << "-----------------------------------\n";
}

void story16()
{
    cout << "Underestimating you was really a stupid move on the saboteur's part because you easily managed to escape from the cement door into a dimly lit corridor. You can tell from the extremely faint sound of Christmas carols that you're under the choir room.\n";
    cout << "You're not sure what's happening, where you are, or who brought you here, but you know they're thankfully not there when you manage to escape. The corridor is filled almost door to door with an unknown number of doors on both walls, each having random numbers that range from 1 to 10^9. Thinking you have no way out you frantically look over all the walls and try to figure out which door is the right one until your eyes stumble upon a sentence graphed on the wall. It tells you that there are two doors leading out of this corridor (the rest just lead back to the corridor), each on a different wall, both leading to the same place. The two doors aren't parallel to each other, nor are they on the same wall, but they have coprime numbers written on them who's sum is the highest out of the other coprine numbers.\n";
    cout << "Reading this you quickly think of a way to store all of this information, you use a misplaced rock to scratch a few things on the wall. You start by counting the doors on every wall and writing the two different numbers down on the first row. Then you start writing all the door's numbers, firstly the wall on the left and secondly the one on the right. Which doors can you go through to escape?\n";
    cout << "Example:\n";
    cout << "   5 4\n";
    cout << "   6 3 2 4 9\n";
    cout << "   7 14 4 8\n";
    cout << "In this example the two coprime doors with the highest sum would be the ones marked with 9 from the first row and 14 from the second one so the answer is: 9 14.\n";
    cout << "-----------------------------------\n";

}

void story17()
{
    cout << "Finally finding the doors leading out of this nightmare tunnel you run up too many stairs to even count anymore and enter a room with harsh rock walls and brightly lit monitors everywhere. The villain was supervising everyone throughout all of this. You can see on the screen every single place you've visited until now and many more. All the workshop isles, all the choir rooms, the kitchen rooms and so on. At the same time, on one of these monitors you see someone actively sabotaging Santa's sleighs, but you can't really make out who that is. Quickly taking a picture of the villain, you try to determine the sector in which he can be found so that you can hurry there to catch him. \n";
    cout << "The monitors are placed in 4 by 4 sectors, each one being a different area of The North Pole. Each monitor has a vital piece of data attached to it, an open or closed light that determines whether there is someone on camera. Knowing that the saboteur could only work when the entire sector was empty you realize that you're looking for the letter of the sector in which there is only one monitor with an open light. (sectors go from A to Z)\n";
    cout << "Before being given any information on the monitors you are given the width and length of the wall containing all the monitors and then 1 if the monitor has an open light and 0 if it doesn't.\n";
    cout << "Example:\n";
    cout << "   8 4\n";
    cout << "   1 0 1 0 \n";
    cout << "   1 0 1 0 \n";
    cout << "   0 0 0 1\n";
    cout << "   0 1 1 0\n";
    cout << "   0 0 0 0\n";
    cout << "   0 0 1 0\n";
    cout << "   0 0 0 0\n";
    cout << "   0 0 0 0\n";
    cout << "In this example the second monitor has only one open light which means that sector B is where you can find the villain.\n";
    cout << "-----------------------------------\n";
}

void story18()
{
    cout << "After figuring out what sector the villain was in you immediately rush towards it. Not even giving it a second thought, you head to the sleigh room and are greeted by a sad sight. You've arrived too late; the saboteur had enough time to disassemble the special Christmas sleigh and fully wreck the reindeer-less one. You realize that without them Santa wouldn't be able to bring everyone their presents so, instead of deciding to continue looking for the villain who might've still been around there, you decide to fix the sleighs.\n";
    cout << "Considering that each piece of the sleigh has a number on it you realize that, in order for the sleighs to work again, you have to put those pieces in a way so that they form a palindromic list using the same method for both of the sleighs.\n";
    cout << "You write down the total number of pieces the first sleigh has, followed by a list containing all the numbers each piece has written on them. After that you write the data for the second sleigh in the exact same way. What is the total number of changes you  can make in the lists given so that both of them ultimately became organized?\n";
    cout << "Example:\n";
    cout << "   4\n";
    cout << "   2 4 6 3\n";
    cout << "   5\n";
    cout << "   9 4 7 1\n";
    cout << "The organized lists would look like this:\n";
    cout << "   2 3 4 6\n";
    cout << "   1 4 7 9\n";
    cout << "The total number of changes made is 2 + 7 = 9.\n";
    cout << "-----------------------------------\n";
}

void story19()
{
    cout << "After finally fixing the two sleighs you find yourself in a conundrum. Unsure where to pick up the investigation again you remember you thankfully took a picture of the saboteur. But before you start trying to observe the picture you realize you can't make out anything from it and need to zoom in to more clearly.\n";
    cout << "Considering that the picture is represented by a matrix with known length and width, you decide to zoom in 4 times. Each time you zoom in every pixel multiplies until the final result appears as though each element has it's own 4 by 4 matrix and the total number of pixels changes.\n";
    cout << "Example:\n";
    cout << "   3 2 3\n";
    cout << "   1 2\n";
    cout << "   3 4\n";
    cout << "For this input the width of the picture is 3, the length is 2 and the times it should be zoomed in is 3 (as the problem's sentence says).\nThe final zoomed in picture should look like this:\n";
    cout << "   1 1 1 2 2 2 \n";
    cout << "   1 1 1 2 2 2 \n";
    cout << "   1 1 1 2 2 2\n";
    cout << "   3 3 3 4 4 4\n";
    cout << "   3 3 3 4 4 4\n";
    cout << "   3 3 3 4 4 4\n";
    cout << "-----------------------------------\n";
}

void story20()
{
    cout << "Looking at the extremely zoomed in picture you recognize who it is. Not believing your eyes at all, you see the unmistakable face of none other than Jake. One of the first elves that you've ever talked to, was really the one planning to destroy Christmas all along.\n";
    cout << "Still in shock you can't help but think that Santa needs to know this. Theoretically you shouldn't even have known there was a saboteur in The North Pole, but now you can't just keep silent on his identity. So now you decide you have to find Santa, but are unsure where he is. Thinking about where to find him you decide to approximate the probability of where he is. You decide to write the width and length of the town, followed by the probability Santa would be in each building. \n";
    cout << "Knowing that Santa is a relatively unpredictable guy (he didn't get mad when you fully cleaned his office so you can only predict so much) you decide to find the least likely place he'd be in for each line and than the most likely one out of these ones. Before you do this however you realize that Santa only works with magical numbers (he is a walking holiday of course he would) which means you need to find the most likely building that has its probability equal to a magical number out of the least likely buildings from each row and write the line and column on which it can be found. The magical numbers you've seen Santa work with are: 3, 7, 9, 11, 13, 22, 31, 33, 44, 55 , 66, 73, 77, 88, 91,99. If there are multiple elements that check the criteria than only show the first one.\n";
    cout << "Example:\n";
    cout << "   3 4\n";
    cout << "   25 39 72\n";
    cout << "   13 46 97\n";
    cout << "   6 52 11\n";
    cout << "The result would be 2 1.\n";
    cout << "-----------------------------------\n";
}

void story21()
{
    cout << "Running throughout the whole North Town left you panting and gasping for air, but finally you find Santa and show him all the intel you have. He does wonder a but why you know about the saboteur, but confesses that he should've told you from the very beginning about him and doesn't get mad at the slight lack of respect towards him (it's Santa he doesn't ever get mad anyways).\n";
    cout << "In any case, after showing him the picture, you see, in the very corner of your eye, none other than Jake, the villain you were looking for. He's very hard to notice, but nonetheless you see him and your first instinct is to run away and catch him. Sadly for you elves, despite their extremely short stature, are quite nimble on their feet so you don't manage to catch up to him on time.\n";
    cout << "Not losing hope yet, you see a giant toy car neatly being packed into a present. Obviously, you hop into it with the purpose of immediately catching up with Jake, but are confused by the control panel that greets you instead of a steering wheel. You take a good look at it and realize that it operates based on simple commands like: UP, DOWN, LEFT, RIGHT, A, B, X, Y. The first four commands are pretty straightforward, you know those control which direction you're going in, but you still need to experiment and figure out what the other ones do. After a little button pressing you realize that A means jump, B means crouch, X means accelerate and Y means slow down.\n";
    cout << "In order to successfully follow Jake you have to read his moves. (no I mean actually read and figure out his moves). You are given rows of characters, if on those rows you find the sequences for any direction than that is your move, otherwise you have to see which of the four buttons appear the most on that row. Write down the number of each move (direction and button) you made, in the order in which they were introduced. If in a row you see that two or more buttons appear the same amount of times than consider Jake's move to be the first one that appears.\n";
    cout << "Example:\n";
    cout << "   SaafiUPahfusaojvoijsAFS\n";
    cout << "   FSANMFRIGHTasfaifhsaFSF\n";
    cout << "   DASDFfaisjffosjaAFsojfsf\n";
    cout << "   SAJNIFSDAMUPasjdiaSFm\n";
    cout << "   BAISDFMWYSJkjskfoaskdf\n";
    cout << "   DaXsfnsiajfsmgfaSDFXmafksma\n";
    cout << "   SJNISXajnsdiAdfiaOIANsdi\n";
    cout << "The result would be: 2 1 1 1 2 because UP is a move twice, RIGHT once, A once, B once and X twice.\nPs: the input's in a folder but let's just pretend it's an actual chase.\n";
    cout << "-----------------------------------\n";
}

void story22()
{
    cout << "It's kind of fun to run around the entire North Pole in a giant toy car, feeling as if you're in a live car chase which in reality seems more like a preschooler game. Still, this doesn't distract you from the matter at hand, catching the villain you've been searching for all this time. After weaving through all of the North Pole and following Jake, you finally corner him in a little alleyway.\n";
    cout << "Your win however doesn't last long because in a twist of fate Jake throws a smoke bomb on the ground and disappears leaving only a letter with weird words behind. Annoyed by yet another cipher and feeling almost hopeless because the villain escaped your grasp once again you're cheered up by Yutani running towards the scene.\n";
    cout << "She stops dead in her tracks, panting and gasping for air and begins asking you where Jake is. Apparently Santa had caught her up on all the details regarding the villain and she feels betrayed by her (now former) best friend. Now you're not sure if you should trust her, given that Jake was the only one caught you can never be sure how many saboteurs are actually in the North Pole, but she sees the cryptid piece of paper in your hand and asks about it anyway. You decide to give her the benefit of the doubt and ask if she knows anything about this cipher.\n";
    cout << "Claiming that she's heard Jake talk about this cipher at some point she grabs a piece of paper and writes a matrix on it:\n";
    cout << "       A D F G X\n";
    cout << "    A  a b c d e\n";
    cout << "    D  f g h i j\n";
    cout << "    F  k l m n o\n";
    cout << "    G  p q r s t\n";
    cout << "    X  u v w x y\n";
    cout << "Example:\n";
    cout << "She explains that each code has a key and even if she's a bit unsure of what Jake would assign as the key, she does believe that, from how he's been behaving and how he's been jokingly using this word for a while now, it probably is: grinch. Continuing to explain the cipher she says that each letter has a code formed by the line and column that it is on, for example m has the code F F, t has the code G X and so on.\n";
    cout << "In order to crack the code you need to place each letter's code under the key. For example if the message was 'peaceout' this step would look like this:\n";
    cout << "    g r i n c h\n";
    cout << "    G A A X A A\n";
    cout << "    A F A X F X\n";
    cout << "    X A G X\n";
    cout << "After this step you need to order the letters of the key in alphabetical order to get:\n";
    cout << "    c g h i n r\n";
    cout << "    A G A A X A\n";
    cout << "    F A X A X F\n";
    cout << "      X   G X A\n";
    cout << "And so the message becomes: AF GAX AX AAG XXX A\n";
    cout << "-----------------------------------\n";
}

void story23()
{
    cout << "Disappointed because, in the very end, you didn't manage to catch the villain, you can't think of anything else besides the fact that you're letting him remain at large, letting him regroup his strength and prepare  for his unsightly return. Well at least you think about this until Santa, Yutani and a bunch of other elves show up and start…celebrating? \n";
    cout << "You're really confused by everyone's cheering until Yutani tells you that finding out who the villain was is a huge step forward towards stopping him. Jake has apparently been sabotaging almost every Christmas for the past decade, every year getting bolder and bolder. This comes as shocking news to you because, frankly, you hadn't noticed anything wrong with Christmas, but you ultimately decide to take the win and start celebrating with everyone else. \n";
    cout << "And of course, what better way to celebrate than to fully ignore the fact that there are still some problems that need fixing before Christmas and to march into the town square to make hot chocolate for everyone (free of charge! Santa has no need for money!).\n";
    cout << "In order to make hot chocolate you need to know everyone's preferences, whether they want vanilla, chocolate or salted caramel syrup (very important to elves), if they want it served boiling hot, warm, cool or iced and of course how much sugar they want to add (quantified in tablespoons).\n";
    cout << "You're given a list of everyone's preferences, each row having the three choices of only one elf. With this information you have to create the perfect cup for everyone. But before you can do this you have to sort them, first by syrup, than by temperature choice and in the end by the number of tablespoons of sugar that they use. In the end write the first choice for each syrup type. \n";
    cout << "Example:\n";
    cout << "    chocolate iced 5\n";
    cout << "    chocolate iced 2\n";
    cout << "    vanilla warm 1\n";
    cout << "    vanilla hot 2\n";
    cout << "After ordering the example becomes:\n";
    cout << "    chocolate iced 2\n";
    cout << "    chocolate iced 5\n";
    cout << "    vanilla hot 2\n";
    cout << "    vanilla warm 1\n";
    cout << "The final answer would be: chocolate iced 2 vanilla hot 2.\n";
    cout << "-----------------------------------\n";
}

void story24()
{
    cout << "With Christmas approaching soon, the elves realized wrapping the gifts by hand wasn't going to cut it, so they had to bust out the gift wrapping machine. But, devastatingly, the machine had broken down,  and was out of order. On top of that, the Grand Mechanic took a vacation and only left a trail of clues to figure out the magic code that will fix the machine. And of course, you were tasked with repairing this all powerful wrapping tool.\n";
    cout << "You picked the first piece of paper that had written on it:\n'Have fun repairing the machine, losers! First hint : my favorite number but with a caeser twist <3 \nPS : the input starts where the hints end'\n";
    cout << "You asked the elves if they had any clue what that number was. The elves took a moment to reminisce about the absent elf, and his unique physique - he always boasted about his four arms, and how 'handy' he is with everything - well, he wasn't the factory's best mechanic without reason. They all collectively agreed his lucky number is four, and gave you this answer in order to proceed with solving the puzzle.\n";
    cout << "Before they started, though, they also compiled a letter about the Grand Mechanic in order to help you down the line, seeing as the four armed elf loved inserting himself into his puzzles. It read like so: 'The Grand Mechanic : came to work here because he was looking for a demanding job, as crafting was his passionand nothing he worked on has kept him engaged for long enough.He has a powerfuland loud personality, loves annoying the small elvesand is a free, spirited soul.His name is Luca, always wears a grin on his face, and if he isnt passionately working on one of his machines he is surely 'testing' some of the game consoles in our vast gift deposit, or watching some weird cryptid cartoon.'\n";
    cout << "-----------------------------------\n";
}

void story25()
{
    cout << "Preparing for his trip around the world, Santa assigns his elves to make sure the reindeer are ready for the road. The elves quickly divided their duties: Snowball fed them, Peppermint took care of the festive decorations, and Jingle checked the harnesses. Still, in the end, the most important task hadn't been taken care of: shoeing the reindeer. It seems that the elf responsible for it, Holly, was away on vacation, on a trip to Tenerife, since he was sick of the moody, cold weather.\n";
    cout << "That's when chaos began: since Santa had to leave at any moment, all the elves began frantically searching through the storeroom to find the new horseshoes. Even after this commotion, they only managed to find 2 pairs (Holly was not the most organized elf), so they decided to use them for the reindeer who needed them the most.\n";
    cout << "Looking at the report of the last trips, they find, next to the name of each reindeer, a number written in the elf system (it's actually binary system, but the elves think they invented math) representing the damage level of each reindeer's current horseshoes.\n";
    cout << "Help the elves find the reindeer with 'high priority', whose horseshoes desperately need to be changed and save Christmas! (the resulting names should be displayed in alphabetical order)\n";
    cout << "Example:\n";
    cout << "    Dasher - 10100 \n";
    cout << "    Dancer - 11001 \n";
    cout << "    Prancer - 1111 \n";
    cout << "    Vixen - 1000 \n";
    cout << "    Comet - 1001010 \n";
    cout << "    Cupid - 11 \n";
    cout << "    Donner - 10100 \n";
    cout << "    Blitzen – 11000\n";
    cout << "The result should be: Comet Dancer\n";
}

void details()
{
    cout << "Yes hello welcome to my personal <advent of code> whose making totally didn't take me way longer than it should've...\n";
    cout << "In any case here are some details about the project:\n";
    cout << "- all of the full inputs are in the folder named <Input> (in case you wanted a different/ more difficult input than the example)\n";
    cout << "- currently it isn't finished (sadly) but it has reached a somewhat ok version (and the deadline is upon me) so here it is\n";
    cout << "- it doesn't have a translated romanian version and, when talking about the longer inputs, it doesn't have the <check result> feature (yet?)\n";
    cout << "- and perhaps the saddest news yet - there is currently no way to obtain stars for each correctly solved exercise (sobbing)\n";
}

void menu()
{
    cout << "choose the exercise:\n";
    cout << "===================================\n";
    cout << "-----------1.----------------------\n";
    cout << "-----------2.----------------------\n";
    cout << "-----------3.----------------------\n";
    cout << "-----------4.----------------------\n";
    cout << "-----------5.----------------------\n";
    cout << "-----------6.----------------------\n";
    cout << "-----------7.----------------------\n";
    cout << "-----------8.----------------------\n";
    cout << "-----------9.----------------------\n";
    cout << "-----------10.---------------------\n";
    cout << "-----------11.---------------------\n";
    cout << "-----------12.---------------------\n";
    cout << "-----------13.---------------------\n";
    cout << "-----------14.---------------------\n";
    cout << "-----------15.---------------------\n";
    cout << "-----------16.---------------------\n";
    cout << "-----------17.---------------------\n";
    cout << "-----------18.---------------------\n";
    cout << "-----------19.---------------------\n";
    cout << "-----------20.---------------------\n";
    cout << "-----------21.---------------------\n";
    cout << "-----------22.---------------------\n";
    cout << "-----------23.---------------------\n";
    cout << "-----------24.---------------------\n";
    cout << "-----------25.---------------------\n";
    cout << "-----------26. details / info------\n";
    cout << "-----------exit--------------------\n";
    cout << "===================================\n";
}

void menuChoice(int & ok)
{
    int choice;
    cin >> choice;
    switch (choice)
    {
        default:
            ok = 0;
            break;
        case 1:
            story1(prologue);
            break;
        case 2:
            story2();
            break;
        case 3:
            story3();
            break;
        case 4:
            story4();
            break;
        case 5:
            story5();
            break;
        case 6:
            story6();
            break;
        case 7:
            story7();
            break;
        case 8:
            story8();
            break;
        case 9:
            story9();
            break;
        case 10:
            story10();
            break;
        case 11:
            story11();
            break;
        case 12:
            story12();
            break;
        case 13:
            story13();
            break;
        case 14:
            story14();
            break;
        case 15:
            story15();
            break;
        case 16:
            story16();
            break;
        case 17:
            story17();
            break;
        case 18:
            story18();
            break;
        case 19:
            story19();
            break;
        case 20:
            story20();
            break;
        case 21:
            story21();
            break;
        case 22:
            story22();
            break;
        case 23:
            story23();
            break;
        case 24:
            story24();
            break;
        case 25:
            story25();
            break;
        case 26:
            details();
            break;
    }
}

void start()
{
    int choice, ok = 1;
    while (ok)
    {
        menu();
        menuChoice(ok);
    }
}

int main()
{
    start();
    return 0;
}