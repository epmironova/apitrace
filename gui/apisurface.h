#ifndef APISURFACE_H
#define APISURFACE_H

#include <QImage>
#include <QSize>
#include <QString>

class ApiSurface
{
public:
    ApiSurface();

    QSize size() const;
    void setSize(const QSize &size);

    void contentsFromBase64(const QByteArray &base64);

    QImage image() const;
    QImage thumb() const;

private:
    QSize  m_size;
    QImage m_image;
    QImage m_thumb;
};


class ApiTexture : public ApiSurface
{
public:
    ApiTexture();

    int unit() const;
    void setUnit(int un);

    int level() const;
    void setLevel(int l);

    QString target() const;
    void setTarget(const QString &str);

private:
    int m_unit;
    int m_level;
    QString m_target;
};

#endif