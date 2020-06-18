#pragma once
#include "../TypeDefiniton.hpp"
#include "Constants.hpp"
#include "../../BindableMemberPlaceholder.hpp"
#include "ChannelMonitoring.hpp"

namespace machineTool
{

struct Monitoring_t
{
  BindableMemberPlaceholder<BindableMember, ChannelMonitoring_t> Channels;
};

} // namespace machineTool

REFL_TYPE(machineTool::Monitoring_t,
          open62541Cpp::attribute::UaObjectType{
              .NodeId = open62541Cpp::constexp::NodeId(constants::NsMachineToolUri, UA_MACHINETOOLID_MONITORINGTYPE)})
REFL_FIELD(Channels,
           open62541Cpp::attribute::MemberInTypeNodeId{
               .NodeId = open62541Cpp::constexp::NodeId(constants::NsMachineToolUri, UA_MACHINETOOLID_MONITORINGTYPE_MONITOREDELEMENT)},
           open62541Cpp::attribute::PlaceholderOptional())
REFL_END
