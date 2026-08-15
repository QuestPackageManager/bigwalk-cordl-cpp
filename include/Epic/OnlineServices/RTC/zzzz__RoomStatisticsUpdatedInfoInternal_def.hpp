#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/RoomStatisticsUpdatedInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RoomStatisticsUpdatedInfoInternal)
namespace Epic::OnlineServices::RTC {
struct RoomStatisticsUpdatedInfo;
}
namespace Epic::OnlineServices {
class ICallbackInfoInternal;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::RTC {
struct RoomStatisticsUpdatedInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfoInternal, "Epic.OnlineServices.RTC", "RoomStatisticsUpdatedInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::RTC {
// Is value type: true
// CS Name: Epic.OnlineServices.RTC.RoomStatisticsUpdatedInfoInternal
struct CORDL_TYPE RoomStatisticsUpdatedInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfo>*() ;

/// @brief Method Get, addr 0x1805024b0, size 0x110, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__RTC__RoomStatisticsUpdatedInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr RoomStatisticsUpdatedInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RoomName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Statistic", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr RoomStatisticsUpdatedInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RoomName, ::System::IntPtr  m_Statistic) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8177};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_RoomName, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_RoomName;

/// @brief Field m_Statistic, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_Statistic;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfoInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfoInternal, m_RoomName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfoInternal, m_Statistic) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTC::RoomStatisticsUpdatedInfoInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTC
