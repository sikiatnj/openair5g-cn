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
/*
 * AreaOfValidity.h
 *
 * 
 */

#ifndef AreaOfValidity_H_
#define AreaOfValidity_H_


#include "ModelBase.h"

#include "Tai.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  AreaOfValidity
    : public ModelBase
{
public:
    AreaOfValidity();
    virtual ~AreaOfValidity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// AreaOfValidity members

    /// <summary>
    /// 
    /// </summary>
    Tai getTaList() const;
    void setTaList(Tai const& value);
    
protected:
    Tai m_TaList;

};

}
}
}
}

#endif /* AreaOfValidity_H_ */