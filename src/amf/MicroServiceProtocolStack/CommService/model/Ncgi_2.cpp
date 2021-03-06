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


#include "Ncgi_2.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Ncgi_2::Ncgi_2()
{
    m_NrCellId = "";
    
}

Ncgi_2::~Ncgi_2()
{
}

void Ncgi_2::validate()
{
    // TODO: implement validation
}

nlohmann::json Ncgi_2::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["plmnId"] = ModelBase::toJson(m_PlmnId);
    val["nrCellId"] = ModelBase::toJson(m_NrCellId);
    

    return val;
}

void Ncgi_2::fromJson(const nlohmann::json& val)
{
    setNrCellId(val.at("nrCellId"));
    
}


PlmnId Ncgi_2::getPlmnId() const
{
    return m_PlmnId;
}
void Ncgi_2::setPlmnId(PlmnId const& value)
{
    m_PlmnId = value;
    
}
std::string Ncgi_2::getNrCellId() const
{
    return m_NrCellId;
}
void Ncgi_2::setNrCellId(std::string const& value)
{
    m_NrCellId = value;
    
}

}
}
}
}

