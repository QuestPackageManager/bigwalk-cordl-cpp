#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/CopyLastRedeemEntitlementsResultByIndexOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Ecom/zzzz__RedeemEntitlementsResultListType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyLastRedeemEntitlementsResultByIndexOptionsInternal)
namespace Epic::OnlineServices::Ecom {
struct CopyLastRedeemEntitlementsResultByIndexOptions;
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
struct CopyLastRedeemEntitlementsResultByIndexOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal, "Epic.OnlineServices.Ecom", "CopyLastRedeemEntitlementsResultByIndexOptionsInternal");
// Dependencies Epic.OnlineServices.Ecom.RedeemEntitlementsResultListType, System.IntPtr
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.CopyLastRedeemEntitlementsResultByIndexOptionsInternal
struct CORDL_TYPE CopyLastRedeemEntitlementsResultByIndexOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180512060, size 0xc0, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Ecom__CopyLastRedeemEntitlementsResultByIndexOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyLastRedeemEntitlementsResultByIndexOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_EntitlementIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_ResultType", ty: "::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType", modifiers: "", def_value: None }]
constexpr CopyLastRedeemEntitlementsResultByIndexOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, uint32_t  m_EntitlementIndex, ::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType  m_ResultType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8913};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_EntitlementIndex, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_EntitlementIndex;

/// @brief Field m_ResultType, offset: 0x14, size: 0x4, def value: None
 ::Epic::OnlineServices::Ecom::RedeemEntitlementsResultListType  m_ResultType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal, m_EntitlementIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal, m_ResultType) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::CopyLastRedeemEntitlementsResultByIndexOptionsInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom
