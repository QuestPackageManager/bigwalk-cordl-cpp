#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/PermissionStatusInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/KWS/zzzz__KWSPermissionStatus_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PermissionStatusInternal)
namespace Epic::OnlineServices::KWS {
struct PermissionStatus;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::KWS {
struct PermissionStatusInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::KWS::PermissionStatusInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::KWS::PermissionStatusInternal, "Epic.OnlineServices.KWS", "PermissionStatusInternal");
// Dependencies Epic.OnlineServices.KWS.KWSPermissionStatus, System.IntPtr
namespace Epic::OnlineServices::KWS {
// Is value type: true
// CS Name: Epic.OnlineServices.KWS.PermissionStatusInternal
struct CORDL_TYPE PermissionStatusInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::PermissionStatus>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::PermissionStatus>*() ;

/// @brief Method Get, addr 0x180517910, size 0x90, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::KWS::PermissionStatus>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::PermissionStatus>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::PermissionStatus>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__KWS__PermissionStatus_() ;

// Ctor Parameters []
// @brief default ctor
constexpr PermissionStatusInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Name", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Status", ty: "::Epic::OnlineServices::KWS::KWSPermissionStatus", modifiers: "", def_value: None }]
constexpr PermissionStatusInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Name, ::Epic::OnlineServices::KWS::KWSPermissionStatus  m_Status) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8778};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Name, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Name;

/// @brief Field m_Status, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::KWS::KWSPermissionStatus  m_Status;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::KWS::PermissionStatusInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::PermissionStatusInternal, m_Name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::PermissionStatusInternal, m_Status) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::KWS::PermissionStatusInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::KWS
