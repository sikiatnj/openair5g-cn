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

#include "CreateUEContxtApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

CreateUEContxtApi::CreateUEContxtApi(std::shared_ptr<Pistache::Rest::Router> rtr) { 
    router = rtr;
};

void CreateUEContxtApi::init() {
    setupRoutes();
}

void CreateUEContxtApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Put(*router, base + "/ue-contexts/:ueContextId", Routes::bind(&CreateUEContxtApi::create_ue_context_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&CreateUEContxtApi::create_ue_contxt_api_default_handler, this));
}

void CreateUEContxtApi::create_ue_context_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto ueContextId = request.param(":ueContextId").as<std::string>();
    
    // Getting the body param
    
    UeContextCreateData ueContextCreateData;
    
    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());
    
      ueContextCreateData.fromJson(request_body);
    
      this->create_ue_context(ueContextId, ueContextCreateData, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}

void CreateUEContxtApi::create_ue_contxt_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}
}
}
}

