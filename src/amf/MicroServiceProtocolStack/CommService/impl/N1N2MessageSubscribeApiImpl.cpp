/**
* AMF Communicaiton Service
* AMF Communication Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

#include "N1N2MessageSubscribeApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

N1N2MessageSubscribeApiImpl::N1N2MessageSubscribeApiImpl(std::shared_ptr<Pistache::Rest::Router> rtr)
    : N1N2MessageSubscribeApi(rtr)
    { }

void N1N2MessageSubscribeApiImpl::n1_n2_message_subscribe(const std::string &ueContextId, const UeN1N2InfoSubscriptionCreateData &ueN1N2InfoSubscriptionCreateData, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}
