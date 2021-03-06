#ifndef DOMELEMENT_H
#define DOMELEMENT_H

#include <QLabel>
#include <QMap>

/**
 * @brief Base class that represents an HTML element.
 *
 * All supported HTML elements should inherit from this class.
 */
class DomElement : public QLabel
{
public:
    DomElement(QWidget *parent = 0);
    void setDoubleClickEnabled(bool isDoubleClickEnabled);
    bool getDoubleClickEnabled();
    virtual int getType() = 0;
    QMap<QString, QString> getAttributes();
    void setAttributes(QMap<QString, QString> attrs);
    virtual QString toHtml() = 0;
    static const int HEADING_TYPE = 1;
    static const int PARAGRAPH_TYPE = 2;
    static const int UNDERLINE_TYPE = 3;
    static const int STRIKETHROUGH_TYPE = 4;
    static const int ITALIC_TYPE = 5;
    static const int BOLD_TYPE = 6;
    static const int IMAGE_TYPE = 7;
    static const int ANCHOR_TYPE = 8;
    static const int SUBSCRIPT_TYPE = 9;
    static const int SUPERSCRIPT_TYPE = 10;
protected:
    QMap<QString, QString> attributes;
private:
    bool isDoubleClickEnabled;
};

#endif // DOMELEMENT_H
