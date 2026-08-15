#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/OnRoomStatisticsUpdatedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnRoomStatisticsUpdatedCallbackInternalImplementation)
namespace Epic::OnlineServices::RTC {
class OnRoomStatisticsUpdatedCallbackInternal;
}
namespace Epic::OnlineServices::RTC {
struct RoomStatisticsUpdatedInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::RTC {
class OnRoomStatisticsUpdatedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternalImplementation*, "Epic.OnlineServices.RTC", "OnRoomStatisticsUpdatedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::RTC {
// Is value type: false
// CS Name: Epic.OnlineServices.RTC.OnRoomStatisticsUpdatedCallbackInternalImplementation
class CORDL_TYPE OnRoomStatisticsUpdatedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804fb0b0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfoInternal>  data) ;

static inline ::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804fb110, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnRoomStatisticsUpdatedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnRoomStatisticsUpdatedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnRoomStatisticsUpdatedCallbackInternalImplementation(OnRoomStatisticsUpdatedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnRoomStatisticsUpdatedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnRoomStatisticsUpdatedCallbackInternalImplementation(OnRoomStatisticsUpdatedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8165};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTC
