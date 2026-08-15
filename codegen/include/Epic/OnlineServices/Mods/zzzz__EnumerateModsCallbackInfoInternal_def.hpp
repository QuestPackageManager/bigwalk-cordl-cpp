#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/EnumerateModsCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Mods/zzzz__ModEnumerationType_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(EnumerateModsCallbackInfoInternal)
namespace Epic::OnlineServices::Mods {
struct EnumerateModsCallbackInfo;
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
namespace Epic::OnlineServices::Mods {
struct EnumerateModsCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal, "Epic.OnlineServices.Mods", "EnumerateModsCallbackInfoInternal");
// Dependencies Epic.OnlineServices.Mods.ModEnumerationType, Epic.OnlineServices.Result, System.IntPtr
namespace Epic::OnlineServices::Mods {
// Is value type: true
// CS Name: Epic.OnlineServices.Mods.EnumerateModsCallbackInfoInternal
struct CORDL_TYPE EnumerateModsCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfo>*() ;

/// @brief Method Get, addr 0x1804f75c0, size 0xd0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1802db4a0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Mods::EnumerateModsCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Mods__EnumerateModsCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr EnumerateModsCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Type", ty: "::Epic::OnlineServices::Mods::ModEnumerationType", modifiers: "", def_value: None }]
constexpr EnumerateModsCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_ClientData, ::Epic::OnlineServices::Mods::ModEnumerationType  m_Type) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8373};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ResultCode, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  m_ResultCode;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_ClientData, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_Type, offset: 0x18, size: 0x4, def value: None
 ::Epic::OnlineServices::Mods::ModEnumerationType  m_Type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal, m_ResultCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal, m_ClientData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal, m_Type) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Mods::EnumerateModsCallbackInfoInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Mods
