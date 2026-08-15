#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogPlayerUseWeaponDataInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogPlayerUseWeaponDataInternal)
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerUseWeaponData;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerUseWeaponDataInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponDataInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponDataInternal, "Epic.OnlineServices.AntiCheatCommon", "LogPlayerUseWeaponDataInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.LogPlayerUseWeaponDataInternal
struct CORDL_TYPE LogPlayerUseWeaponDataInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804f1a20, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180525f00, size 0xf0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatCommon__LogPlayerUseWeaponData_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr LogPlayerUseWeaponDataInternal() ;

// Ctor Parameters [CppParam { name: "m_PlayerHandle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PlayerPosition", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PlayerViewRotation", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_IsPlayerViewZoomed", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IsMeleeAttack", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_WeaponName", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr LogPlayerUseWeaponDataInternal(::System::IntPtr  m_PlayerHandle, ::System::IntPtr  m_PlayerPosition, ::System::IntPtr  m_PlayerViewRotation, int32_t  m_IsPlayerViewZoomed, int32_t  m_IsMeleeAttack, ::System::IntPtr  m_WeaponName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9371};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_PlayerHandle, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_PlayerHandle;

/// @brief Field m_PlayerPosition, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_PlayerPosition;

/// @brief Field m_PlayerViewRotation, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_PlayerViewRotation;

/// @brief Field m_IsPlayerViewZoomed, offset: 0x18, size: 0x4, def value: None
 int32_t  m_IsPlayerViewZoomed;

/// @brief Field m_IsMeleeAttack, offset: 0x1c, size: 0x4, def value: None
 int32_t  m_IsMeleeAttack;

/// @brief Field m_WeaponName, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_WeaponName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponDataInternal, m_PlayerHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponDataInternal, m_PlayerPosition) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponDataInternal, m_PlayerViewRotation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponDataInternal, m_IsPlayerViewZoomed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponDataInternal, m_IsMeleeAttack) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponDataInternal, m_WeaponName) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponDataInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
