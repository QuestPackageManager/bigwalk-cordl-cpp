#pragma once
// IWYU pragma private; include "GlobalNamespace/ControllerData.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ControllerData_def.hpp"
#include "GlobalNamespace/zzzz__GlyphButtonType_def.hpp"
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ControllerData.GetLocStringForAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, ::Rewired::AxisRange)>(&::GlobalNamespace::ControllerData::GetLocStringForAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803e4df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerData*>(),
                        {"GetLocStringForAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerData.GetLayoutName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::GlobalNamespace::ControllerData::GetLayoutName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803e4db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerData*>(),
                        {"GetLayoutName", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ControllerData::setStaticF_buttonTypeTable(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GlyphButtonType>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GlyphButtonType>*, "buttonTypeTable", ::GlobalNamespace::ControllerData*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GlyphButtonType>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GlyphButtonType>* GlobalNamespace::ControllerData::getStaticF_buttonTypeTable()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GlyphButtonType>*, "buttonTypeTable", ::GlobalNamespace::ControllerData*>();
}
inline void GlobalNamespace::ControllerData::setStaticF_actionTagTable(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, "actionTagTable", ::GlobalNamespace::ControllerData*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* GlobalNamespace::ControllerData::getStaticF_actionTagTable()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, "actionTagTable", ::GlobalNamespace::ControllerData*>();
}
inline void GlobalNamespace::ControllerData::setStaticF_actionLocStringTable(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,::Rewired::AxisRange>,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,::Rewired::AxisRange>,::StringW>*, "actionLocStringTable", ::GlobalNamespace::ControllerData*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,::Rewired::AxisRange>,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,::Rewired::AxisRange>,::StringW>* GlobalNamespace::ControllerData::getStaticF_actionLocStringTable()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,::Rewired::AxisRange>,::StringW>*, "actionLocStringTable", ::GlobalNamespace::ControllerData*>();
}
inline void GlobalNamespace::ControllerData::setStaticF_categoryStringTable(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, "categoryStringTable", ::GlobalNamespace::ControllerData*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* GlobalNamespace::ControllerData::getStaticF_categoryStringTable()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, "categoryStringTable", ::GlobalNamespace::ControllerData*>();
}
inline void GlobalNamespace::ControllerData::setStaticF_XBOX_360_CONTROLLER_GUID(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "XBOX_360_CONTROLLER_GUID", ::GlobalNamespace::ControllerData*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid GlobalNamespace::ControllerData::getStaticF_XBOX_360_CONTROLLER_GUID()  {
return ::cordl_internals::getStaticField<::System::Guid, "XBOX_360_CONTROLLER_GUID", ::GlobalNamespace::ControllerData*>();
}
inline void GlobalNamespace::ControllerData::setStaticF_XBOX_ONE_CONTROLLER_GUID(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "XBOX_ONE_CONTROLLER_GUID", ::GlobalNamespace::ControllerData*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid GlobalNamespace::ControllerData::getStaticF_XBOX_ONE_CONTROLLER_GUID()  {
return ::cordl_internals::getStaticField<::System::Guid, "XBOX_ONE_CONTROLLER_GUID", ::GlobalNamespace::ControllerData*>();
}
inline void GlobalNamespace::ControllerData::setStaticF_DS4_CONTROLLER_GUID(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "DS4_CONTROLLER_GUID", ::GlobalNamespace::ControllerData*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid GlobalNamespace::ControllerData::getStaticF_DS4_CONTROLLER_GUID()  {
return ::cordl_internals::getStaticField<::System::Guid, "DS4_CONTROLLER_GUID", ::GlobalNamespace::ControllerData*>();
}
inline void GlobalNamespace::ControllerData::setStaticF_DS5_CONTROLLER_GUID(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "DS5_CONTROLLER_GUID", ::GlobalNamespace::ControllerData*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid GlobalNamespace::ControllerData::getStaticF_DS5_CONTROLLER_GUID()  {
return ::cordl_internals::getStaticField<::System::Guid, "DS5_CONTROLLER_GUID", ::GlobalNamespace::ControllerData*>();
}
inline void GlobalNamespace::ControllerData::setStaticF_SWITCH_JOYCON_L_GUID(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "SWITCH_JOYCON_L_GUID", ::GlobalNamespace::ControllerData*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid GlobalNamespace::ControllerData::getStaticF_SWITCH_JOYCON_L_GUID()  {
return ::cordl_internals::getStaticField<::System::Guid, "SWITCH_JOYCON_L_GUID", ::GlobalNamespace::ControllerData*>();
}
inline void GlobalNamespace::ControllerData::setStaticF_SWITCH_JOYCON_R_GUID(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "SWITCH_JOYCON_R_GUID", ::GlobalNamespace::ControllerData*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid GlobalNamespace::ControllerData::getStaticF_SWITCH_JOYCON_R_GUID()  {
return ::cordl_internals::getStaticField<::System::Guid, "SWITCH_JOYCON_R_GUID", ::GlobalNamespace::ControllerData*>();
}
inline void GlobalNamespace::ControllerData::setStaticF_SWITCH_JOYCON_DUAL_GUID(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "SWITCH_JOYCON_DUAL_GUID", ::GlobalNamespace::ControllerData*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid GlobalNamespace::ControllerData::getStaticF_SWITCH_JOYCON_DUAL_GUID()  {
return ::cordl_internals::getStaticField<::System::Guid, "SWITCH_JOYCON_DUAL_GUID", ::GlobalNamespace::ControllerData*>();
}
inline void GlobalNamespace::ControllerData::setStaticF_SWITCH_JOYCON_CONSOLE_GUID(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "SWITCH_JOYCON_CONSOLE_GUID", ::GlobalNamespace::ControllerData*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid GlobalNamespace::ControllerData::getStaticF_SWITCH_JOYCON_CONSOLE_GUID()  {
return ::cordl_internals::getStaticField<::System::Guid, "SWITCH_JOYCON_CONSOLE_GUID", ::GlobalNamespace::ControllerData*>();
}
inline void GlobalNamespace::ControllerData::setStaticF_SWITCH_PRO_CONTROLLER_GUID(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "SWITCH_PRO_CONTROLLER_GUID", ::GlobalNamespace::ControllerData*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid GlobalNamespace::ControllerData::getStaticF_SWITCH_PRO_CONTROLLER_GUID()  {
return ::cordl_internals::getStaticField<::System::Guid, "SWITCH_PRO_CONTROLLER_GUID", ::GlobalNamespace::ControllerData*>();
}
inline void GlobalNamespace::ControllerData::setStaticF_SWITCH2_JOYCON_L_GUID(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "SWITCH2_JOYCON_L_GUID", ::GlobalNamespace::ControllerData*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid GlobalNamespace::ControllerData::getStaticF_SWITCH2_JOYCON_L_GUID()  {
return ::cordl_internals::getStaticField<::System::Guid, "SWITCH2_JOYCON_L_GUID", ::GlobalNamespace::ControllerData*>();
}
inline void GlobalNamespace::ControllerData::setStaticF_SWITCH2_JOYCON_R_GUID(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "SWITCH2_JOYCON_R_GUID", ::GlobalNamespace::ControllerData*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid GlobalNamespace::ControllerData::getStaticF_SWITCH2_JOYCON_R_GUID()  {
return ::cordl_internals::getStaticField<::System::Guid, "SWITCH2_JOYCON_R_GUID", ::GlobalNamespace::ControllerData*>();
}
inline void GlobalNamespace::ControllerData::setStaticF_SWITCH2_DUAL_GUID(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "SWITCH2_DUAL_GUID", ::GlobalNamespace::ControllerData*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid GlobalNamespace::ControllerData::getStaticF_SWITCH2_DUAL_GUID()  {
return ::cordl_internals::getStaticField<::System::Guid, "SWITCH2_DUAL_GUID", ::GlobalNamespace::ControllerData*>();
}
inline void GlobalNamespace::ControllerData::setStaticF_SWITCH2_HANDHELD_GUID(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "SWITCH2_HANDHELD_GUID", ::GlobalNamespace::ControllerData*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid GlobalNamespace::ControllerData::getStaticF_SWITCH2_HANDHELD_GUID()  {
return ::cordl_internals::getStaticField<::System::Guid, "SWITCH2_HANDHELD_GUID", ::GlobalNamespace::ControllerData*>();
}
inline void GlobalNamespace::ControllerData::setStaticF_SWITCH2_PRO_GUID(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "SWITCH2_PRO_GUID", ::GlobalNamespace::ControllerData*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid GlobalNamespace::ControllerData::getStaticF_SWITCH2_PRO_GUID()  {
return ::cordl_internals::getStaticField<::System::Guid, "SWITCH2_PRO_GUID", ::GlobalNamespace::ControllerData*>();
}
inline void GlobalNamespace::ControllerData::setStaticF_STEAM_CONTROLLER_GUID(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "STEAM_CONTROLLER_GUID", ::GlobalNamespace::ControllerData*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid GlobalNamespace::ControllerData::getStaticF_STEAM_CONTROLLER_GUID()  {
return ::cordl_internals::getStaticField<::System::Guid, "STEAM_CONTROLLER_GUID", ::GlobalNamespace::ControllerData*>();
}
inline ::StringW GlobalNamespace::ControllerData::GetLocStringForAction(int32_t  actionId, ::Rewired::AxisRange  axisRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerData*>(),
                        {"GetLocStringForAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::AxisRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, actionId, axisRange);
}
inline ::StringW GlobalNamespace::ControllerData::GetLayoutName(int32_t  layoutId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerData*>(),
                        {"GetLayoutName", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, layoutId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ControllerData::ControllerData()   {
}
