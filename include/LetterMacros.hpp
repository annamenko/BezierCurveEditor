#ifndef LETTERMACROS_HPP
#define LETTERMACROS_HPP

#include <QJsonObject>
#include <QJsonDocument>
#include <QFile>

#include "graphicspainter.hpp"

class LettersFactory
{
public:
    static GraphicsPainter* GetLetter(char symb, QPoint& coords);
    static QJsonObject GetJsonFromFile(QString path);
    static void SaveJsonToFile(QString path, QJsonObject& object);

private:
    static GraphicsPainter* LI(QPoint& coords) noexcept;
    static GraphicsPainter* LL(QPoint& coords) noexcept;
    static GraphicsPainter* LJ(QPoint& coords) noexcept;
    static GraphicsPainter* LT(QPoint& coords) noexcept;
    static GraphicsPainter* LH(QPoint& coords) noexcept;
    static GraphicsPainter* LF(QPoint& coords) noexcept;
    static GraphicsPainter* LN(QPoint& coords) noexcept;
    static GraphicsPainter* LM(QPoint& coords) noexcept;
    static GraphicsPainter* LV(QPoint& coords) noexcept;
    static GraphicsPainter* LX(QPoint& coords) noexcept;
    static GraphicsPainter* LE(QPoint& coords) noexcept;
    static GraphicsPainter* LZ(QPoint& coords) noexcept;
    static GraphicsPainter* LK(QPoint& coords) noexcept;
    static GraphicsPainter* LW(QPoint& coords) noexcept;
    static GraphicsPainter* LY(QPoint& coords) noexcept;
    static GraphicsPainter* LR(QPoint& coords) noexcept;
    static GraphicsPainter* LA(QPoint& coords) noexcept;
    static GraphicsPainter* LC(QPoint& coords) noexcept;
    static GraphicsPainter* LD(QPoint& coords) noexcept;
    static GraphicsPainter* LO(QPoint& coords) noexcept;
    static GraphicsPainter* LP(QPoint& coords) noexcept;
    static GraphicsPainter* LU(QPoint& coords) noexcept;
    static GraphicsPainter* LQ(QPoint& coords) noexcept;
    static GraphicsPainter* Lk(QPoint& coords) noexcept;
    static GraphicsPainter* Ll(QPoint& coords) noexcept;
    static GraphicsPainter* Lc(QPoint& coords) noexcept;
    static GraphicsPainter* Lf(QPoint& coords) noexcept;
    static GraphicsPainter* Lh(QPoint& coords) noexcept;
    static GraphicsPainter* Lb(QPoint& coords) noexcept;
    static GraphicsPainter* Ld(QPoint& coords) noexcept;
    static GraphicsPainter* La(QPoint& coords) noexcept;
    static GraphicsPainter* Lg(QPoint& coords) noexcept;
    static GraphicsPainter* Le(QPoint& coords) noexcept;
    static GraphicsPainter* Lv(QPoint& coords) noexcept;
    static GraphicsPainter* Lw(QPoint& coords) noexcept;
    static GraphicsPainter* Lz(QPoint& coords) noexcept;
    static GraphicsPainter* Lx(QPoint& coords) noexcept;
    static GraphicsPainter* Lu(QPoint& coords) noexcept;
    static GraphicsPainter* Lt(QPoint& coords) noexcept;
    static GraphicsPainter* Ly(QPoint& coords) noexcept;
    static GraphicsPainter* Lp(QPoint& coords) noexcept;
    static GraphicsPainter* Lq(QPoint& coords) noexcept;
    static GraphicsPainter* Lr(QPoint& coords) noexcept;
    static GraphicsPainter* Ln(QPoint& coords) noexcept;
    static GraphicsPainter* Lm(QPoint& coords) noexcept;
    static GraphicsPainter* LS(QPoint& coords) noexcept;
    static GraphicsPainter* Lo(QPoint& coords) noexcept;
    static GraphicsPainter* Ls(QPoint& coords) noexcept;
    static GraphicsPainter* LG(QPoint& coords) noexcept;
    static GraphicsPainter* Lpoint(QPoint& coords) noexcept;
    static GraphicsPainter* Lcolon(QPoint& coords) noexcept;
    static GraphicsPainter* Lexpoi(QPoint& coords) noexcept;
    static GraphicsPainter* Lminus(QPoint& coords) noexcept;
    static GraphicsPainter* Lequally(QPoint& coords) noexcept;
    static GraphicsPainter* Lplus(QPoint& coords) noexcept;
    static GraphicsPainter* Lcomma(QPoint& coords) noexcept;
    static GraphicsPainter* Lslashr(QPoint& coords) noexcept;
    static GraphicsPainter* Lless(QPoint& coords) noexcept;
    static GraphicsPainter* Lmore(QPoint& coords) noexcept;
    static GraphicsPainter* Lchapl(QPoint& coords) noexcept;
    static GraphicsPainter* Lchapr(QPoint& coords) noexcept;
    static GraphicsPainter* Llower(QPoint& coords) noexcept;
    static GraphicsPainter* Lunit(QPoint& coords) noexcept;
    static GraphicsPainter* Ltwo(QPoint& coords) noexcept;
    static GraphicsPainter* Lthree(QPoint& coords) noexcept;
    static GraphicsPainter* Lfour(QPoint& coords) noexcept;
    static GraphicsPainter* Lfive(QPoint& coords) noexcept;
    static GraphicsPainter* Lsix(QPoint& coords) noexcept;
    static GraphicsPainter* Lseven(QPoint& coords) noexcept;
    static GraphicsPainter* Leight(QPoint& coords) noexcept;
    static GraphicsPainter* Lnine(QPoint& coords) noexcept;
    static GraphicsPainter* Lzero(QPoint& coords) noexcept;
    static GraphicsPainter* Lkaw(QPoint& coords) noexcept;
    static GraphicsPainter* LB(QPoint& coords) noexcept;
    static GraphicsPainter* Li(QPoint& coords) noexcept;
    static GraphicsPainter* Lj(QPoint& coords) noexcept;
    static GraphicsPainter* Lup(QPoint& coords) noexcept;
    static GraphicsPainter* Lslashl(QPoint& coords) noexcept;
    static GraphicsPainter* Lpoicol(QPoint& coords) noexcept;
    static GraphicsPainter* Lkawi(QPoint& coords) noexcept;
    static GraphicsPainter* Lqw(QPoint& coords) noexcept;
    static GraphicsPainter* Lcleft(QPoint& coords) noexcept;
    static GraphicsPainter* Lcright(QPoint& coords) noexcept;
    static GraphicsPainter* Lslsl(QPoint& coords) noexcept;
    static GraphicsPainter* Lstar(QPoint& coords) noexcept;
    static GraphicsPainter* Ldollar(QPoint& coords) noexcept;
};

inline GraphicsPainter*LettersFactory::GetLetter(char symb, QPoint& coords)
{
    switch (symb)
        {
    case 'I':
        return LI(coords);
    case 'L':
        return LL(coords);
    case 'J':
        return LJ(coords);
    case 'T':
        return LT(coords);
    case 'H':
        return LH(coords);
    case 'F':
        return LF(coords);
    case 'N':
        return LN(coords);
    case 'M':
        return LM(coords);
    case 'V':
        return LV(coords);
    case 'X':
        return LX(coords);
    case 'E':
        return LE(coords);
    case 'Z':
        return LZ(coords);
    case 'K':
        return LK(coords);
    case 'W':
        return LW(coords);
    case 'Y':
        return LY(coords);
    case 'R':
        return LR(coords);
    case 'A':
        return LA(coords);
    case 'C':
        return LC(coords);
    case 'D':
        return LD(coords);
    case 'O':
        return LO(coords);
    case 'P':
        return LP(coords);
    case 'U':
        return LU(coords);
    case 'Q':
        return LQ(coords);
    case 'k':
        return Lk(coords);
    case 'l':
        return Ll(coords);
    case 'c':
        return Lc(coords);
    case 'f':
        return Lf(coords);
    case 'h':
        return Lh(coords);
    case 'b':
        return Lb(coords);
    case 'd':
        return Ld(coords);
    case 'a':
        return La(coords);
    case 'g':
        return Lg(coords);
    case 'e':
        return Le(coords);
    case 'v':
        return Lv(coords);
    case 'w':
        return Lw(coords);
    case 'z':
        return Lz(coords);
    case 'x':
        return Lx(coords);
    case 'u':
        return Lu(coords);
    case 't':
        return Lt(coords);
    case 'y':
        return Ly(coords);
    case 'p':
        return Lp(coords);
    case 'q':
        return Lq(coords);
    case 'r':
        return Lr(coords);
    case 'n':
        return Ln(coords);
    case 'm':
        return Lm(coords);
    case 'S':
        return LS(coords);
    case 'o':
        return Lo(coords);
    case 's':
        return Ls(coords);
    case 'G':
        return LG(coords);
    case '.':
        return Lpoint(coords);
    case ':':
        return Lcolon(coords);
    case '!':
        return Lexpoi(coords);
    case '-':
        return Lminus(coords);
    case '=':
        return Lequally(coords);
    case '+':
        return Lplus(coords);
    case ',':
        return Lcomma(coords);
    case '/':
        return Lslashr(coords);
    case '<':
        return Lless(coords);
    case '>':
        return Lmore(coords);
    case ']':
        return Lchapl(coords);
    case '[':
        return Lchapr(coords);
    case '_':
        return Llower(coords);
    case '1':
        return Lunit(coords);
    case '2':
        return Ltwo(coords);
    case '3':
        return Lthree(coords);
    case '4':
        return Lfour(coords);
    case '5':
        return Lfive(coords);
    case '6':
        return Lsix(coords);
    case '7':
        return Lseven(coords);
    case '8':
        return Leight(coords);
    case '9':
        return Lnine(coords);
    case '0':
        return Lzero(coords);
    case '\'':
        return Lkaw(coords);
    case 'B':
        return LB(coords);
    case 'i':
        return Li(coords);
    case 'j':
        return Lj(coords);
    case '\"':
        return Lup(coords);
    case '\\':
        return Lslashl(coords);
    case ';':
        return Lpoicol(coords);
    case '^':
        return Lkawi(coords);
    case '?':
        return Lqw(coords);
    case ')':
        return Lcleft(coords);
    case '(':
        return Lcright(coords);
    case '|':
        return Lslsl(coords);
    case '*':
        return Lstar(coords);
    case '$':
        return Ldollar(coords);
    }
    return nullptr;
}

inline QJsonObject LettersFactory::GetJsonFromFile(QString path)
{
    QFile jsonFile(path);
    if (!jsonFile.open(QIODevice::ReadOnly))
    {
        throw "Couldn't open file";
    }

    QByteArray jsonData = jsonFile.readAll();
    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);
    jsonFile.close();

    return jsonDoc.object();
}

inline void LettersFactory::SaveJsonToFile(QString path, QJsonObject &object)
{
    QFile jsonFile(path);
    if (!jsonFile.open(QIODevice::WriteOnly))
    {
        throw "Couldn't save file";
    }
    jsonFile.write(QJsonDocument(object).toJson(QJsonDocument::Indented));
    jsonFile.close();
}

