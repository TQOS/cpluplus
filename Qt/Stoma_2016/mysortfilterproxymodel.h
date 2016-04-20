#ifndef MYSORTFILTERPROXYMODEL_H
#define MYSORTFILTERPROXYMODEL_H


#include <QDate>
#include <QSortFilterProxyModel>

class MySortFilterProxyModel : public QSortFilterProxyModel {
    Q_OBJECT
public:
    MySortFilterProxyModel(QObject *parent = 0);

    QDate filterMinimumDate() const;
    void setFilterMinimumDate(const QDate &date);

    QDate filterMaximumDate() const;
    void setFilterMaximumDate(const QDate &date);

protected:
    bool filterAcceptsRow(int sourceRow, const QModelIndex &sourceParent) const;
    bool lessThan(const QModelIndex &left, const QModelIndex &right) const;

private:
    bool dateInRange(const QDate &date) const;

    QDate minDate;
    QDate maxDate;
};

#endif // MYSORTFILTERPROXYMODEL_H
