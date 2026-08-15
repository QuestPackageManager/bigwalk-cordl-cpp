#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/GetEntitlementsByNameCountOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetEntitlementsByNameCountOptionsInternal)
namespace Epic::OnlineServices::Ecom {
struct GetEntitlementsByNameCountOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct GetEntitlementsByNameCountOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::GetEntitlementsByNameCountOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::GetEntitlementsByNameCountOptionsInternal, "Epic.OnlineServices.Ecom", "GetEntitlementsByNameCountOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.GetEntitlementsByNameCountOptionsInternal
struct CORDL_TYPE GetEntitlementsByNameCountOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::GetEntitlementsByNameCountOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::GetEntitlementsByNameCountOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6820, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804e6900, size 0x190, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Ecom::GetEntitlementsByNameCountOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::GetEntitlementsByNameCountOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::GetEntitlementsByNameCountOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Ecom__GetEntitlementsByNameCountOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr GetEntitlementsByNameCountOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_EntitlementName", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr GetEntitlementsByNameCountOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_EntitlementName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8933};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_EntitlementName, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_EntitlementName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::GetEntitlementsByNameCountOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::GetEntitlementsByNameCountOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::GetEntitlementsByNameCountOptionsInternal, m_EntitlementName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::GetEntitlementsByNameCountOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom
