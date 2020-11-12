
#ifndef ACONNECTION_HPP
#define ACONNECTION_HPP

#include <functional>

#include <QObject>
#include <QNetworkReply>
#include <QList>

class QString;
class QJsonDocument;

namespace GitHub
{
    struct IConnection
    {
        public:
            typedef std::function<void(const std::string &)> Callback;

            virtual ~IConnection() = default;

        private:
            friend class Request;
            virtual void get(const std::string &, const Callback &) = 0;
    };
}

#endif
