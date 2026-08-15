#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/OnRoomStatisticsUpdatedCallbackInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnRoomStatisticsUpdatedCallbackInternal)
namespace Epic::OnlineServices::RTC {
struct RoomStatisticsUpdatedInfoInternal;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::RTC {
class OnRoomStatisticsUpdatedCallbackInternal;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternal*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternal*, "Epic.OnlineServices.RTC", "OnRoomStatisticsUpdatedCallbackInternal");
// Dependencies System.MulticastDelegate
namespace Epic::OnlineServices::RTC {
// Is value type: false
// CS Name: Epic.OnlineServices.RTC.OnRoomStatisticsUpdatedCallbackInternal
class CORDL_TYPE OnRoomStatisticsUpdatedCallbackInternal : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1804fb230, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1804dc830, size 0x20, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfoInternal>  data, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfoInternal>  data) ;

static inline ::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternal* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804dc850, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnRoomStatisticsUpdatedCallbackInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnRoomStatisticsUpdatedCallbackInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnRoomStatisticsUpdatedCallbackInternal(OnRoomStatisticsUpdatedCallbackInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnRoomStatisticsUpdatedCallbackInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnRoomStatisticsUpdatedCallbackInternal(OnRoomStatisticsUpdatedCallbackInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8164};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTC::OnRoomStatisticsUpdatedCallbackInternal) == 0x80, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTC
