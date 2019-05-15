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

#include "CreateSubscriptionApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

CreateSubscriptionApi::CreateSubscriptionApi(std::shared_ptr<Pistache::Rest::Router> rtr) { 
    router = rtr;
};

void CreateSubscriptionApi::init() {
    setupRoutes();
}

void CreateSubscriptionApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Post(*router, base + "/subscriptions", Routes::bind(&CreateSubscriptionApi::create_subscription_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&CreateSubscriptionApi::create_subscription_api_default_handler, this));
}

void CreateSubscriptionApi::create_subscription_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the body param
    
    AmfCreateEventSubscription amfCreateEventSubscription;
    
    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());
    
      amfCreateEventSubscription.fromJson(request_body);
    
      this->create_subscription(amfCreateEventSubscription, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}

void CreateSubscriptionApi::create_subscription_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}
}
}
}
