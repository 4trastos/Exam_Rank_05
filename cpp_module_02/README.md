## 🇬🇧 English
Assignment name  : cpp_module_02
Expected files   : Warlock.cpp Warlock.hpp
                   ASpell.hpp ASpell.cpp
				   ATarget.hpp ATarget.cpp
				   Fwoosh.hpp Fwoosh.cpp
				   Dummy.hpp Dummy.cpp
				   Fireball.hpp Fireball.cpp
				   Polymorph.hpp Polymorph.cpp
				   BrickWall.hpp BrickWall.cpp
				   SpellBook.hpp SpellBook.cpp
				   TargetGenerator.hpp TargetGenerator.cpp
--------------------------------------------------------------------------------

In the Warlock, SpellBook and TargetGenerator classes, the switch statement is
FORBIDDEN and its use would result in a -42.

Create the following two spells, on the same model as Fwoosh:

* Fireball (Name: "Fireball", Effects: "burnt to a crisp")
* Polymorph (Name: "Polymorph", Effects: "turned into a critter")

In addition to this, just so he won't have only dummy to attack, let's make a
new target for him, which will be the BrickWall (Type: "Inconspicuous Red-brick Wall").

Now, make a SpellBook class, in canonical form, that can't be copied or instantiated
by copy. It will have the following functions:

* void learnSpell(ASpell*), that COPIES a spell in the book
* void forgetSpell(string const &), that deletes a spell from the book, except
  if it isn't there
* ASpell* createSpell(string const &), that receives a string corresponding to
  the name of a spell, creates it, and returns it.

Modify the Warlock, now, make it have a spell book that will be created with
him and destroyed with him. Also make his learnSpell and forgetSpell functions
call those of the spell book.

The launchSpell function will have to use the SpellBook to create the spell
it's attempting to launch.

Make a TargetGenerator class, in canonical form, and as before,
non-copyable.

It will have the following functions:

* void learnTargetType(ATarget*), teaches a target to the generator

* void forgetTargetType(string const &), that makes the generator forget a
  target type if it's known

* ATarget* createTarget(string const &), that creates a target of the
  specified type

Phew, that's done. Now here's a test main. It's not very thorough, so make sure 
to use your own aswell.

int main()
{
  Warlock richard("Richard", "foo");
  richard.setTitle("Hello, I'm Richard the Warlock!");
  BrickWall model1;

  Polymorph* polymorph = new Polymorph();
  TargetGenerator tarGen;

  tarGen.learnTargetType(&model1);
  richard.learnSpell(polymorph);

  Fireball* fireball = new Fireball();

  richard.learnSpell(fireball);

  ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

  richard.introduce();
  richard.launchSpell("Polymorph", *wall);
  richard.launchSpell("Fireball", *wall);
}

~$ ./a.out | cat -e
Richard: This looks like another boring day.$
Richard: I am Richard, Hello, I'm Richard the Warlock!!$
Inconspicuous Red-brick Wall has been turned into a critter!$
Inconspicuous Red-brick Wall has been burnt to a crisp!$
Richard: My job here is done!$
~$

## 🇪🇸 Español

Nombre de la asignación: cpp_module_02
Archivos esperados: Warlock.cpp Warlock.hpp
ASpell.hpp ASpell.cpp
ATarget.hpp ATarget.cpp
Fwoosh.hpp Fwoosh.cpp
Dummy.hpp Dummy.cpp
Fireball.hpp Fireball.cpp
Polymorph.hpp Polymorph.cpp
BrickWall.hpp BrickWall.cpp
SpellBook.hpp SpellBook.cpp
TargetGenerator.hpp TargetGenerator.cpp
--------------------------------------------------------------------------------

En las clases Warlock, SpellBook y TargetGenerator, la declaración switch está
PROHIBIDA y su uso daría como resultado un -42.

Crea los dos hechizos siguientes, en el mismo modelo que Fwoosh:

* Fireball (Name: "Fireball", Effects: "burnt to a crisp")
* Polymorph (Name: "Polymorph", Effects: "turned into a critter")

Además de esto, para que no tenga que atacar solo a un muñeco, vamos a crear un
nuevo objetivo para él, que será BrickWall (Tipo: "Inconspicuous Red-brick Wall").

Ahora, crea una clase SpellBook, en forma canónica, que no pueda copiarse ni instanciarse
mediante copia. Tendrá las siguientes funciones:

* void learnSpell(ASpell*), que COPIA un hechizo en el libro
* void forgetSpell(string const &), que elimina un hechizo del libro, excepto
si no está allí
* ASpell* createSpell(string const &), que recibe una cadena correspondiente al
nombre de un hechizo, lo crea y lo devuelve.

Modifica al Brujo, ahora, haz que tenga un libro de hechizos que se creará con él y se destruirá con él. También haz que sus funciones learnSpell y forgetSpell
llamen a las del libro de hechizos.

La función launchSpell tendrá que usar SpellBook para crear el hechizo
que está intentando lanzar.

Crea una clase TargetGenerator, en forma canónica y, como antes,
no copiable.

Tendrá las siguientes funciones:

* void learnTargetType(ATarget*), enseña un objetivo al generador

* void forgetTargetType(string const &), que hace que el generador olvide un
tipo de objetivo si se conoce

* ATarget* createTarget(string const &), que crea un objetivo del
tipo especificado

Uf, eso está hecho. Ahora, aquí hay una prueba principal. No es muy completa, así que asegúrate de usar la tuya también.

int main()
{
  Warlock richard("Richard", "foo");
  richard.setTitle("Hello, I'm Richard the Warlock!");
  BrickWall model1;

  Polymorph* polymorph = new Polymorph();
  TargetGenerator tarGen;

  tarGen.learnTargetType(&model1);
  richard.learnSpell(polymorph);

  Fireball* fireball = new Fireball();

  richard.learnSpell(fireball);

  ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

  richard.introduce();
  richard.launchSpell("Polymorph", *wall);
  richard.launchSpell("Fireball", *wall);
}

~$ ./a.out | cat -e
Richard: This looks like another boring day.$
Richard: I am Richard, Hello, I'm Richard the Warlock!!$
Inconspicuous Red-brick Wall has been turned into a critter!$
Inconspicuous Red-brick Wall has been burnt to a crisp!$
Richard: My job here is done!$
~$
