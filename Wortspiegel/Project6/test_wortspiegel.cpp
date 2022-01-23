// Datei: test_wortfunktionen.cpp

#include <string>
using namespace std;

#include "wortfunktionen.h"
#include "catch.h"

TEST_CASE("Ein Wort am Satzanfang wird um Position 1 gespiegelt") {
	string text = "Ein erster Satz. Ein zweiter Satz. Und ein dritter Satz.";

	wortspiegel(text, 1);

	REQUIRE(text == "niE erster Satz. Ein zweiter Satz. Und ein dritter Satz.");
}

TEST_CASE("Ein Wort am Satzanfang wird um Position 0 gespiegelt") {
	string text = "Ein erster Satz. Ein zweiter Satz. Und ein dritter Satz.";

	wortspiegel(text, 0);

	REQUIRE(text == "niE erster Satz. Ein zweiter Satz. Und ein dritter Satz.");
}

TEST_CASE("Ein Wort am Satzende wird gespiegelt. Mit Punkt am Satzende") {
	string text = "Ein erster Satz. Ein zweiter Satz. Und ein dritter Satz.";

	wortspiegel(text, text.length() - 2);

	REQUIRE(text == "Ein erster Satz. Ein zweiter Satz. Und ein dritter ztaS.");
}

TEST_CASE("Ein Wort am Satzende wird gespiegelt. Ohne Punkt am Satzende") {
	string text = "Ein erster Satz. Ein zweiter Satz. Und ein dritter Satz";

	wortspiegel(text, text.length() - 1);

	REQUIRE(text == "Ein erster Satz. Ein zweiter Satz. Und ein dritter ztaS");
}

TEST_CASE("Ein Punkt am Satzende wird gespiegelt (Text soll unveraendert bleiben)") {
	string text = "Ein erster Satz. Ein zweiter Satz. Und ein dritter Satz.";

	wortspiegel(text, text.length() - 1);

	REQUIRE(text == "Ein erster Satz. Ein zweiter Satz. Und ein dritter Satz.");
}

TEST_CASE("Ein Wort in der Satzmitte wird gespiegelt") {
	string text = "Ein erster Satz. Ein zweiter Satz. Und ein dritter Satz.";

	wortspiegel(text, string("Ein erster Satz. Ein ").length() + 2);

	REQUIRE(text == "Ein erster Satz. Ein retiewz Satz. Und ein dritter Satz.");
}

TEST_CASE("Ein langes Wort als Text") {
	string text = "AbCdEfG";

	wortspiegel(text, 0);

	REQUIRE(text == "GfEdCbA");
}

TEST_CASE("Leerzeichen an der Spiegelposition (Text soll unveraendert bleiben)") {
	string text = "Ein erster Satz. Ein zweiter Satz. Und ein dritter Satz.";

	wortspiegel(text, string("Ein erster").length());

	REQUIRE(text == "Ein erster Satz. Ein zweiter Satz. Und ein dritter Satz.");
}

TEST_CASE("Punkt an der Spiegelposition (Text soll unveraendert bleiben)") {
	string text = "Ein erster Satz. Ein zweiter Satz. Und ein dritter Satz.";

	wortspiegel(text, string("Ein erster Satz").length());

	REQUIRE(text == "Ein erster Satz. Ein zweiter Satz. Und ein dritter Satz.");
}

TEST_CASE("Spiegeln um Punkt am Satzanfang, gefolgt von einem Buchstaben (Text soll unveraendert bleiben)") {
	string text = ".Ein erster Satz. Ein zweiter Satz. Und ein dritter Satz.";

	wortspiegel(text, 0);

	REQUIRE(text == ".Ein erster Satz. Ein zweiter Satz. Und ein dritter Satz.");
}

TEST_CASE("Drei Punkte als Text, Spiegelposition 0 (Text soll unveraendert bleiben)") {
	string text = "...";

	wortspiegel(text, 0);

	REQUIRE(text == "...");
}

TEST_CASE("Drei Punkte als Text, Spiegelposition 1 (Text soll unveraendert bleiben)") {
	string text = "...";

	wortspiegel(text, 1);

	REQUIRE(text == "...");
}

TEST_CASE("Zwei Punkte als Text, Spiegelposition 0 (Text soll unveraendert bleiben)") {
	string text = "..";

	wortspiegel(text, 0);

	REQUIRE(text == "..");
}

TEST_CASE("Zwei Punkte als Text, Spiegelposition 1 (Text soll unveraendert bleiben)") {
	string text = "..";

	wortspiegel(text, 1);

	REQUIRE(text == "..");
}

TEST_CASE("Ein Punkt als Text (Text soll unveraendert bleiben)") {
	string text = ".";

	wortspiegel(text, 0);

	REQUIRE(text == ".");
}

TEST_CASE("Drei Leerzeichen als Text, Spiegelposition 0 (Text soll unveraendert bleiben)") {
	string text = "   ";

	wortspiegel(text, 0);

	REQUIRE(text == "   ");
}

TEST_CASE("Drei Leerzeichen als Text, Spiegelposition 1 (Text soll unveraendert bleiben)") {
	string text = "   ";

	wortspiegel(text, 1);

	REQUIRE(text == "   ");
}

TEST_CASE("Zwei Leerzeichen als Text, Spiegelposition 0 (Text soll unveraendert bleiben)") {
	string text = "  ";

	wortspiegel(text, 0);

	REQUIRE(text == "  ");
}

TEST_CASE("Zwei Leerzeichen als Text, Spiegelposition 1 (Text soll unveraendert bleiben)") {
	string text = "  ";

	wortspiegel(text, 1);

	REQUIRE(text == "  ");
}

TEST_CASE("Ein Leerzeichen als Text (Text soll unveraendert bleiben)") {
	string text = " ";

	wortspiegel(text, 0);

	REQUIRE(text == " ");
}

TEST_CASE("Punkte und Leerzeichen als Text, Spiegelposition 0 (Text soll unveraendert bleiben)") {
	string text = ". .";

	wortspiegel(text, 0);

	REQUIRE(text == ". .");
}

TEST_CASE("Punkte und Leerzeichen als Text, Spiegelposition 1 (Text soll unveraendert bleiben)") {
	string text = ". .";

	wortspiegel(text, 1);

	REQUIRE(text == ". .");
}
