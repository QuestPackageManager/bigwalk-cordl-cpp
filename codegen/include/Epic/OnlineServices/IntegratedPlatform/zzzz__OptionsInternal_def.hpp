#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/OptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformManagementFlags_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OptionsInternal)
namespace Epic::OnlineServices::IntegratedPlatform {
struct Options;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::IntegratedPlatform {
struct OptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::IntegratedPlatform::OptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::IntegratedPlatform::OptionsInternal, "Epic.OnlineServices.IntegratedPlatform", "OptionsInternal");
// Dependencies Epic.OnlineServices.IntegratedPlatform.IntegratedPlatformManagementFlags, System.IntPtr
namespace Epic::OnlineServices::IntegratedPlatform {
// Is value type: true
// CS Name: Epic.OnlineServices.IntegratedPlatform.OptionsInternal
struct CORDL_TYPE OptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::Options>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::Options>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e7630, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x18051cee0, size 0xc0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::IntegratedPlatform::Options>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::Options>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::Options>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__IntegratedPlatform__Options_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr OptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Type", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags", modifiers: "", def_value: None }, CppParam { name: "m_InitOptions", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr OptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Type, ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  m_Flags, ::System::IntPtr  m_InitOptions) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8818};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Type, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Type;

/// @brief Field m_Flags, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  m_Flags;

/// @brief Field m_InitOptions, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_InitOptions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::OptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::OptionsInternal, m_Type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::OptionsInternal, m_Flags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::IntegratedPlatform::OptionsInternal, m_InitOptions) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::IntegratedPlatform::OptionsInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::IntegratedPlatform
