/**
* AMF MT Service
* AMF Mobile Termination Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * RatType.h
 *
 * 
 */

#ifndef RatType_H_
#define RatType_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  RatType
    : public ModelBase
{
public:
    RatType();
    virtual ~RatType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// RatType members


protected:
};

}
}
}
}

#endif /* RatType_H_ */