inline GraphicsPainter*LettersFactory::LI(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(10 + coords.x(), 15));
    gbi->addControls1(QPoint(20 + coords.x(), 15));
    gbi->addControls1(QPoint(20 + coords.x(), 55));
    gbi->addControls1(QPoint(10 + coords.x(), 55));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 55));
    gbi->addControls1(QPoint(30 + coords.x(), 55));
    gbi->addControls1(QPoint(30 + coords.x(), 15));
    gbi->addControls1(QPoint(40 + coords.x(), 15));
    gbi->addControls1(QPoint(40 + coords.x(), 10));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::LJ(QPoint &coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 40));
    gbi->addControls1(QPoint(13 + coords.x(), 55));
    gbi->addControls1(QPoint(25 + coords.x(), 60));
    gbi->addControls1(QPoint(35 + coords.x(), 56));
    gbi->addControls1(QPoint(39 + coords.x(), 49));
    gbi->addControls1(QPoint(40 + coords.x(), 41));
    gbi->addControls1(QPoint(40 + coords.x(), 10));
    gbi->addControls1(QPoint(30 + coords.x(), 10));
    gbi->addControls1(QPoint(30 + coords.x(), 40));
    gbi->addControls1(QPoint(28 + coords.x(), 47));
    gbi->addControls1(QPoint(25 + coords.x(), 48));
    gbi->addControls1(QPoint(21 + coords.x(), 47));
    gbi->addControls1(QPoint(20 + coords.x(), 40));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::LL(QPoint &coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 50));
    gbi->addControls1(QPoint(20 + coords.x(), 50));
    gbi->addControls1(QPoint(20 + coords.x(), 10));
    coords = QPoint(coords.x() + 35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::LT(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(10 + coords.x(), 20));
    gbi->addControls1(QPoint(22 + coords.x(), 20));
    gbi->addControls1(QPoint(22 + coords.x(), 60));
    gbi->addControls1(QPoint(32 + coords.x(), 60));
    gbi->addControls1(QPoint(32 + coords.x(), 20));
    gbi->addControls1(QPoint(42 + coords.x(), 20));
    gbi->addControls1(QPoint(42 + coords.x(), 10));
    coords = QPoint(coords.x() +37, 0);
    return gbi;
}
inline GraphicsPainter*LettersFactory::LH(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(18 + coords.x(), 60));
    gbi->addControls1(QPoint(18 + coords.x(), 40));
    gbi->addControls1(QPoint(32 + coords.x(), 40));
    gbi->addControls1(QPoint(32 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 10));
    gbi->addControls1(QPoint(32 + coords.x(), 10));
    gbi->addControls1(QPoint(32 + coords.x(), 30));
    gbi->addControls1(QPoint(18 + coords.x(), 30));
    gbi->addControls1(QPoint(18 + coords.x(), 10));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::LF(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(20 + coords.x(), 60));
    gbi->addControls1(QPoint(20 + coords.x(), 40));
    gbi->addControls1(QPoint(40 + coords.x(), 40));
    gbi->addControls1(QPoint(40 + coords.x(), 33));
    gbi->addControls1(QPoint(20 + coords.x(), 33));
    gbi->addControls1(QPoint(20 + coords.x(), 23));
    gbi->addControls1(QPoint(40 + coords.x(), 23));
    gbi->addControls1(QPoint(40 + coords.x(), 10));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::LN(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(17 + coords.x(), 60));
    gbi->addControls1(QPoint(17 + coords.x(), 25));
    gbi->addControls1(QPoint(33 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 10));
    gbi->addControls1(QPoint(33 + coords.x(), 10));
    gbi->addControls1(QPoint(33 + coords.x(), 45));
    gbi->addControls1(QPoint(17 + coords.x(), 10));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::LM(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(16 + coords.x(), 60));
    gbi->addControls1(QPoint(16 + coords.x(), 50));
    gbi->addControls1(QPoint(14 + coords.x(), 20));
    gbi->addControls1(QPoint(23 + coords.x(), 60));
    gbi->addControls1(QPoint(27 + coords.x(), 60));
    gbi->addControls1(QPoint(36 + coords.x(), 20));
    gbi->addControls1(QPoint(34 + coords.x(), 50));
    gbi->addControls1(QPoint(34 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 10));
    gbi->addControls1(QPoint(34 + coords.x(), 10));
    gbi->addControls1(QPoint(25 + coords.x(), 45));
    gbi->addControls1(QPoint(16 + coords.x(), 10));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::LV(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(18 + coords.x(), 60));
    gbi->addControls1(QPoint(32 + coords.x() ,60));
    gbi->addControls1(QPoint(40 + coords.x(), 10));
    gbi->addControls1(QPoint(30 + coords.x(), 10));
    gbi->addControls1(QPoint(25 + coords.x(), 50));
    gbi->addControls1(QPoint(20 + coords.x(), 10));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::LX(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(22 + coords.x(), 35));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(20 + coords.x(), 60));
    gbi->addControls1(QPoint(25 + coords.x(), 40));
    gbi->addControls1(QPoint(30 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 60));
    gbi->addControls1(QPoint(28 + coords.x(), 35));
    gbi->addControls1(QPoint(40 + coords.x(), 10));
    gbi->addControls1(QPoint(30 + coords.x(), 10));
    gbi->addControls1(QPoint(25 + coords.x(), 30));
    gbi->addControls1(QPoint(20 + coords.x(), 10));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::LE(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 50));
    gbi->addControls1(QPoint(20 + coords.x(), 50));
    gbi->addControls1(QPoint(20 + coords.x(), 40));
    gbi->addControls1(QPoint(40 + coords.x(), 40));
    gbi->addControls1(QPoint(40 + coords.x(), 30));
    gbi->addControls1(QPoint(20 + coords.x(), 30));
    gbi->addControls1(QPoint(20 + coords.x(), 20));
    gbi->addControls1(QPoint(40 + coords.x(), 20));
    gbi->addControls1(QPoint(40 + coords.x(), 10));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::LZ(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(10 + coords.x(), 20));
    gbi->addControls1(QPoint(33 + coords.x(), 20));
    gbi->addControls1(QPoint(10 + coords.x(), 52));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 50));
    gbi->addControls1(QPoint(15 + coords.x(), 50));
    gbi->addControls1(QPoint(40 + coords.x(), 18));
    gbi->addControls1(QPoint(40 + coords.x(), 10));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::LK(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(16 + coords.x(), 60));
    gbi->addControls1(QPoint(16 + coords.x(), 40));
    gbi->addControls1(QPoint(25 + coords.x(), 48));
    gbi->addControls1(QPoint(30 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 60));
    gbi->addControls1(QPoint(25 + coords.x(), 40));
    gbi->addControls1(QPoint(40 + coords.x(), 10));
    gbi->addControls1(QPoint(30 + coords.x(), 10));
    gbi->addControls1(QPoint(25 + coords.x(), 32));
    gbi->addControls1(QPoint(16 + coords.x(), 30));
    gbi->addControls1(QPoint(16 + coords.x(), 10));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::LW(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(14 + coords.x(), 60));
    gbi->addControls1(QPoint(20 + coords.x(), 60));
    gbi->addControls1(QPoint(25 + coords.x() ,30));
    gbi->addControls1(QPoint(30 + coords.x(), 60));
    gbi->addControls1(QPoint(36 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 10));
    gbi->addControls1(QPoint(35 + coords.x(), 10));
    gbi->addControls1(QPoint(32 + coords.x(), 40));
    gbi->addControls1(QPoint(28 + coords.x(), 10));
    gbi->addControls1(QPoint(22 + coords.x(), 10));
    gbi->addControls1(QPoint(18 + coords.x(), 40));
    gbi->addControls1(QPoint(15 + coords.x(), 10));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::LY(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(20 + coords.x(), 40));
    gbi->addControls1(QPoint(20 + coords.x(), 60));
    gbi->addControls1(QPoint(30 + coords.x(), 60));
    gbi->addControls1(QPoint(30 + coords.x(), 40));
    gbi->addControls1(QPoint(40 + coords.x(), 10));
    gbi->addControls1(QPoint(30 + coords.x(), 10));
    gbi->addControls1(QPoint(25 + coords.x(), 40));
    gbi->addControls1(QPoint(20 + coords.x(), 10));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter *LettersFactory::LR(QPoint &coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 13));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(19 + coords.x(), 60));
    gbi->addControls1(QPoint(19 + coords.x(), 42));
    gbi->addControls1(QPoint(27 + coords.x(), 42));
    gbi->addControls1(QPoint(33 + coords.x(), 60));
    gbi->addControls1(QPoint(42 + coords.x(), 60));
    gbi->addControls1(QPoint(33 + coords.x(), 39));
    gbi->addControls1(QPoint(38 + coords.x(), 32));
    gbi->addControls1(QPoint(41 + coords.x(), 23));
    gbi->addControls1(QPoint(36 + coords.x(), 13));
    gbi->addControls1(QPoint(24 + coords.x(), 10));

    gbi->addControls2(QPoint(19 + coords.x(), 20));
    gbi->addControls2(QPoint(19 + coords.x(), 35));
    gbi->addControls2(QPoint(27 + coords.x(), 35));
    gbi->addControls2(QPoint(31 + coords.x(), 30));
    gbi->addControls2(QPoint(30 + coords.x(), 23));
    gbi->addControls2(QPoint(27 + coords.x(), 20));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::LA(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(15 + coords.x(), 60));
    gbi->addControls1(QPoint(18 + coords.x(), 45));
    gbi->addControls1(QPoint(32 + coords.x(), 45));
    gbi->addControls1(QPoint(35 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 60));
    gbi->addControls1(QPoint(30 + coords.x(), 10));
    gbi->addControls1(QPoint(20 + coords.x(), 10));
    gbi->addControls2(QPoint(25 + coords.x(), 20));
    gbi->addControls2(QPoint(20 + coords.x(), 40));
    gbi->addControls2(QPoint(30 + coords.x(), 40));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}
