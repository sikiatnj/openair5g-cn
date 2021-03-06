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
 * Tai_2.h
 *
 * 
 */

#ifndef Tai_2_H_
#define Tai_2_H_


#include "ModelBase.h"

#include <string>
#include "PlmnId.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  Tai_2
    : public ModelBase
{
public:
    Tai_2();
    virtual ~Tai_2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// Tai_2 members

    /// <summary>
    /// 
    /// </summary>
    PlmnId getPlmnId() const;
    void setPlmnId(PlmnId const& value);
        /// <summary>
    /// 
    /// </summary>
    std::string getTac() const;
    void setTac(std::string const& value);
    
protected:
    PlmnId m_PlmnId;

    std::string m_Tac;

};

}
}
}
}

#endif /* Tai_2_H_ */
