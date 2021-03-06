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


#include "N2InfoContainer.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

N2InfoContainer::N2InfoContainer()
{
    m_SmInfoIsSet = false;
    m_NrppaInfoIsSet = false;
    m_PwsInfoIsSet = false;
    m_AreaOfValidityIsSet = false;
    
}

N2InfoContainer::~N2InfoContainer()
{
}

void N2InfoContainer::validate()
{
    // TODO: implement validation
}

nlohmann::json N2InfoContainer::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["n2InformationClass"] = ModelBase::toJson(m_N2InformationClass);
    {
        nlohmann::json jsonArray;
        for( auto& item : m_SmInfo )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val["smInfo"] = jsonArray;
        } 
    }
    if(m_NrppaInfoIsSet)
    {
        val["nrppaInfo"] = ModelBase::toJson(m_NrppaInfo);
    }
    if(m_PwsInfoIsSet)
    {
        val["pwsInfo"] = ModelBase::toJson(m_PwsInfo);
    }
    if(m_AreaOfValidityIsSet)
    {
        val["areaOfValidity"] = ModelBase::toJson(m_AreaOfValidity);
    }
    

    return val;
}

void N2InfoContainer::fromJson(const nlohmann::json& val)
{
    {
        m_SmInfo.clear();
        if(val.find("smInfo") != val.end())
        {
            for( auto& item : val["smInfo"] )
            {
                
                if(item.is_null())
                {
                    m_SmInfo.push_back( N2SmInformation() );
                }
                else
                {
                    N2SmInformation newItem;
                    newItem.fromJson(item);
                    m_SmInfo.push_back( newItem );
                }
                
            }
        }
    }
    if(val.find("nrppaInfo") != val.end())
    {
        if(!val["nrppaInfo"].is_null())
        {
            NrppaInformation newItem;
            newItem.fromJson(val["nrppaInfo"]);
            setNrppaInfo( newItem );
        }
        
    }
    if(val.find("pwsInfo") != val.end())
    {
        if(!val["pwsInfo"].is_null())
        {
            PwsInformation newItem;
            newItem.fromJson(val["pwsInfo"]);
            setPwsInfo( newItem );
        }
        
    }
    if(val.find("areaOfValidity") != val.end())
    {
        if(!val["areaOfValidity"].is_null())
        {
            AreaOfValidity newItem;
            newItem.fromJson(val["areaOfValidity"]);
            setAreaOfValidity( newItem );
        }
        
    }
    
}


N2InformationClass N2InfoContainer::getN2InformationClass() const
{
    return m_N2InformationClass;
}
void N2InfoContainer::setN2InformationClass(N2InformationClass const& value)
{
    m_N2InformationClass = value;
    
}
std::vector<N2SmInformation>& N2InfoContainer::getSmInfo()
{
    return m_SmInfo;
}
bool N2InfoContainer::smInfoIsSet() const
{
    return m_SmInfoIsSet;
}
void N2InfoContainer::unsetSmInfo()
{
    m_SmInfoIsSet = false;
}
NrppaInformation N2InfoContainer::getNrppaInfo() const
{
    return m_NrppaInfo;
}
void N2InfoContainer::setNrppaInfo(NrppaInformation const& value)
{
    m_NrppaInfo = value;
    m_NrppaInfoIsSet = true;
}
bool N2InfoContainer::nrppaInfoIsSet() const
{
    return m_NrppaInfoIsSet;
}
void N2InfoContainer::unsetNrppaInfo()
{
    m_NrppaInfoIsSet = false;
}
PwsInformation N2InfoContainer::getPwsInfo() const
{
    return m_PwsInfo;
}
void N2InfoContainer::setPwsInfo(PwsInformation const& value)
{
    m_PwsInfo = value;
    m_PwsInfoIsSet = true;
}
bool N2InfoContainer::pwsInfoIsSet() const
{
    return m_PwsInfoIsSet;
}
void N2InfoContainer::unsetPwsInfo()
{
    m_PwsInfoIsSet = false;
}
AreaOfValidity N2InfoContainer::getAreaOfValidity() const
{
    return m_AreaOfValidity;
}
void N2InfoContainer::setAreaOfValidity(AreaOfValidity const& value)
{
    m_AreaOfValidity = value;
    m_AreaOfValidityIsSet = true;
}
bool N2InfoContainer::areaOfValidityIsSet() const
{
    return m_AreaOfValidityIsSet;
}
void N2InfoContainer::unsetAreaOfValidity()
{
    m_AreaOfValidityIsSet = false;
}

}
}
}
}

