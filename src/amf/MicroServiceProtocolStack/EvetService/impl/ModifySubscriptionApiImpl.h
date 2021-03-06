/**
* Namf_EventExposure Service
* AMF Event Exposure Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

/*
* ModifySubscriptionApiImpl.h
*
* 
*/

#ifndef MODIFY_SUBSCRIPTION_API_IMPL_H_
#define MODIFY_SUBSCRIPTION_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <ModifySubscriptionApi.h>

#include <pistache/optional.h>

#include "AmfUpdatedEventSubscription.h"
#include "Object.h"
#include "ProblemDetails.h"
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class ModifySubscriptionApiImpl : public org::openapitools::server::api::ModifySubscriptionApi {
public:
    ModifySubscriptionApiImpl(std::shared_ptr<Pistache::Rest::Router>);
    ~ModifySubscriptionApiImpl() {}

    void modify_subscription(const std::string &subscriptionId, const std::vector<Object> &object, Pistache::Http::ResponseWriter &response);

};

}
}
}
}



#endif