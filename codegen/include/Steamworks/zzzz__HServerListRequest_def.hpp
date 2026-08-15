#pragma once
// IWYU pragma private; include "Steamworks/HServerListRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HServerListRequest)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Steamworks {
struct HServerListRequest;
}
// Write type traits
MARK_VAL_T(::Steamworks::HServerListRequest);
DEFINE_IL2CPP_CLASS(::Steamworks::HServerListRequest, "Steamworks", "HServerListRequest");
// Dependencies System.IntPtr
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.HServerListRequest
struct CORDL_TYPE HServerListRequest {
public:
// Declarations
/// @brief Field Invalid, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Invalid, put=setStaticF_Invalid)) ::Steamworks::HServerListRequest  Invalid;

/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::HServerListRequest>"
constexpr operator  ::System::IEquatable_1<::Steamworks::HServerListRequest>*() ;

/// @brief Method Equals, addr 0x1805a8500, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::Steamworks::HServerListRequest  other) ;

/// @brief Method Equals, addr 0x1805a9f60, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0x1805a8300, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x1805a9fd0, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  value) ;

static inline ::Steamworks::HServerListRequest getStaticF_Invalid() ;

/// @brief Convert to "::System::IEquatable_1<::Steamworks::HServerListRequest>"
constexpr ::System::IEquatable_1<::Steamworks::HServerListRequest>* i___System__IEquatable_1___Steamworks__HServerListRequest_() ;

/// @brief Method op_Equality, addr 0x1805a8800, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Steamworks::HServerListRequest  x, ::Steamworks::HServerListRequest  y) ;

/// @brief Method op_Explicit, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline ::Steamworks::HServerListRequest op_Explicit___Steamworks__HServerListRequest(::System::IntPtr  value) ;

/// @brief Method op_Explicit, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr op_Explicit___System__IntPtr(::Steamworks::HServerListRequest  that) ;

/// @brief Method op_Inequality, addr 0x1805a8810, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Steamworks::HServerListRequest  x, ::Steamworks::HServerListRequest  y) ;

static inline void setStaticF_Invalid(::Steamworks::HServerListRequest  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr HServerListRequest() ;

// Ctor Parameters [CppParam { name: "m_HServerListRequest", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr HServerListRequest(::System::IntPtr  m_HServerListRequest) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16427};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_HServerListRequest, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_HServerListRequest;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::HServerListRequest, m_HServerListRequest) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::HServerListRequest) == 0x8, "Size mismatch!");

} // namespace end def Steamworks
