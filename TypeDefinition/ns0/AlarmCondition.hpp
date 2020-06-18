#pragma once
#include "../TypeDefiniton.hpp"
#include "Constants.hpp"
#include "AcknowledgeableCondition.hpp"

namespace ns0
{

struct AlarmCondition_t : public AcknowledgeableCondition_t
{
  ///\todo declare fields
};

} // namespace ns0

REFL_TYPE(ns0::AlarmCondition_t,
          Bases<ns0::AcknowledgeableCondition_t>(),
          open62541Cpp::attribute::UaObjectType{
              .NodeId = open62541Cpp::constexp::NodeId(constants::Ns0Uri, UA_NS0ID_ALARMCONDITIONTYPE)})
REFL_END
