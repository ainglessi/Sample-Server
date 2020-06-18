#pragma once
#include "../TypeDefiniton.hpp"
#include "Constants.hpp"
#include "ProductionJob.hpp"
#include "../ns0/OrderedList.hpp"

namespace machineTool
{

struct ProductionJobList_t : public ns0::OrderedList_t<ProductionJob_t>
{
};

} // namespace machineTool

REFL_TYPE(machineTool::ProductionJobList_t,
          Bases<ns0::OrderedList_t<machineTool::ProductionJob_t>>(),
          open62541Cpp::attribute::UaObjectType{
              .NodeId = open62541Cpp::constexp::NodeId(constants::NsMachineToolUri, UA_MACHINETOOLID_PRODUCTIONJOBLISTTYPE)})
REFL_FIELD(OrderedObjects,
           open62541Cpp::attribute::MemberInTypeNodeId{
               .NodeId = open62541Cpp::constexp::NodeId(constants::NsMachineToolUri, UA_MACHINETOOLID_PRODUCTIONJOBLISTTYPE_ORDEREDOBJECT_PLACEHOLDER)},
           open62541Cpp::attribute::PlaceholderOptional())
REFL_END
