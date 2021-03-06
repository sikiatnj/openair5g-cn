/**
* AMF Location Service
* AMF Location Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

#include "ProvideLocationApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

ProvideLocationApi::ProvideLocationApi(std::shared_ptr<Pistache::Rest::Router> rtr) { 
    router = rtr;
};

void ProvideLocationApi::init() {
    setupRoutes();
}

void ProvideLocationApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Post(*router, base + "/:ueContextId/provide", Routes::bind(&ProvideLocationApi::provide_location_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&ProvideLocationApi::provide_location_api_default_handler, this));
}

void ProvideLocationApi::provide_location_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto ueContextId = request.param(":ueContextId").as<std::string>();
    
    // Getting the body param
    
    RequestUELocation requestUELocation;
    
    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());
    
      requestUELocation.fromJson(request_body);
    
      this->provide_location(ueContextId, requestUELocation, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}

void ProvideLocationApi::provide_location_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}
}
}
}