inline GraphicsPainter*LettersFactory::LC(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(30 + coords.x(), 40));
    gbi->addControls1(QPoint(40 + coords.x(), 40));
    gbi->addControls1(QPoint(39 + coords.x(), 50));
    gbi->addControls1(QPoint(36 + coords.x(), 55));
    gbi->addControls1(QPoint(31 + coords.x(), 59));
    gbi->addControls1(QPoint(25 + coords.x(), 60));
    gbi->addControls1(QPoint(20 + coords.x(), 59));
    gbi->addControls1(QPoint(15 + coords.x(), 56));
    gbi->addControls1(QPoint(11 + coords.x(), 49));
    gbi->addControls1(QPoint(10 + coords.x(), 40));
    gbi->addControls1(QPoint(10 + coords.x(), 37));
    gbi->addControls1(QPoint(10 + coords.x(), 30));
    gbi->addControls1(QPoint(11 + coords.x(), 24));
    gbi->addControls1(QPoint(13 + coords.x(), 18));
    gbi->addControls1(QPoint(16 + coords.x(), 14));
    gbi->addControls1(QPoint(20 + coords.x(), 11));
    gbi->addControls1(QPoint(25 + coords.x(), 10));
    gbi->addControls1(QPoint(31 + coords.x(), 11));
    gbi->addControls1(QPoint(36 + coords.x(), 15));
    gbi->addControls1(QPoint(39 + coords.x(), 20));
    gbi->addControls1(QPoint(40 + coords.x(), 30));
    gbi->addControls1(QPoint(30 + coords.x(), 30));

    gbi->addControls1(QPoint(30 + coords.x(), 26));
    gbi->addControls1(QPoint(29 + coords.x(), 23));
    gbi->addControls1(QPoint(27 + coords.x(), 21));
    gbi->addControls1(QPoint(25 + coords.x(), 21));
    gbi->addControls1(QPoint(23 + coords.x(), 21));
    gbi->addControls1(QPoint(20 + coords.x(), 23));
    gbi->addControls1(QPoint(18 + coords.x(), 30));
    gbi->addControls1(QPoint(18 + coords.x(), 37));
    gbi->addControls1(QPoint(18 + coords.x(), 38));
    gbi->addControls1(QPoint(19 + coords.x(), 46));
    gbi->addControls1(QPoint(22 + coords.x(), 50));
    gbi->addControls1(QPoint(26 + coords.x(), 51));
    gbi->addControls1(QPoint(30 + coords.x(), 48));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::LD(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(22 + coords.x(), 60));
    gbi->addControls1(QPoint(31 + coords.x(), 57));
    gbi->addControls1(QPoint(39 + coords.x(), 45));
    gbi->addControls1(QPoint(40 + coords.x(), 36));
    gbi->addControls1(QPoint(40 + coords.x(), 34));
    gbi->addControls1(QPoint(39 + coords.x(), 25));
    gbi->addControls1(QPoint(31 + coords.x(), 13));
    gbi->addControls1(QPoint(22 + coords.x(), 10));

    gbi->addControls2(QPoint(17 + coords.x(), 20));
    gbi->addControls2(QPoint(17 + coords.x(), 50));
    gbi->addControls2(QPoint(22 + coords.x(), 50));
    gbi->addControls2(QPoint(27 + coords.x(), 46));
    gbi->addControls2(QPoint(30 + coords.x(), 36));
    gbi->addControls2(QPoint(27 + coords.x(), 26));
    gbi->addControls2(QPoint(22 + coords.x(), 20));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::LO(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(25 + coords.x(), 60));
    gbi->addControls1(QPoint(32 + coords.x(), 56));
    gbi->addControls1(QPoint(37 + coords.x(), 50));
    gbi->addControls1(QPoint(39 + coords.x(), 45));
    gbi->addControls1(QPoint(40 + coords.x(), 35));
    gbi->addControls1(QPoint(39 + coords.x(), 25));
    gbi->addControls1(QPoint(37 + coords.x(), 20));
    gbi->addControls1(QPoint(32 + coords.x(), 14));
    gbi->addControls1(QPoint(25 + coords.x(), 11));
    gbi->addControls1(QPoint(17 + coords.x(), 14));
    gbi->addControls1(QPoint(13 + coords.x(), 20));
    gbi->addControls1(QPoint(11 + coords.x(), 25));
    gbi->addControls1(QPoint(9 + coords.x(), 35));
    gbi->addControls1(QPoint(11 + coords.x(), 45));
    gbi->addControls1(QPoint(13 + coords.x(), 50));
    gbi->addControls1(QPoint(17 + coords.x(), 56));

    gbi->addControls2(QPoint(19 + coords.x(), 41));
    gbi->addControls2(QPoint(25 + coords.x(), 46));
    gbi->addControls2(QPoint(31 + coords.x(), 41));
    gbi->addControls2(QPoint(31 + coords.x(), 30));
    gbi->addControls2(QPoint(25 + coords.x(), 25));
    gbi->addControls2(QPoint(19 + coords.x(), 30));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::LP(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(19 + coords.x(), 60));
    gbi->addControls1(QPoint(19 + coords.x(), 42));
    gbi->addControls1(QPoint(27 + coords.x(), 42));
    gbi->addControls1(QPoint(35 + coords.x(), 39));
    gbi->addControls1(QPoint(40 + coords.x(), 30));
    gbi->addControls1(QPoint(40 + coords.x(), 23));
    gbi->addControls1(QPoint(38 + coords.x(), 14));
    gbi->addControls1(QPoint(27 + coords.x(), 10));

    gbi->addControls2(QPoint(19 + coords.x(), 19));
    gbi->addControls2(QPoint(19 + coords.x(), 34));
    gbi->addControls2(QPoint(31 + coords.x(), 31));
    gbi->addControls2(QPoint(31 + coords.x(), 21));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::LU(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(10 + coords.x(), 40));
    gbi->addControls1(QPoint(12 + coords.x(), 50));
    gbi->addControls1(QPoint(16 + coords.x(), 56));
    gbi->addControls1(QPoint(26 + coords.x(), 60));
    gbi->addControls1(QPoint(35 + coords.x(), 56));
    gbi->addControls1(QPoint(39 + coords.x(), 50));
    gbi->addControls1(QPoint(40 + coords.x(), 40));
    gbi->addControls1(QPoint(40 + coords.x(), 10));
    gbi->addControls1(QPoint(30 + coords.x(), 10));
    gbi->addControls1(QPoint(30 + coords.x(), 40));
    gbi->addControls1(QPoint(29 + coords.x(), 45));
    gbi->addControls1(QPoint(22 + coords.x(), 45));
    gbi->addControls1(QPoint(20 + coords.x(), 40));
    gbi->addControls1(QPoint(20 + coords.x(), 10));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::LQ(QPoint& coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(25 + coords.x(), 60));
    gbi->addControls1(QPoint(25 + coords.x(), 60));
    gbi->addControls1(QPoint(35 + coords.x(), 67));
    gbi->addControls1(QPoint(39 + coords.x(), 63));
    gbi->addControls1(QPoint(32 + coords.x(), 56));
    gbi->addControls1(QPoint(37 + coords.x(), 50));
    gbi->addControls1(QPoint(39 + coords.x(), 45));
    gbi->addControls1(QPoint(40 + coords.x(), 35));
    gbi->addControls1(QPoint(39 + coords.x(), 25));
    gbi->addControls1(QPoint(37 + coords.x(), 20));
    gbi->addControls1(QPoint(32 + coords.x(), 14));
    gbi->addControls1(QPoint(25 + coords.x(), 11));
    gbi->addControls1(QPoint(17 + coords.x(), 14));
    gbi->addControls1(QPoint(13 + coords.x(), 20));
    gbi->addControls1(QPoint(11 + coords.x(), 25));
    gbi->addControls1(QPoint(9 + coords.x(), 35));
    gbi->addControls1(QPoint(11 + coords.x(), 45));
    gbi->addControls1(QPoint(13 + coords.x(), 50));
    gbi->addControls1(QPoint(17 + coords.x(), 56));

    gbi->addControls2(QPoint(19 + coords.x(), 41));
    gbi->addControls2(QPoint(25 + coords.x(), 46));
    gbi->addControls2(QPoint(31 + coords.x(), 41));
    gbi->addControls2(QPoint(31 + coords.x(), 30));
    gbi->addControls2(QPoint(25 + coords.x(), 25));
    gbi->addControls2(QPoint(19 + coords.x(), 30));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lk(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(20 + coords.x(), 60));
    gbi->addControls1(QPoint(20 + coords.x(), 50));
    gbi->addControls1(QPoint(22 + coords.x(), 48));
    gbi->addControls1(QPoint(30 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 60));
    gbi->addControls1(QPoint(29 + coords.x(), 40));
    gbi->addControls1(QPoint(40 + coords.x(), 25));
    gbi->addControls1(QPoint(28 + coords.x(), 25));
    gbi->addControls1(QPoint(20 + coords.x(), 38));
    gbi->addControls1(QPoint(20 + coords.x(), 10));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Ll(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(20 + coords.x(), 60));
    gbi->addControls1(QPoint(20 + coords.x(), 10));
    coords = QPoint(coords.x() +15, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lc(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 46));
    gbi->addControls1(QPoint(12 + coords.x(), 52));
    gbi->addControls1(QPoint(17 + coords.x(), 57));
    gbi->addControls1(QPoint(25 + coords.x(), 60));
    gbi->addControls1(QPoint(35 + coords.x(), 58));
    gbi->addControls1(QPoint(39 + coords.x(), 55));
    gbi->addControls1(QPoint(40 + coords.x(), 47));
    gbi->addControls1(QPoint(30 + coords.x(), 47));
    gbi->addControls1(QPoint(30 + coords.x(), 53));
    gbi->addControls1(QPoint(22 + coords.x(), 53));
    gbi->addControls1(QPoint(19 + coords.x(), 47));
    gbi->addControls1(QPoint(19 + coords.x(), 41));
    gbi->addControls1(QPoint(22 + coords.x(), 35));
    gbi->addControls1(QPoint(30 + coords.x(), 35));
    gbi->addControls1(QPoint(30 + coords.x(), 40));
    gbi->addControls1(QPoint(40 + coords.x(), 40));
    gbi->addControls1(QPoint(39 + coords.x(), 33));
    gbi->addControls1(QPoint(35 + coords.x(), 28));
    gbi->addControls1(QPoint(25 + coords.x(), 26));
    gbi->addControls1(QPoint(17 + coords.x(), 29));
    gbi->addControls1(QPoint(12 + coords.x(), 34));
    gbi->addControls1(QPoint(10 + coords.x(), 40));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lf(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(15 + coords.x(), 20));
    gbi->addControls1(QPoint(10 + coords.x(), 20));
    gbi->addControls1(QPoint(10 + coords.x(), 30));
    gbi->addControls1(QPoint(15 + coords.x(), 30));
    gbi->addControls1(QPoint(15 + coords.x(), 60));
    gbi->addControls1(QPoint(25 + coords.x(), 60));
    gbi->addControls1(QPoint(25 + coords.x(), 30));
    gbi->addControls1(QPoint(30 + coords.x(), 30));
    gbi->addControls1(QPoint(30 + coords.x(), 20));
    gbi->addControls1(QPoint(25 + coords.x(), 20));
    gbi->addControls1(QPoint(25 + coords.x(), 18));
    gbi->addControls1(QPoint(27 + coords.x(), 15));
    gbi->addControls1(QPoint(30 + coords.x(), 15));
    gbi->addControls1(QPoint(30 + coords.x(), 10));
    gbi->addControls1(QPoint(27 + coords.x(), 10));
    gbi->addControls1(QPoint(25 + coords.x(), 10));
    gbi->addControls1(QPoint(18 + coords.x(), 12));
    gbi->addControls1(QPoint(15 + coords.x(), 18));
    coords = QPoint(coords.x() +25, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lh(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(20 + coords.x(), 10));
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(20 + coords.x(), 60));
    gbi->addControls1(QPoint(20 + coords.x(), 37));
    gbi->addControls1(QPoint(22 + coords.x(), 36));
    gbi->addControls1(QPoint(25 + coords.x(), 35));
    gbi->addControls1(QPoint(27 + coords.x(), 36));
    gbi->addControls1(QPoint(30 + coords.x(), 37));
    gbi->addControls1(QPoint(30 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 39));
    gbi->addControls1(QPoint(40 + coords.x(), 33));
    gbi->addControls1(QPoint(38 + coords.x(), 29));
    gbi->addControls1(QPoint(35 + coords.x(), 26));
    gbi->addControls1(QPoint(31 + coords.x(), 25));
    gbi->addControls1(QPoint(25 + coords.x(), 26));
    gbi->addControls1(QPoint(20 + coords.x(), 30));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lb(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(20 + coords.x(), 60));
    gbi->addControls1(QPoint(20 + coords.x(), 56));
    gbi->addControls1(QPoint(24 + coords.x(), 58));
    gbi->addControls1(QPoint(29 + coords.x(), 60));
    gbi->addControls1(QPoint(34 + coords.x(), 58));
    gbi->addControls1(QPoint(38 + coords.x(), 54));
    gbi->addControls1(QPoint(39 + coords.x(), 50));
    gbi->addControls1(QPoint(40 + coords.x(), 42));
    gbi->addControls1(QPoint(39 + coords.x(), 34));
    gbi->addControls1(QPoint(36 + coords.x(), 30));
    gbi->addControls1(QPoint(34 + coords.x(), 28));
    gbi->addControls1(QPoint(29 + coords.x(), 26));
    gbi->addControls1(QPoint(20 + coords.x(), 28));
    gbi->addControls1(QPoint(20 + coords.x(), 10));

    gbi->addControls2(QPoint(20 + coords.x(), 50));
    gbi->addControls2(QPoint(22 + coords.x(), 52));
    gbi->addControls2(QPoint(25 + coords.x(), 53));
    gbi->addControls2(QPoint(28 + coords.x(), 52));
    gbi->addControls2(QPoint(30 + coords.x(), 48));
    gbi->addControls2(QPoint(30 + coords.x(), 46));
    gbi->addControls2(QPoint(30 + coords.x(), 41));
    gbi->addControls2(QPoint(30 + coords.x(), 36));
    gbi->addControls2(QPoint(30 + coords.x(), 34));
    gbi->addControls2(QPoint(28 + coords.x(), 32));
    gbi->addControls2(QPoint(25 + coords.x(), 31));
    gbi->addControls2(QPoint(22 + coords.x(), 32));
    gbi->addControls2(QPoint(20 + coords.x(), 34));

    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Ld(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(40 + coords.x(), 10));
    gbi->addControls1(QPoint(40 + coords.x(), 60));
    gbi->addControls1(QPoint(30 + coords.x(), 60));
    gbi->addControls1(QPoint(30 + coords.x(), 56));
    gbi->addControls1(QPoint(26 + coords.x(), 58));
    gbi->addControls1(QPoint(21 + coords.x(), 60));
    gbi->addControls1(QPoint(16 + coords.x(), 58));
    gbi->addControls1(QPoint(13 + coords.x(), 54));
    gbi->addControls1(QPoint(11 + coords.x(), 50));
    gbi->addControls1(QPoint(10 + coords.x(), 42));
    gbi->addControls1(QPoint(11 + coords.x(), 34));
    gbi->addControls1(QPoint(13 + coords.x(), 30));
    gbi->addControls1(QPoint(16 + coords.x(), 28));
    gbi->addControls1(QPoint(21 + coords.x(), 26));
    gbi->addControls1(QPoint(30 + coords.x(), 28));
    gbi->addControls1(QPoint(30 + coords.x(), 10));

    gbi->addControls2(QPoint(20 + coords.x(), 50));
    gbi->addControls2(QPoint(22 + coords.x(), 52));
    gbi->addControls2(QPoint(25 + coords.x(), 53));
    gbi->addControls2(QPoint(28 + coords.x(), 52));
    gbi->addControls2(QPoint(30 + coords.x(), 48));
    gbi->addControls2(QPoint(30 + coords.x(), 46));
    gbi->addControls2(QPoint(30 + coords.x(), 41));
    gbi->addControls2(QPoint(30 + coords.x(), 36));
    gbi->addControls2(QPoint(30 + coords.x(), 34));
    gbi->addControls2(QPoint(28 + coords.x(), 32));
    gbi->addControls2(QPoint(22 + coords.x(), 32));
    gbi->addControls2(QPoint(20 + coords.x(), 34));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::La(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(40 + coords.x(), 25));
    gbi->addControls1(QPoint(40 + coords.x(), 60));
    gbi->addControls1(QPoint(30 + coords.x(), 60));
    gbi->addControls1(QPoint(30 + coords.x(), 56));
    gbi->addControls1(QPoint(26 + coords.x(), 58));
    gbi->addControls1(QPoint(21 + coords.x(), 60));
    gbi->addControls1(QPoint(16 + coords.x(), 58));
    gbi->addControls1(QPoint(13 + coords.x(), 54));
    gbi->addControls1(QPoint(11 + coords.x(), 50));
    gbi->addControls1(QPoint(10 + coords.x(), 42));
    gbi->addControls1(QPoint(11 + coords.x(), 34));
    gbi->addControls1(QPoint(13 + coords.x(), 30));
    gbi->addControls1(QPoint(16 + coords.x(), 28));
    gbi->addControls1(QPoint(21 + coords.x(), 26));
    gbi->addControls1(QPoint(30 + coords.x(), 28));
    gbi->addControls1(QPoint(30 + coords.x(), 25));

    gbi->addControls2(QPoint(20 + coords.x(), 50));
    gbi->addControls2(QPoint(22 + coords.x(), 52));
    gbi->addControls2(QPoint(25 + coords.x(), 53));
    gbi->addControls2(QPoint(28 + coords.x(), 52));
    gbi->addControls2(QPoint(30 + coords.x(), 48));
    gbi->addControls2(QPoint(30 + coords.x(), 46));
    gbi->addControls2(QPoint(30 + coords.x(), 41));
    gbi->addControls2(QPoint(30 + coords.x(), 36));
    gbi->addControls2(QPoint(30 + coords.x(), 34));
    gbi->addControls2(QPoint(28 + coords.x(), 32));
    gbi->addControls2(QPoint(25 + coords.x(), 31));
    gbi->addControls2(QPoint(22 + coords.x(), 32));
    gbi->addControls2(QPoint(20 + coords.x(), 34));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lg(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(40 + coords.x(), 25));
    gbi->addControls1(QPoint(39 + coords.x(), 60));
    gbi->addControls1(QPoint(37 + coords.x(), 68));
    gbi->addControls1(QPoint(33 + coords.x(), 73));
    gbi->addControls1(QPoint(29 + coords.x(), 75));
    gbi->addControls1(QPoint(25 + coords.x(), 75));
    gbi->addControls1(QPoint(21 + coords.x(), 74));
    gbi->addControls1(QPoint(17 + coords.x(), 72));
    gbi->addControls1(QPoint(13 + coords.x(), 69));
    gbi->addControls1(QPoint(14 + coords.x(), 63));
    gbi->addControls1(QPoint(17 + coords.x(), 66));
    gbi->addControls1(QPoint(25 + coords.x(), 68));
    gbi->addControls1(QPoint(31 + coords.x(), 64));
    gbi->addControls1(QPoint(31 + coords.x(), 58));
    gbi->addControls1(QPoint(21 + coords.x(), 60));
    gbi->addControls1(QPoint(16 + coords.x(), 58));
    gbi->addControls1(QPoint(13 + coords.x(), 54));
    gbi->addControls1(QPoint(11 + coords.x(), 50));
    gbi->addControls1(QPoint(10 + coords.x(), 42));
    gbi->addControls1(QPoint(11 + coords.x(), 34));
    gbi->addControls1(QPoint(13 + coords.x(), 30));
    gbi->addControls1(QPoint(16 + coords.x(), 28));
    gbi->addControls1(QPoint(21 + coords.x(), 26));
    gbi->addControls1(QPoint(30 + coords.x(), 28));
    gbi->addControls1(QPoint(30 + coords.x(), 25));

    gbi->addControls2(QPoint(20 + coords.x(), 50));
    gbi->addControls2(QPoint(22 + coords.x(), 52));
    gbi->addControls2(QPoint(25 + coords.x(), 53));
    gbi->addControls2(QPoint(28 + coords.x(), 52));
    gbi->addControls2(QPoint(30 + coords.x(), 48));
    gbi->addControls2(QPoint(30 + coords.x(), 46));
    gbi->addControls2(QPoint(30 + coords.x(), 41));
    gbi->addControls2(QPoint(30 + coords.x(), 36));
    gbi->addControls2(QPoint(30 + coords.x(), 34));
    gbi->addControls2(QPoint(28 + coords.x(), 32));
    gbi->addControls2(QPoint(25 + coords.x(), 31));
    gbi->addControls2(QPoint(22 + coords.x(), 32));
    gbi->addControls2(QPoint(20 + coords.x(), 34));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Le(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(38 + coords.x(), 54));
    gbi->addControls1(QPoint(37 + coords.x(), 57));
    gbi->addControls1(QPoint(34 + coords.x(), 59));
    gbi->addControls1(QPoint(30 + coords.x(), 60));
    gbi->addControls1(QPoint(27 + coords.x(), 60));
    gbi->addControls1(QPoint(24 + coords.x(), 60));
    gbi->addControls1(QPoint(20 + coords.x(), 59));
    gbi->addControls1(QPoint(15 + coords.x(), 56));
    gbi->addControls1(QPoint(11 + coords.x(), 51));
    gbi->addControls1(QPoint(10 + coords.x(), 44));
    gbi->addControls1(QPoint(10 + coords.x(), 37));
    gbi->addControls1(QPoint(12 + coords.x(), 31));
    gbi->addControls1(QPoint(17 + coords.x(), 26));
    gbi->addControls1(QPoint(24 + coords.x(), 25));
    gbi->addControls1(QPoint(31 + coords.x(), 26));
    gbi->addControls1(QPoint(36 + coords.x(), 31));
    gbi->addControls1(QPoint(38 + coords.x(), 37));
    gbi->addControls1(QPoint(38 + coords.x(), 44));
    gbi->addControls1(QPoint(20 + coords.x(), 44));
    gbi->addControls1(QPoint(21 + coords.x(), 51));
    gbi->addControls1(QPoint(24 + coords.x(), 53));
    gbi->addControls1(QPoint(27 + coords.x(), 54));
    gbi->addControls1(QPoint(30 + coords.x(), 53));
    gbi->addControls1(QPoint(33 + coords.x(), 50));

    gbi->addControls2(QPoint(30 + coords.x(), 38));
    gbi->addControls2(QPoint(20 + coords.x(), 38));
    gbi->addControls2(QPoint(22 + coords.x(), 31));
    gbi->addControls2(QPoint(25 + coords.x(), 30));
    gbi->addControls2(QPoint(28 + coords.x(), 31));
    coords = QPoint(coords.x() +33, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lv(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 25));
    gbi->addControls1(QPoint(20 + coords.x(), 60));
    gbi->addControls1(QPoint(30 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 25));
    gbi->addControls1(QPoint(29 + coords.x(), 25));
    gbi->addControls1(QPoint(25 + coords.x(), 45));
    gbi->addControls1(QPoint(21 + coords.x(), 25));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lw(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 25));
    gbi->addControls1(QPoint(15 + coords.x(), 60));
    gbi->addControls1(QPoint(21 + coords.x(), 60));
    gbi->addControls1(QPoint(25 + coords.x(), 35));
    gbi->addControls1(QPoint(28 + coords.x(), 60));
    gbi->addControls1(QPoint(34 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 25));
    gbi->addControls1(QPoint(32 + coords.x(), 25));
    gbi->addControls1(QPoint(31 + coords.x(), 42));
    gbi->addControls1(QPoint(29 + coords.x(), 25));
    gbi->addControls1(QPoint(21 + coords.x(), 25));
    gbi->addControls1(QPoint(19 + coords.x(), 45));
    gbi->addControls1(QPoint(17 + coords.x(), 25));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lz(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 25));
    gbi->addControls1(QPoint(10 + coords.x(), 35));
    gbi->addControls1(QPoint(33 + coords.x(), 35));
    gbi->addControls1(QPoint(10 + coords.x(), 50));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 50));
    gbi->addControls1(QPoint(23 + coords.x(), 50));
    gbi->addControls1(QPoint(40 + coords.x(), 35));
    gbi->addControls1(QPoint(40 + coords.x(), 25));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lx(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 25));
    gbi->addControls1(QPoint(21 + coords.x(), 42));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(20 + coords.x(), 60));
    gbi->addControls1(QPoint(25 + coords.x(), 50));
    gbi->addControls1(QPoint(30 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 60));
    gbi->addControls1(QPoint(29 + coords.x(), 42));
    gbi->addControls1(QPoint(40 + coords.x(), 25));
    gbi->addControls1(QPoint(30 + coords.x(), 25));
    gbi->addControls1(QPoint(25 + coords.x(), 35));
    gbi->addControls1(QPoint(20 + coords.x(), 25));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lu(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 25));
    gbi->addControls1(QPoint(10 + coords.x(), 45));
    gbi->addControls1(QPoint(12 + coords.x(), 55));
    gbi->addControls1(QPoint(15 + coords.x(), 59));
    gbi->addControls1(QPoint(20 + coords.x(), 60));
    gbi->addControls1(QPoint(26 + coords.x(), 59));
    gbi->addControls1(QPoint(32 + coords.x(), 54));
    gbi->addControls1(QPoint(32 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 25));
    gbi->addControls1(QPoint(32 + coords.x(), 25));
    gbi->addControls1(QPoint(32 + coords.x(), 47));
    gbi->addControls1(QPoint(29 + coords.x(), 48));
    gbi->addControls1(QPoint(25 + coords.x(), 49));
    gbi->addControls1(QPoint(21 + coords.x(), 48));
    gbi->addControls1(QPoint(20 + coords.x(), 47));
    gbi->addControls1(QPoint(20 + coords.x(), 25));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lt(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(19 + coords.x(), 15));
    gbi->addControls1(QPoint(19 + coords.x(), 25));
    gbi->addControls1(QPoint(14 + coords.x(), 25));
    gbi->addControls1(QPoint(14 + coords.x(), 35));
    gbi->addControls1(QPoint(19 + coords.x(), 35));
    gbi->addControls1(QPoint(19 + coords.x(), 49));
    gbi->addControls1(QPoint(20 + coords.x(), 52));
    gbi->addControls1(QPoint(21 + coords.x(), 54));
    gbi->addControls1(QPoint(24 + coords.x(), 58));
    gbi->addControls1(QPoint(30 + coords.x(), 60));
    gbi->addControls1(QPoint(35 + coords.x(), 60));
    gbi->addControls1(QPoint(34 + coords.x(), 48));
    gbi->addControls1(QPoint(33 + coords.x(), 48));
    gbi->addControls1(QPoint(31 + coords.x(), 48));
    gbi->addControls1(QPoint(30 + coords.x(), 47));
    gbi->addControls1(QPoint(29 + coords.x(), 46));
    gbi->addControls1(QPoint(29 + coords.x(), 35));
    gbi->addControls1(QPoint(34 + coords.x(), 35));
    gbi->addControls1(QPoint(34 + coords.x(), 25));
    gbi->addControls1(QPoint(29 + coords.x(), 25));
    gbi->addControls1(QPoint(29 + coords.x(), 15));
    coords = QPoint(coords.x() +30, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Ly(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(18 + coords.x(), 25));
    gbi->addControls1(QPoint(25 + coords.x(), 54));
    gbi->addControls1(QPoint(30 + coords.x(), 25));
    gbi->addControls1(QPoint(38 + coords.x(), 25));
    gbi->addControls1(QPoint(30 + coords.x(), 60));
    gbi->addControls1(QPoint(29 + coords.x(), 65));
    gbi->addControls1(QPoint(27 + coords.x(), 69));
    gbi->addControls1(QPoint(24 + coords.x(), 73));
    gbi->addControls1(QPoint(19 + coords.x(), 76));
    gbi->addControls1(QPoint(15 + coords.x(), 76));
    gbi->addControls1(QPoint(14 + coords.x(), 69));
    gbi->addControls1(QPoint(19 + coords.x(), 67));
    gbi->addControls1(QPoint(21 + coords.x(), 62));
    gbi->addControls1(QPoint(21 + coords.x(), 58));
    gbi->addControls1(QPoint(10 + coords.x(), 25));
    coords = QPoint(coords.x() +33, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lp(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 25));
    gbi->addControls1(QPoint(10 + coords.x(), 75));
    gbi->addControls1(QPoint(20 + coords.x(), 75));
    gbi->addControls1(QPoint(20 + coords.x(), 56));
    gbi->addControls1(QPoint(24 + coords.x(), 58));
    gbi->addControls1(QPoint(29 + coords.x(), 60));
    gbi->addControls1(QPoint(34 + coords.x(), 58));
    gbi->addControls1(QPoint(38 + coords.x(), 54));
    gbi->addControls1(QPoint(39 + coords.x(), 50));
    gbi->addControls1(QPoint(40 + coords.x(), 42));
    gbi->addControls1(QPoint(39 + coords.x(), 34));
    gbi->addControls1(QPoint(36 + coords.x(), 30));
    gbi->addControls1(QPoint(34 + coords.x(), 28));
    gbi->addControls1(QPoint(29 + coords.x(), 26));
    gbi->addControls1(QPoint(20 + coords.x(), 28));
    gbi->addControls1(QPoint(20 + coords.x(), 25));

    gbi->addControls2(QPoint(20 + coords.x(), 50));
    gbi->addControls2(QPoint(22 + coords.x(), 52));
    gbi->addControls2(QPoint(25 + coords.x(), 53));
    gbi->addControls2(QPoint(28 + coords.x(), 52));
    gbi->addControls2(QPoint(30 + coords.x(), 48));
    gbi->addControls2(QPoint(30 + coords.x(), 46));
    gbi->addControls2(QPoint(30 + coords.x(), 41));
    gbi->addControls2(QPoint(30 + coords.x(), 36));
    gbi->addControls2(QPoint(30 + coords.x(), 34));
    gbi->addControls2(QPoint(28 + coords.x(), 32));
    gbi->addControls2(QPoint(25 + coords.x(), 31));
    gbi->addControls2(QPoint(22 + coords.x(), 32));
    gbi->addControls2(QPoint(20 + coords.x(), 34));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lq(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(40 + coords.x(), 25));
    gbi->addControls1(QPoint(40 + coords.x(), 75));
    gbi->addControls1(QPoint(30 + coords.x(), 75));
    gbi->addControls1(QPoint(30 + coords.x(), 56));
    gbi->addControls1(QPoint(26 + coords.x(), 58));
    gbi->addControls1(QPoint(21 + coords.x(), 60));
    gbi->addControls1(QPoint(16 + coords.x(), 58));
    gbi->addControls1(QPoint(13 + coords.x(), 54));
    gbi->addControls1(QPoint(11 + coords.x(), 50));
    gbi->addControls1(QPoint(10 + coords.x(), 42));
    gbi->addControls1(QPoint(11 + coords.x(), 34));
    gbi->addControls1(QPoint(13 + coords.x(), 30));
    gbi->addControls1(QPoint(16 + coords.x(), 28));
    gbi->addControls1(QPoint(21 + coords.x(), 26));
    gbi->addControls1(QPoint(30 + coords.x(), 28));
    gbi->addControls1(QPoint(30 + coords.x(), 25));

    gbi->addControls2(QPoint(20 + coords.x(), 50));
    gbi->addControls2(QPoint(22 + coords.x(), 52));
    gbi->addControls2(QPoint(25 + coords.x(), 53));
    gbi->addControls2(QPoint(28 + coords.x(), 52));
    gbi->addControls2(QPoint(30 + coords.x(), 48));
    gbi->addControls2(QPoint(30 + coords.x(), 46));
    gbi->addControls2(QPoint(30 + coords.x(), 41));
    gbi->addControls2(QPoint(30 + coords.x(), 36));
    gbi->addControls2(QPoint(30 + coords.x(), 34));
    gbi->addControls2(QPoint(28 + coords.x(), 32));
    gbi->addControls2(QPoint(25 + coords.x(), 31));
    gbi->addControls2(QPoint(22 + coords.x(), 32));
    gbi->addControls2(QPoint(20 + coords.x(), 34));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lr(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 25));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(20 + coords.x(), 60));
    gbi->addControls1(QPoint(20 + coords.x(), 40));
    gbi->addControls1(QPoint(22 + coords.x(), 37));
    gbi->addControls1(QPoint(26 + coords.x(), 36));
    gbi->addControls1(QPoint(31 + coords.x(), 37));
    gbi->addControls1(QPoint(31 + coords.x(), 25));
    gbi->addControls1(QPoint(29 + coords.x(), 25));
    gbi->addControls1(QPoint(28 + coords.x(), 25));
    gbi->addControls1(QPoint(23 + coords.x(), 26));
    gbi->addControls1(QPoint(20 + coords.x(), 30));
    gbi->addControls1(QPoint(20 + coords.x(), 25));
    coords = QPoint(coords.x() +26, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Ln(QPoint &coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 25));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(20 + coords.x(), 60));
    gbi->addControls1(QPoint(20 + coords.x(), 35));
    gbi->addControls1(QPoint(21 + coords.x(), 34));
    gbi->addControls1(QPoint(24 + coords.x(), 33));
    gbi->addControls1(QPoint(27 + coords.x(), 34));
    gbi->addControls1(QPoint(28 + coords.x(), 35));
    gbi->addControls1(QPoint(30 + coords.x(), 39));
    gbi->addControls1(QPoint(30 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 60));
    gbi->addControls1(QPoint(40 + coords.x(), 39));
    gbi->addControls1(QPoint(39 + coords.x(), 29));
    gbi->addControls1(QPoint(37 + coords.x(), 27));
    gbi->addControls1(QPoint(35 + coords.x(), 25));
    gbi->addControls1(QPoint(30 + coords.x(), 25));
    gbi->addControls1(QPoint(25 + coords.x(), 27));
    gbi->addControls1(QPoint(20 + coords.x(), 30));
    gbi->addControls1(QPoint(20 + coords.x(), 25));
    coords = QPoint(coords.x() + 35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lm(QPoint &coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 25));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(18 + coords.x(), 60));
    gbi->addControls1(QPoint(18 + coords.x(), 38));
    gbi->addControls1(QPoint(19 + coords.x(), 36));
    gbi->addControls1(QPoint(20 + coords.x(), 35));
    gbi->addControls1(QPoint(21 + coords.x(), 36));
    gbi->addControls1(QPoint(22 + coords.x(), 38));
    gbi->addControls1(QPoint(22 + coords.x(), 40));
    gbi->addControls1(QPoint(22 + coords.x(), 60));
    gbi->addControls1(QPoint(30 + coords.x(), 60));
    gbi->addControls1(QPoint(30 + coords.x(), 38));
    gbi->addControls1(QPoint(31 + coords.x(), 36));
    gbi->addControls1(QPoint(32 + coords.x(), 35));
    gbi->addControls1(QPoint(33 + coords.x(), 36));
    gbi->addControls1(QPoint(34 + coords.x(), 38));
    gbi->addControls1(QPoint(34 + coords.x(), 40));
    gbi->addControls1(QPoint(34 + coords.x(), 60));
    gbi->addControls1(QPoint(42 + coords.x(), 60));
    gbi->addControls1(QPoint(42 + coords.x(), 40));
    gbi->addControls1(QPoint(41 + coords.x(), 29));
    gbi->addControls1(QPoint(36 + coords.x(), 25));
    gbi->addControls1(QPoint(32 + coords.x(), 27));
    gbi->addControls1(QPoint(30 + coords.x(), 30));
    gbi->addControls1(QPoint(28 + coords.x(), 27));
    gbi->addControls1(QPoint(24 + coords.x(), 25));
    gbi->addControls1(QPoint(20 + coords.x(), 27));
    gbi->addControls1(QPoint(18 + coords.x(), 30));
    gbi->addControls1(QPoint(18 + coords.x(), 25));
    coords = QPoint(coords.x() + 37, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::LS(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 45));
    gbi->addControls1(QPoint(11 + coords.x(), 53));
    gbi->addControls1(QPoint(16 + coords.x(), 58));
    gbi->addControls1(QPoint(27 + coords.x(), 61));
    gbi->addControls1(QPoint(37 + coords.x(), 57));
    gbi->addControls1(QPoint(40 + coords.x(), 48));
    gbi->addControls1(QPoint(38 + coords.x(), 40));
    gbi->addControls1(QPoint(33 + coords.x(), 35));
    gbi->addControls1(QPoint(28 + coords.x(), 32));
    gbi->addControls1(QPoint(23 + coords.x(), 29));
    gbi->addControls1(QPoint(21 + coords.x(), 25));
    gbi->addControls1(QPoint(23 + coords.x(), 21));
    gbi->addControls1(QPoint(31 + coords.x(), 21));
    gbi->addControls1(QPoint(30 + coords.x(), 26));
    gbi->addControls1(QPoint(40 + coords.x(), 26));
    gbi->addControls1(QPoint(37 + coords.x(), 17));
    gbi->addControls1(QPoint(27 + coords.x(), 13));
    gbi->addControls1(QPoint(16 + coords.x(), 15));
    gbi->addControls1(QPoint(11 + coords.x(), 21));
    gbi->addControls1(QPoint(10 + coords.x(), 30));
    gbi->addControls1(QPoint(15 + coords.x(), 35));
    gbi->addControls1(QPoint(21 + coords.x(), 39));
    gbi->addControls1(QPoint(25 + coords.x(), 40));
    gbi->addControls1(QPoint(28 + coords.x(), 42));
    gbi->addControls1(QPoint(30 + coords.x(), 46));
    gbi->addControls1(QPoint(28 + coords.x(), 50));
    gbi->addControls1(QPoint(21 + coords.x(), 50));
    gbi->addControls1(QPoint(20 + coords.x(), 45));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lo(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(31 + coords.x(), 59));
    gbi->addControls1(QPoint(19 + coords.x(), 59));
    gbi->addControls1(QPoint(15 + coords.x(), 56));
    gbi->addControls1(QPoint(11 + coords.x(), 51));
    gbi->addControls1(QPoint(10 + coords.x(), 44));
    gbi->addControls1(QPoint(10 + coords.x(), 37));
    gbi->addControls1(QPoint(12 + coords.x(), 31));
    gbi->addControls1(QPoint(17 + coords.x(), 26));
    gbi->addControls1(QPoint(24 + coords.x(), 25));
    gbi->addControls1(QPoint(31 + coords.x(), 26));
    gbi->addControls1(QPoint(36 + coords.x(), 31));
    gbi->addControls1(QPoint(38 + coords.x(), 37));
    gbi->addControls1(QPoint(38 + coords.x(), 44));
    gbi->addControls1(QPoint(37 + coords.x(), 51));
    gbi->addControls1(QPoint(35 + coords.x(), 55));

    gbi->addControls2(QPoint(21 + coords.x(), 49));
    gbi->addControls2(QPoint(24 + coords.x(), 50));
    gbi->addControls2(QPoint(28 + coords.x(), 49));
    gbi->addControls2(QPoint(30 + coords.x(), 42));
    gbi->addControls2(QPoint(28 + coords.x(), 35));
    gbi->addControls2(QPoint(24 + coords.x(), 34));
    gbi->addControls2(QPoint(21 + coords.x(), 35));
    gbi->addControls2(QPoint(19 + coords.x(), 42));
    coords = QPoint(coords.x() +33, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Ls(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 49));
    gbi->addControls1(QPoint(14 + coords.x(), 56));
    gbi->addControls1(QPoint(22 + coords.x(), 60));
    gbi->addControls1(QPoint(31 + coords.x(), 60));
    gbi->addControls1(QPoint(37 + coords.x(), 56));
    gbi->addControls1(QPoint(38 + coords.x(), 48));
    gbi->addControls1(QPoint(33 + coords.x(), 43));
    gbi->addControls1(QPoint(28 + coords.x(), 40));
    gbi->addControls1(QPoint(23 + coords.x(), 38));
    gbi->addControls1(QPoint(23 + coords.x(), 34));
    gbi->addControls1(QPoint(27 + coords.x(), 33));
    gbi->addControls1(QPoint(30 + coords.x(), 34));
    gbi->addControls1(QPoint(30 + coords.x(), 38));
    gbi->addControls1(QPoint(40 + coords.x(), 38));
    gbi->addControls1(QPoint(37 + coords.x(), 29));
    gbi->addControls1(QPoint(31 + coords.x(), 25));
    gbi->addControls1(QPoint(22 + coords.x(), 25));
    gbi->addControls1(QPoint(15 + coords.x(), 28));
    gbi->addControls1(QPoint(13 + coords.x(), 37));
    gbi->addControls1(QPoint(17 + coords.x(), 41));
    gbi->addControls1(QPoint(21 + coords.x(), 42));
    gbi->addControls1(QPoint(25 + coords.x(), 44));
    gbi->addControls1(QPoint(28 + coords.x(), 46));
    gbi->addControls1(QPoint(30 + coords.x(), 49));
    gbi->addControls1(QPoint(30 + coords.x(), 53));
    gbi->addControls1(QPoint(27 + coords.x(), 54));
    gbi->addControls1(QPoint(22 + coords.x(), 53));
    gbi->addControls1(QPoint(20 + coords.x(), 49));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::LG(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(25 + coords.x(), 42));
    gbi->addControls1(QPoint(25 + coords.x(), 37));
    gbi->addControls1(QPoint(39 + coords.x(), 37));
    gbi->addControls1(QPoint(39 + coords.x(), 56));
    gbi->addControls1(QPoint(37 + coords.x(), 58));
    gbi->addControls1(QPoint(34 + coords.x(), 59));
    gbi->addControls1(QPoint(30 + coords.x(), 60));
    gbi->addControls1(QPoint(25 + coords.x(), 60));
    gbi->addControls1(QPoint(20 + coords.x(), 59));
    gbi->addControls1(QPoint(15 + coords.x(), 56));
    gbi->addControls1(QPoint(11 + coords.x(), 49));
    gbi->addControls1(QPoint(10 + coords.x(), 40));
    gbi->addControls1(QPoint(10 + coords.x(), 37));
    gbi->addControls1(QPoint(10 + coords.x(), 30));
    gbi->addControls1(QPoint(11 + coords.x(), 24));
    gbi->addControls1(QPoint(13 + coords.x(), 18));
    gbi->addControls1(QPoint(16 + coords.x(), 14));
    gbi->addControls1(QPoint(20 + coords.x(), 11));
    gbi->addControls1(QPoint(25 + coords.x(), 10));
    gbi->addControls1(QPoint(31 + coords.x(), 11));
    gbi->addControls1(QPoint(36 + coords.x(), 15));
    gbi->addControls1(QPoint(39 + coords.x(), 20));
    gbi->addControls1(QPoint(40 + coords.x(), 30));
    gbi->addControls1(QPoint(30 + coords.x(), 30));

    gbi->addControls1(QPoint(30 + coords.x(), 26));
    gbi->addControls1(QPoint(29 + coords.x(), 23));
    gbi->addControls1(QPoint(27 + coords.x(), 21));
    gbi->addControls1(QPoint(25 + coords.x(), 21));
    gbi->addControls1(QPoint(23 + coords.x(), 21));
    gbi->addControls1(QPoint(20 + coords.x(), 23));
    gbi->addControls1(QPoint(18 + coords.x(), 30));
    gbi->addControls1(QPoint(18 + coords.x(), 37));
    gbi->addControls1(QPoint(18 + coords.x(), 38));
    gbi->addControls1(QPoint(19 + coords.x(), 46));
    gbi->addControls1(QPoint(21 + coords.x(), 49));
    gbi->addControls1(QPoint(22 + coords.x(), 51));
    gbi->addControls1(QPoint(26 + coords.x(), 52));
    gbi->addControls1(QPoint(30 + coords.x(), 50));
    gbi->addControls1(QPoint(31 + coords.x(), 42));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lpoint(QPoint& coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(13 + coords.x(), 59));
    gbi->addControls1(QPoint(17 + coords.x(), 59));
    gbi->addControls1(QPoint(19 + coords.x(), 57));
    gbi->addControls1(QPoint(19 + coords.x(), 53));
    gbi->addControls1(QPoint(17 + coords.x(), 51));
    gbi->addControls1(QPoint(13 + coords.x(), 51));
    gbi->addControls1(QPoint(11 + coords.x(), 53));
    gbi->addControls1(QPoint(11 + coords.x(), 57));
    coords = QPoint(coords.x() +14, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lcolon(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(13 + coords.x(), 39));
    gbi->addControls1(QPoint(17 + coords.x(), 39));
    gbi->addControls1(QPoint(19 + coords.x(), 37));
    gbi->addControls1(QPoint(19 + coords.x(), 33));
    gbi->addControls1(QPoint(17 + coords.x(), 31));
    gbi->addControls1(QPoint(13 + coords.x(), 31));
    gbi->addControls1(QPoint(11 + coords.x(), 33));
    gbi->addControls1(QPoint(11 + coords.x(), 37));

    gbi->addControls4(QPoint(13 + coords.x(), 59));
    gbi->addControls4(QPoint(17 + coords.x(), 59));
    gbi->addControls4(QPoint(19 + coords.x(), 57));
    gbi->addControls4(QPoint(19 + coords.x(), 53));
    gbi->addControls4(QPoint(17 + coords.x(), 51));
    gbi->addControls4(QPoint(13 + coords.x(), 51));
    gbi->addControls4(QPoint(11 + coords.x(), 53));
    gbi->addControls4(QPoint(11 + coords.x(), 57));
    coords = QPoint(coords.x() +14, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lexpoi(QPoint& coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(11 + coords.x(), 10));
    gbi->addControls1(QPoint(12 + coords.x(), 45));
    gbi->addControls1(QPoint(17 + coords.x(), 45));
    gbi->addControls1(QPoint(18 + coords.x(), 10));

    gbi->addControls4(QPoint(13 + coords.x(), 59));
    gbi->addControls4(QPoint(17 + coords.x(), 59));
    gbi->addControls4(QPoint(19 + coords.x(), 57));
    gbi->addControls4(QPoint(19 + coords.x(), 53));
    gbi->addControls4(QPoint(17 + coords.x(), 51));
    gbi->addControls4(QPoint(13 + coords.x(), 51));
    gbi->addControls4(QPoint(11 + coords.x(), 53));
    gbi->addControls4(QPoint(11 + coords.x(), 57));
    coords = QPoint(coords.x() +14, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lminus(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 37));
    gbi->addControls1(QPoint(31 + coords.x(), 37));
    gbi->addControls1(QPoint(31 + coords.x(), 44));
    gbi->addControls1(QPoint(10 + coords.x(), 44));
    coords = QPoint(coords.x() +26, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lequally(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 30));
    gbi->addControls1(QPoint(35 + coords.x(), 30));
    gbi->addControls1(QPoint(35 + coords.x(), 37));
    gbi->addControls1(QPoint(10 + coords.x(), 37));

    gbi->addControls4(QPoint(10 + coords.x(), 45));
    gbi->addControls4(QPoint(35 + coords.x(), 45));
    gbi->addControls4(QPoint(35 + coords.x(), 52));
    gbi->addControls4(QPoint(10 + coords.x(), 52));
    coords = QPoint(coords.x() +30, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lplus(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 35));
    gbi->addControls1(QPoint(18 + coords.x(), 35));
    gbi->addControls1(QPoint(18 + coords.x(), 25));
    gbi->addControls1(QPoint(25 + coords.x(), 25));
    gbi->addControls1(QPoint(25 + coords.x(), 35));
    gbi->addControls1(QPoint(33 + coords.x(), 35));
    gbi->addControls1(QPoint(33 + coords.x(), 45));
    gbi->addControls1(QPoint(25 + coords.x(), 45));
    gbi->addControls1(QPoint(25 + coords.x(), 55));
    gbi->addControls1(QPoint(18 + coords.x(), 55));
    gbi->addControls1(QPoint(18 + coords.x(), 45));
    gbi->addControls1(QPoint(10 + coords.x(), 45));
    coords = QPoint(coords.x() +28, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lcomma(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(13 + coords.x(), 51));
    gbi->addControls1(QPoint(21 + coords.x(), 51));
    gbi->addControls1(QPoint(21 + coords.x(), 60));
    gbi->addControls1(QPoint(19 + coords.x(), 64));
    gbi->addControls1(QPoint(17 + coords.x(), 66));
    gbi->addControls1(QPoint(10 + coords.x(), 66));
    gbi->addControls1(QPoint(11 + coords.x(), 64));
    gbi->addControls1(QPoint(13 + coords.x(), 60));
    coords = QPoint(coords.x() +16, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lslashr(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(20 + coords.x(), 10));
    gbi->addControls1(QPoint(28 + coords.x(), 10));
    gbi->addControls1(QPoint(20 + coords.x(), 60));
    gbi->addControls1(QPoint(12 + coords.x(), 60));
    coords = QPoint(coords.x() +25, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lless(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 37));
    gbi->addControls1(QPoint(35 + coords.x(), 24));
    gbi->addControls1(QPoint(35 + coords.x(), 31));
    gbi->addControls1(QPoint(15 + coords.x(), 42));
    gbi->addControls1(QPoint(35 + coords.x(), 53));
    gbi->addControls1(QPoint(35 + coords.x(), 60));
    gbi->addControls1(QPoint(10 + coords.x(), 47));
    coords = QPoint(coords.x() +30, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lmore(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(35 + coords.x(), 37));
    gbi->addControls1(QPoint(10 + coords.x(), 24));
    gbi->addControls1(QPoint(10 + coords.x(), 31));
    gbi->addControls1(QPoint(30 + coords.x(), 42));
    gbi->addControls1(QPoint(10 + coords.x(), 53));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(35 + coords.x(), 47));
    coords = QPoint(coords.x() +30, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lchapl(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 70));
    gbi->addControls1(QPoint(10 + coords.x(), 75));
    gbi->addControls1(QPoint(20 + coords.x(), 75));
    gbi->addControls1(QPoint(20 + coords.x(), 9));
    gbi->addControls1(QPoint(10 + coords.x(), 9));
    gbi->addControls1(QPoint(10 + coords.x(), 14));
    gbi->addControls1(QPoint(15 + coords.x(), 14));
    gbi->addControls1(QPoint(15 + coords.x(), 70));
    coords = QPoint(coords.x() +15, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lchapr(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(20 + coords.x(), 70));
    gbi->addControls1(QPoint(20 + coords.x(), 75));
    gbi->addControls1(QPoint(10 + coords.x(), 75));
    gbi->addControls1(QPoint(10 + coords.x(), 9));
    gbi->addControls1(QPoint(20 + coords.x(), 9));
    gbi->addControls1(QPoint(20 + coords.x(), 14));
    gbi->addControls1(QPoint(15 + coords.x(), 14));
    gbi->addControls1(QPoint(15 + coords.x(), 70));
    coords = QPoint(coords.x() +15, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Llower(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(37 + coords.x(), 60));
    gbi->addControls1(QPoint(37 + coords.x(), 55));
    gbi->addControls1(QPoint(10 + coords.x(), 55));
    coords = QPoint(coords.x() +32, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lunit(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(17 + coords.x(), 10));
    gbi->addControls1(QPoint(27 + coords.x(), 10));
    gbi->addControls1(QPoint(27 + coords.x(), 60));
    gbi->addControls1(QPoint(17 + coords.x(), 60));
    gbi->addControls1(QPoint(17 + coords.x(), 28));
    gbi->addControls1(QPoint(10 + coords.x(), 30));
    gbi->addControls1(QPoint(10 + coords.x(), 22));
    coords = QPoint(coords.x() +23, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Ltwo(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(23 + coords.x(), 50));
    gbi->addControls1(QPoint(35 + coords.x(), 50));
    gbi->addControls1(QPoint(35 + coords.x(), 60));
    gbi->addControls1(QPoint(12 + coords.x(), 60));
    gbi->addControls1(QPoint(12 + coords.x(), 50));
    gbi->addControls1(QPoint(27 + coords.x(), 27));
    gbi->addControls1(QPoint(24 + coords.x(), 23));
    gbi->addControls1(QPoint(20 + coords.x(), 25));
    gbi->addControls1(QPoint(18 + coords.x(), 35));
    gbi->addControls1(QPoint(10 + coords.x(), 30));
    gbi->addControls1(QPoint(12 + coords.x(), 20));
    gbi->addControls1(QPoint(17 + coords.x(), 13));
    gbi->addControls1(QPoint(25 + coords.x(), 10));
    gbi->addControls1(QPoint(33 + coords.x(), 15));
    gbi->addControls1(QPoint(37 + coords.x(), 25));
    gbi->addControls1(QPoint(33 + coords.x(), 35));
    coords = QPoint(coords.x() +32, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lthree(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 22));
    gbi->addControls1(QPoint(10 + coords.x(), 12));
    gbi->addControls1(QPoint(33 + coords.x(), 12));
    gbi->addControls1(QPoint(27 + coords.x(), 27));
    gbi->addControls1(QPoint(32 + coords.x(), 37));
    gbi->addControls1(QPoint(33 + coords.x(), 45));
    gbi->addControls1(QPoint(32 + coords.x(), 53));
    gbi->addControls1(QPoint(27 + coords.x(), 58));
    gbi->addControls1(QPoint(20 + coords.x(), 60));
    gbi->addControls1(QPoint(10 + coords.x(), 58));
    gbi->addControls1(QPoint(10 + coords.x(), 50));
    gbi->addControls1(QPoint(17 + coords.x(), 48));
    gbi->addControls1(QPoint(19 + coords.x(), 45));
    gbi->addControls1(QPoint(17 + coords.x(), 40));
    gbi->addControls1(QPoint(12 + coords.x(), 35));
    gbi->addControls1(QPoint(18 + coords.x(), 22));
    coords = QPoint(coords.x() +28, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lfour(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(33 + coords.x(), 11));
    gbi->addControls1(QPoint(33 + coords.x(), 60));
    gbi->addControls1(QPoint(23 + coords.x(), 60));
    gbi->addControls1(QPoint(23 + coords.x(), 45));
    gbi->addControls1(QPoint(10 + coords.x(), 45));
    gbi->addControls1(QPoint(23 + coords.x(), 11));

    gbi->addControls2(QPoint(25 + coords.x(), 23));
    gbi->addControls2(QPoint(27 + coords.x(), 23));
    gbi->addControls2(QPoint(27 + coords.x(), 39));
    gbi->addControls2(QPoint(20 + coords.x(), 39));
    coords = QPoint(coords.x() +28, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lfive(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 37));
    gbi->addControls1(QPoint(17 + coords.x(), 10));
    gbi->addControls1(QPoint(35 + coords.x(), 10));
    gbi->addControls1(QPoint(35 + coords.x(), 23));
    gbi->addControls1(QPoint(25 + coords.x(), 28));
    gbi->addControls1(QPoint(32 + coords.x(), 37));
    gbi->addControls1(QPoint(33 + coords.x(), 45));
    gbi->addControls1(QPoint(32 + coords.x(), 53));
    gbi->addControls1(QPoint(27 + coords.x(), 58));
    gbi->addControls1(QPoint(20 + coords.x(), 60));
    gbi->addControls1(QPoint(10 + coords.x(), 58));
    gbi->addControls1(QPoint(10 + coords.x(), 50));
    gbi->addControls1(QPoint(17 + coords.x(), 48));
    gbi->addControls1(QPoint(19 + coords.x(), 45));
    gbi->addControls1(QPoint(17 + coords.x(), 40));

    coords = QPoint(coords.x() +30, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lsix(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(38 + coords.x(), 13));
    gbi->addControls1(QPoint(27 + coords.x(), 10));
    gbi->addControls1(QPoint(11 + coords.x(), 36));
    gbi->addControls1(QPoint(9 + coords.x(), 48));
    gbi->addControls1(QPoint(15 + coords.x(), 58));
    gbi->addControls1(QPoint(25 + coords.x(), 60));
    gbi->addControls1(QPoint(32 + coords.x(), 58));
    gbi->addControls1(QPoint(38 + coords.x(), 48));
    gbi->addControls1(QPoint(37 + coords.x(), 38));
    gbi->addControls1(QPoint(30 + coords.x(), 30));

    gbi->addControls2(QPoint(23 + coords.x(), 52));
    gbi->addControls2(QPoint(27 + coords.x(), 52));
    gbi->addControls2(QPoint(30 + coords.x(), 48));
    gbi->addControls2(QPoint(30 + coords.x(), 43));
    gbi->addControls2(QPoint(27 + coords.x(), 39));
    gbi->addControls2(QPoint(23 + coords.x(), 39));
    gbi->addControls2(QPoint(19 + coords.x(), 43));
    gbi->addControls2(QPoint(19 + coords.x(), 48));
    coords = QPoint(coords.x() +33, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lseven(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(40 + coords.x(), 10));
    gbi->addControls1(QPoint(28 + coords.x(), 60));
    gbi->addControls1(QPoint(18 + coords.x(), 60));
    gbi->addControls1(QPoint(25 + coords.x(), 24));
    gbi->addControls1(QPoint(12 + coords.x(), 24));
    gbi->addControls1(QPoint(12 + coords.x(), 10));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Leight(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(23 + coords.x(), 10));
    gbi->addControls1(QPoint(15 + coords.x(), 12));
    gbi->addControls1(QPoint(11 + coords.x(), 19));
    gbi->addControls1(QPoint(11 + coords.x(), 29));
    gbi->addControls1(QPoint(16 + coords.x(), 35));
    gbi->addControls1(QPoint(11 + coords.x(), 40));
    gbi->addControls1(QPoint(9  + coords.x(), 51));
    gbi->addControls1(QPoint(13 + coords.x(), 58));
    gbi->addControls1(QPoint(23 + coords.x(), 60));
    gbi->addControls1(QPoint(32 + coords.x(), 58));
    gbi->addControls1(QPoint(36 + coords.x(), 51));
    gbi->addControls1(QPoint(35 + coords.x(), 40));
    gbi->addControls1(QPoint(29 + coords.x(), 35));
    gbi->addControls1(QPoint(35 + coords.x(), 29));
    gbi->addControls1(QPoint(35 + coords.x(), 19));
    gbi->addControls1(QPoint(31 + coords.x(), 12));

    gbi->addControls2(QPoint(21 + coords.x(), 52));
    gbi->addControls2(QPoint(25 + coords.x(), 52));
    gbi->addControls2(QPoint(28 + coords.x(), 48));
    gbi->addControls2(QPoint(28 + coords.x(), 43));
    gbi->addControls2(QPoint(25 + coords.x(), 39));
    gbi->addControls2(QPoint(21 + coords.x(), 39));
    gbi->addControls2(QPoint(17 + coords.x(), 43));
    gbi->addControls2(QPoint(17 + coords.x(), 48));

    gbi->addControls3(QPoint(21 + coords.x(), 29));
    gbi->addControls3(QPoint(25 + coords.x(), 29));
    gbi->addControls3(QPoint(27 + coords.x(), 27));
    gbi->addControls3(QPoint(27 + coords.x(), 23));
    gbi->addControls3(QPoint(25 + coords.x(), 21));
    gbi->addControls3(QPoint(21 + coords.x(), 21));
    gbi->addControls3(QPoint(19 + coords.x(), 23));
    gbi->addControls3(QPoint(19 + coords.x(), 27));
    coords = QPoint(coords.x() +31, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lnine(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(18 + coords.x(), 10));
    gbi->addControls1(QPoint(11 + coords.x(), 16));
    gbi->addControls1(QPoint(9 + coords.x(), 28));
    gbi->addControls1(QPoint(15 + coords.x(), 38));
    gbi->addControls1(QPoint(25 + coords.x(), 40));
    gbi->addControls1(QPoint(17 + coords.x(), 54));
    gbi->addControls1(QPoint(26 + coords.x(), 60));
    gbi->addControls1(QPoint(38 + coords.x(), 28));
    gbi->addControls1(QPoint(37 + coords.x(), 18));
    gbi->addControls1(QPoint(30 + coords.x(), 10));

    gbi->addControls2(QPoint(23 + coords.x(), 32));
    gbi->addControls2(QPoint(27 + coords.x(), 32));
    gbi->addControls2(QPoint(30 + coords.x(), 28));
    gbi->addControls2(QPoint(30 + coords.x(), 23));
    gbi->addControls2(QPoint(27 + coords.x(), 19));
    gbi->addControls2(QPoint(23 + coords.x(), 19));
    gbi->addControls2(QPoint(19 + coords.x(), 23));
    gbi->addControls2(QPoint(19 + coords.x(), 28));
    coords = QPoint(coords.x() +32, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lzero(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(19 + coords.x(), 10));
    gbi->addControls1(QPoint(31 + coords.x(), 10));
    gbi->addControls1(QPoint(38 + coords.x(), 22));
    gbi->addControls1(QPoint(38 + coords.x(), 48));
    gbi->addControls1(QPoint(31 + coords.x(), 60));
    gbi->addControls1(QPoint(19 + coords.x(), 60));
    gbi->addControls1(QPoint(11 + coords.x(), 48));
    gbi->addControls1(QPoint(11 + coords.x(), 22));

    gbi->addControls2(QPoint(20 + coords.x(), 22));
    gbi->addControls2(QPoint(29 + coords.x(), 22));
    gbi->addControls2(QPoint(33 + coords.x(), 31));
    gbi->addControls2(QPoint(33 + coords.x(), 39));
    gbi->addControls2(QPoint(29 + coords.x(), 48));
    gbi->addControls2(QPoint(20 + coords.x(), 48));
    gbi->addControls2(QPoint(16 + coords.x(), 39));
    gbi->addControls2(QPoint(16 + coords.x(), 31));
    coords = QPoint(coords.x() +32, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lkaw(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(10 + coords.x(), 20));
    gbi->addControls1(QPoint(15 + coords.x(), 20));
    gbi->addControls1(QPoint(15 + coords.x(), 10));
    coords = QPoint(coords.x() +10, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::LB(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(27 + coords.x(), 60));
    gbi->addControls1(QPoint(34 + coords.x(), 58));
    gbi->addControls1(QPoint(40 + coords.x(), 53));
    gbi->addControls1(QPoint(40 + coords.x(), 45));
    gbi->addControls1(QPoint(37 + coords.x(), 39));
    gbi->addControls1(QPoint(31 + coords.x(), 35));
    gbi->addControls1(QPoint(36 + coords.x(), 30));
    gbi->addControls1(QPoint(38 + coords.x(), 25));
    gbi->addControls1(QPoint(36 + coords.x(), 16));
    gbi->addControls1(QPoint(30 + coords.x(), 12));
    gbi->addControls1(QPoint(22 + coords.x(), 10));

    gbi->addControls2(QPoint(19 + coords.x(), 40));
    gbi->addControls2(QPoint(19 + coords.x(), 52));
    gbi->addControls2(QPoint(29 + coords.x(), 50));
    gbi->addControls2(QPoint(31 + coords.x(), 46));
    gbi->addControls2(QPoint(29 + coords.x(), 42));

    gbi->addControls3(QPoint(21 + coords.x(), 29));
    gbi->addControls3(QPoint(25 + coords.x(), 29));
    gbi->addControls3(QPoint(27 + coords.x(), 27));
    gbi->addControls3(QPoint(27 + coords.x(), 23));
    gbi->addControls3(QPoint(25 + coords.x(), 21));
    gbi->addControls3(QPoint(21 + coords.x(), 21));
    gbi->addControls3(QPoint(19 + coords.x(), 23));
    gbi->addControls3(QPoint(19 + coords.x(), 27));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Li(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 26));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(19 + coords.x(), 60));
    gbi->addControls1(QPoint(19 + coords.x(), 26));

    gbi->addControls4(QPoint(13 + coords.x(), 19));
    gbi->addControls4(QPoint(17 + coords.x(), 19));
    gbi->addControls4(QPoint(19 + coords.x(), 17));
    gbi->addControls4(QPoint(19 + coords.x(), 13));
    gbi->addControls4(QPoint(17 + coords.x(), 11));
    gbi->addControls4(QPoint(13 + coords.x(), 11));
    gbi->addControls4(QPoint(11 + coords.x(), 13));
    gbi->addControls4(QPoint(11 + coords.x(), 17));
    coords = QPoint(coords.x() +14, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lj(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(20 + coords.x(), 26));
    gbi->addControls1(QPoint(20 + coords.x(), 60));
    gbi->addControls1(QPoint(20 + coords.x(), 60));
    gbi->addControls1(QPoint(19 + coords.x(), 65));
    gbi->addControls1(QPoint(17 + coords.x(), 69));
    gbi->addControls1(QPoint(14 + coords.x(), 73));
    gbi->addControls1(QPoint(9 + coords.x(), 76));
    gbi->addControls1(QPoint(5 + coords.x(), 76));
    gbi->addControls1(QPoint(4 + coords.x(), 69));
    gbi->addControls1(QPoint(9 + coords.x(), 67));
    gbi->addControls1(QPoint(11 + coords.x(), 62));
    gbi->addControls1(QPoint(11 + coords.x(), 58));
    gbi->addControls1(QPoint(11 + coords.x(), 60));
    gbi->addControls1(QPoint(11 + coords.x(), 26));

    gbi->addControls4(QPoint(13 + coords.x(), 19));
    gbi->addControls4(QPoint(17 + coords.x(), 19));
    gbi->addControls4(QPoint(19 + coords.x(), 17));
    gbi->addControls4(QPoint(19 + coords.x(), 13));
    gbi->addControls4(QPoint(17 + coords.x(), 11));
    gbi->addControls4(QPoint(13 + coords.x(), 11));
    gbi->addControls4(QPoint(11 + coords.x(), 13));
    gbi->addControls4(QPoint(11 + coords.x(), 17));
    coords = QPoint(coords.x() +15, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lup(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(10 + coords.x(), 20));
    gbi->addControls1(QPoint(15 + coords.x(), 20));
    gbi->addControls1(QPoint(15 + coords.x(), 10));

    gbi->addControls4(QPoint(18 + coords.x(), 10));
    gbi->addControls4(QPoint(18 + coords.x(), 20));
    gbi->addControls4(QPoint(23 + coords.x(), 20));
    gbi->addControls4(QPoint(23 + coords.x(), 10));
    coords = QPoint(coords.x() +18, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lslashl(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(12 + coords.x(), 10));
    gbi->addControls1(QPoint(20 + coords.x(), 10));
    gbi->addControls1(QPoint(28 + coords.x(), 60));
    gbi->addControls1(QPoint(20 + coords.x(), 60));
    coords = QPoint(coords.x() +25, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lpoicol(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(13 + coords.x(), 51));
    gbi->addControls1(QPoint(21 + coords.x(), 51));
    gbi->addControls1(QPoint(21 + coords.x(), 60));
    gbi->addControls1(QPoint(19 + coords.x(), 64));
    gbi->addControls1(QPoint(17 + coords.x(), 66));
    gbi->addControls1(QPoint(10 + coords.x(), 66));
    gbi->addControls1(QPoint(11 + coords.x(), 64));
    gbi->addControls1(QPoint(13 + coords.x(), 60));

    gbi->addControls4(QPoint(13 + coords.x(), 34));
    gbi->addControls4(QPoint(17 + coords.x(), 34));
    gbi->addControls4(QPoint(19 + coords.x(), 32));
    gbi->addControls4(QPoint(19 + coords.x(), 28));
    gbi->addControls4(QPoint(17 + coords.x(), 27));
    gbi->addControls4(QPoint(13 + coords.x(), 28));
    gbi->addControls4(QPoint(11 + coords.x(), 28));
    gbi->addControls4(QPoint(11 + coords.x(), 32));
    coords = QPoint(coords.x() +25, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lkawi(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 20));
    gbi->addControls1(QPoint(14 + coords.x(), 20));
    gbi->addControls1(QPoint(16 + coords.x(), 12));
    gbi->addControls1(QPoint(18 + coords.x(), 20));
    gbi->addControls1(QPoint(22 + coords.x(), 20));
    gbi->addControls1(QPoint(18 + coords.x(), 10));
    gbi->addControls1(QPoint(14 + coords.x(), 10));
    coords = QPoint(coords.x() +25, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lqw(QPoint& coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 25));
    gbi->addControls1(QPoint(14 + coords.x(), 15));
    gbi->addControls1(QPoint(22 + coords.x(), 10));
    gbi->addControls1(QPoint(30 + coords.x(), 15));
    gbi->addControls1(QPoint(32 + coords.x(), 25));
    gbi->addControls1(QPoint(29 + coords.x(), 33));
    gbi->addControls1(QPoint(25 + coords.x(), 38));
    gbi->addControls1(QPoint(25 + coords.x(), 40));
    gbi->addControls1(QPoint(19 + coords.x(), 40));
    gbi->addControls1(QPoint(19 + coords.x(), 38));
    gbi->addControls1(QPoint(23 + coords.x(), 33));
    gbi->addControls1(QPoint(26 + coords.x(), 25));
    gbi->addControls1(QPoint(22 + coords.x(), 17));
    gbi->addControls1(QPoint(17 + coords.x(), 20));
    gbi->addControls1(QPoint(18 + coords.x(), 25));

    gbi->addControls4(QPoint(20 + coords.x(), 59));
    gbi->addControls4(QPoint(24 + coords.x(), 59));
    gbi->addControls4(QPoint(26 + coords.x(), 57));
    gbi->addControls4(QPoint(26 + coords.x(), 53));
    gbi->addControls4(QPoint(24 + coords.x(), 51));
    gbi->addControls4(QPoint(20 + coords.x(), 51));
    gbi->addControls4(QPoint(18 + coords.x(), 53));
    gbi->addControls4(QPoint(18 + coords.x(), 57));
    coords = QPoint(coords.x() +27, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lcleft(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(14 + coords.x(), 18));
    gbi->addControls1(QPoint(18 + coords.x(), 31));
    gbi->addControls1(QPoint(18 + coords.x(), 40));
    gbi->addControls1(QPoint(18 + coords.x(), 49));
    gbi->addControls1(QPoint(14 + coords.x(), 62));
    gbi->addControls1(QPoint(10 + coords.x(), 70));
    gbi->addControls1(QPoint(14 + coords.x(), 70));
    gbi->addControls1(QPoint(18 + coords.x(), 62));
    gbi->addControls1(QPoint(21 + coords.x(), 49));
    gbi->addControls1(QPoint(22 + coords.x(), 40));
    gbi->addControls1(QPoint(21 + coords.x(), 31));
    gbi->addControls1(QPoint(18 + coords.x(), 18));
    gbi->addControls1(QPoint(14 + coords.x(), 10));
    coords = QPoint(coords.x() +17, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lcright(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(18 + coords.x(), 10));
    gbi->addControls1(QPoint(14 + coords.x(), 18));
    gbi->addControls1(QPoint(10 + coords.x(), 31));
    gbi->addControls1(QPoint(10 + coords.x(), 40));
    gbi->addControls1(QPoint(10 + coords.x(), 49));
    gbi->addControls1(QPoint(14 + coords.x(), 62));
    gbi->addControls1(QPoint(18 + coords.x(), 70));
    gbi->addControls1(QPoint(22 + coords.x(), 70));
    gbi->addControls1(QPoint(18 + coords.x(), 62));
    gbi->addControls1(QPoint(15 + coords.x(), 49));
    gbi->addControls1(QPoint(14 + coords.x(), 40));
    gbi->addControls1(QPoint(15 + coords.x(), 31));
    gbi->addControls1(QPoint(18 + coords.x(), 18));
    gbi->addControls1(QPoint(22 + coords.x(), 10));
    coords = QPoint(coords.x() +17, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lslsl(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 10));
    gbi->addControls1(QPoint(10 + coords.x(), 60));
    gbi->addControls1(QPoint(18 + coords.x(), 60));
    gbi->addControls1(QPoint(18 + coords.x(), 10));
    coords = QPoint(coords.x() +13, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Lstar(QPoint &coords) noexcept{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(23 + coords.x(), 10));
    gbi->addControls1(QPoint(17 + coords.x(), 10));
    gbi->addControls1(QPoint(18 + coords.x(), 20));
    gbi->addControls1(QPoint(12 + coords.x(), 15));
    gbi->addControls1(QPoint(10 + coords.x(), 21));
    gbi->addControls1(QPoint(16 + coords.x(), 25));
    gbi->addControls1(QPoint(12 + coords.x(), 32));
    gbi->addControls1(QPoint(17 + coords.x(), 35));

    gbi->addControls1(QPoint(20 + coords.x(), 27));

    gbi->addControls1(QPoint(23 + coords.x(), 35));
    gbi->addControls1(QPoint(28 + coords.x(), 32));
    gbi->addControls1(QPoint(24 + coords.x(), 25));
    gbi->addControls1(QPoint(30 + coords.x(), 21));
    gbi->addControls1(QPoint(28 + coords.x(), 15));
    gbi->addControls1(QPoint(22 + coords.x(), 20));
    coords = QPoint(coords.x() +13, 0);
    return gbi;
}

inline GraphicsPainter*LettersFactory::Ldollar(QPoint& coords) noexcept
{
    GraphicsPainter *gbi = new GraphicsPainter();
    gbi->addControls1(QPoint(10 + coords.x(), 45));
    gbi->addControls1(QPoint(11 + coords.x(), 53));
    gbi->addControls1(QPoint(16 + coords.x(), 58));
    gbi->addControls1(QPoint(23 + coords.x(), 61));
    gbi->addControls1(QPoint(23 + coords.x(), 66));
    gbi->addControls1(QPoint(31 + coords.x(), 66));
    gbi->addControls1(QPoint(31 + coords.x(), 61));
    gbi->addControls1(QPoint(37 + coords.x(), 57));
    gbi->addControls1(QPoint(40 + coords.x(), 48));
    gbi->addControls1(QPoint(38 + coords.x(), 40));
    gbi->addControls1(QPoint(33 + coords.x(), 35));
    gbi->addControls1(QPoint(28 + coords.x(), 32));
    gbi->addControls1(QPoint(23 + coords.x(), 29));
    gbi->addControls1(QPoint(23 + coords.x(), 25));
    gbi->addControls1(QPoint(23 + coords.x(), 21));
    gbi->addControls1(QPoint(31 + coords.x(), 21));
    gbi->addControls1(QPoint(30 + coords.x(), 26));
    gbi->addControls1(QPoint(40 + coords.x(), 26));
    gbi->addControls1(QPoint(37 + coords.x(), 17));
    gbi->addControls1(QPoint(31 + coords.x(), 13));
    gbi->addControls1(QPoint(31 + coords.x(), 7 ));
    gbi->addControls1(QPoint(23 + coords.x(), 7 ));
    gbi->addControls1(QPoint(23 + coords.x(), 13));
    gbi->addControls1(QPoint(16 + coords.x(), 15));
    gbi->addControls1(QPoint(11 + coords.x(), 21));
    gbi->addControls1(QPoint(10 + coords.x(), 30));
    gbi->addControls1(QPoint(15 + coords.x(), 35));
    gbi->addControls1(QPoint(21 + coords.x(), 39));
    gbi->addControls1(QPoint(25 + coords.x(), 40));
    gbi->addControls1(QPoint(28 + coords.x(), 42));
    gbi->addControls1(QPoint(30 + coords.x(), 46));
    gbi->addControls1(QPoint(28 + coords.x(), 50));
    gbi->addControls1(QPoint(21 + coords.x(), 50));
    gbi->addControls1(QPoint(20 + coords.x(), 45));
    coords = QPoint(coords.x() +35, 0);
    return gbi;
}
#endif // LETTERMACROS_HPP
